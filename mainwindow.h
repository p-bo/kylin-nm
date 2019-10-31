/*
 * Copyright (C) 2019 Tianjin KYLIN Information Technology Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, see <http://www.gnu.org/licenses/&gt;.
 *
 */

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QLabel>
#include <QSystemTrayIcon>
#include <QDesktopWidget>
#include <QScrollBar>
#include <QScrollArea>
#include <QPushButton>
#include <QScreen>
#include <QMenu>
#include <QAction>
#include <QDebug>
#include <QString>
#include <QTimer>

#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

#include <xcb/xcb.h>

#include "ksimplenm.h"
#include "loadingdiv.h"
#include "kylin-network-interface.h"

class OneConnForm;
class ConfForm;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void startLoading();
    void stopLoading();

    void setTrayIcon(QIcon icon);
    void setTrayLoading(bool isLoading);
    QIcon iconLanOnline, iconLanOffline;
    QIcon iconWifiFull, iconWifiHigh, iconWifiMedium, iconWifiLow;
    QIcon iconConnecting;
    QList<QIcon> loadIcons;

private:
    void checkSingle();
    void getActiveInfo();
    void getIface();
    void createTrayIcon();
    void moveBottomRight();
    bool checkLanOn();
    bool checkWlOn();
    void getLanList();
    void getWifiList();

    Ui::MainWindow *ui;

    LoadingDiv *loading;

    KSimpleNM *ksnm;
    ConfForm *confForm;
    QWidget *lanListWidget;
    QWidget *wifiListWidget;
    QWidget *optWifiWidget;

    QScrollArea *scrollAreal, *scrollAreaw;
    QLabel *lbLanList, *lbWifiList;

    QSystemTrayIcon *trayIcon;
    QMenu *trayIconMenu;

    QAction *m_miniSizeAction;
    QAction *m_quitAction;

    // 以太网卡和无线网卡名称
    QString lname, wname;

    //当前ScrollArea中选中的网络名称
    QString currSelNetName = "";

    // 主界面按钮底色
    QString btnOffQss, btnOnQss;

    //上一次获取wifi列表
    QStringList lastSlist;

    //循环检测网络连接状态
    QTimer *iconTimer;
    QTimer *check_isLanConnect;
    QTimer *check_isWifiConnect;
    QTimer *check_isNetOn;

    //按钮点击状态,0为假，1为真
    int isByClickConnect = 0;
    int is_btnNetList_clicked = 1;
    int is_btnWifiList_clicked = 0;
    int is_NetLineReady = 1;
    int is_exec_func = 1;

    int currentIconIndex;
    int updateFlag = 0;

private slots:
    void iconActivated(QSystemTrayIcon::ActivationReason reason);
    bool nativeEvent(const QByteArray &eventType, void *message, long *result);

    void on_btnNet_clicked();
    void on_btnWifi_clicked();
    void on_btnNetList_clicked(int flag=0);
    void on_btnWifiList_clicked();

    void getLanListDone(QStringList slist);
    void getWifiListDone(QStringList slist);
    void loadWifiListDone(QStringList slist);
    void updateWifiListDone(QStringList slist);

    void on_btnAdvConf_clicked();
    void on_btnNetList_pressed();
    void on_btnWifiList_pressed();

    void oneLanFormSelected(QString lanName);
    void oneWifiFormSelected(QString wifiName);
    void oneHideFormSelected(QString wifiName);
    void activeLanDisconn();
    void activeWifiDisconn();
    void on_btnAdvConf_pressed();
    void on_btnAdvConf_released();
    void on_isLanConnect();
    void on_isWifiConnect();
    void on_isNetOn();

    // 后台回调
    void enNetDone();
    void disNetDone();
    void enWifiDone();
    void disWifiDone();
    void keepDisWifiState();
    void connLanDone(int connFlag);
    void connDone(int connFlag);

    void iconStep();
};

#endif // MAINWINDOW_H
