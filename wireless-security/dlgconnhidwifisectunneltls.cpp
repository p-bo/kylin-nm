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


#include "dlgconnhidwifisectunneltls.h"
#include "ui_dlgconnhidwifisectunneltls.h"
#include "kylinheadfile.h"

DlgConnHidWifiSecTunnelTLS::DlgConnHidWifiSecTunnelTLS(int type, QWidget *parent) :
    WepOrWpa(type),
    QDialog(parent),
    ui(new Ui::DlgConnHidWifiSecTunnelTLS)
{
    ui->setupUi(this);

    this->setWindowFlags(Qt::FramelessWindowHint);
    this->setStyleSheet("border-radius:6px;background-color:rgba(19,19,20,0.95);border:1px solid rgba(255, 255, 255, 0.05);");

    ui->lbBoder->setStyleSheet("QLabel{border-radius:6px;background-color:rgba(19,19,20,0.95);border:1px solid rgba(255, 255, 255, 0.05);}");
    ui->lbBoder->hide();
    ui->lbLeftupTitle->setStyleSheet("QLabel{font-size:20px;color:rgba(255,255,255,0.97);background-color:transparent;}");
    ui->lbConn->setStyleSheet("QLabel{color:rgba(255,255,255,0.97);background-color:transparent;}");
    ui->lbNetName->setStyleSheet("QLabel{color:rgba(255,255,255,0.97);background-color:transparent;}");
    ui->lbSecurity->setStyleSheet("QLabel{color:rgba(255,255,255,0.97);background-color:transparent;}");
    ui->lbAuth->setStyleSheet("QLabel{color:rgba(255,255,255,0.97);background-color:transparent;}");
    ui->lbAnonyId->setStyleSheet("QLabel{color:rgba(255,255,255,0.97);background-color:transparent;}");
    ui->lbDomain->setStyleSheet("QLabel{color:rgba(255,255,255,0.97);background-color:transparent;}");
    ui->lbCA->setStyleSheet("QLabel{color:rgba(255,255,255,0.97);background-color:transparent;}");
    ui->lbCaPwd->setStyleSheet("QLabel{color:rgba(255,255,255,0.97);background-color:transparent;}");
    ui->checkBoxCA->setStyleSheet("QLabel{color:rgba(255,255,255,0.97);background-color:transparent;}");
    ui->lbInnerAuth->setStyleSheet("QLabel{color:rgba(255,255,255,0.97);background-color:transparent;}");
    ui->lbUserName->setStyleSheet("QLabel{color:rgba(255,255,255,0.97);background-color:transparent;}");
    ui->lbPassword->setStyleSheet("QLabel{color:rgba(255,255,255,0.97);background-color:transparent;}");

    ui->cbxConn->setStyleSheet("QComboBox{padding-left:20px;font-size:13px;color:rgba(255,255,255,1);border:1px solid rgba(255, 255, 255, 0.05);background:rgba(255,255,255,0.08);}"
                              "QComboBox::drop-down{border:0;width:30px;}"
                              "QComboBox::down-arrow{image:url(:/res/g/down_arrow.png);}");
    ui->leNetName->setStyleSheet("QLineEdit{color:rgba(255,255,255,0.97);background:rgba(255,255,255,0.08);}");
    ui->cbxSecurity->setStyleSheet("QComboBox{padding-left:20px;font-size:13px;color:rgba(255,255,255,1);border:1px solid rgba(255, 255, 255, 0.05);background:rgba(255,255,255,0.08);}"
                              "QComboBox::drop-down{border:0;width:30px;}"
                              "QComboBox::down-arrow{image:url(:/res/g/down_arrow.png);}");
    ui->cbxAuth->setStyleSheet("QComboBox{padding-left:20px;font-size:13px;color:rgba(255,255,255,1);border:1px solid rgba(255, 255, 255, 0.05);background:rgba(255,255,255,0.08);}"
                              "QComboBox::drop-down{border:0;width:30px;}"
                              "QComboBox::down-arrow{image:url(:/res/g/down_arrow.png);}");
    ui->leAnonyId->setStyleSheet("QLineEdit{color:rgba(255,255,255,0.97);background:rgba(255,255,255,0.08);}");
    ui->leDomain->setStyleSheet("QLineEdit{color:rgba(255,255,255,0.97);background:rgba(255,255,255,0.08);}");
    ui->cbxCA->setStyleSheet("QComboBox{padding-left:20px;font-size:13px;color:rgba(255,255,255,1);border:1px solid rgba(255, 255, 255, 0.05);background:rgba(255,255,255,0.08);}"
                              "QComboBox::drop-down{border:0;width:30px;}"
                              "QComboBox::down-arrow{image:url(:/res/g/down_arrow.png);}");
    ui->leCaPwd->setStyleSheet("QLineEdit{color:rgba(255,255,255,0.97);background:rgba(255,255,255,0.08);}");
    ui->checkBoxPwd->setStyleSheet("QCheckBox::indicator {width: 18px; height: 9px;}"
                                   "QCheckBox::indicator:checked {image: url(:/res/h/show-pwd.png);}"
                                   "QCheckBox::indicator:unchecked {image: url(:/res/h/hide-pwd.png);}");
    ui->checkBoxCA->setStyleSheet("QCheckBox{color:rgba(255,255,255,0.97);background-color:transparent;}");
    ui->cbxInnerAuth->setStyleSheet("QComboBox{padding-left:20px;font-size:13px;color:rgba(255,255,255,1);border:1px solid rgba(255, 255, 255, 0.05);background:rgba(255,255,255,0.08);}"
                              "QComboBox::drop-down{border:0;width:30px;}"
                              "QComboBox::down-arrow{image:url(:/res/g/down_arrow.png);}");
    ui->leUserName->setStyleSheet("QLineEdit{color:rgba(255,255,255,0.97);background:rgba(255,255,255,0.08);}");
    ui->lePassword->setStyleSheet("QLineEdit{color:rgba(255,255,255,0.97);background:rgba(255,255,255,0.08);}");
    ui->checkBoxPwdSec->setStyleSheet("QCheckBox::indicator {width: 18px; height: 9px;}"
                                   "QCheckBox::indicator:checked {image: url(:/res/h/show-pwd.png);}"
                                   "QCheckBox::indicator:unchecked {image: url(:/res/h/hide-pwd.png);}");

    ui->btnCancel->setStyleSheet("QPushButton{border:0px;border-radius:4px;background-color:rgba(255,255,255,0.12);color:white;font-size:14px;}"
                               "QPushButton:Hover{border:0px solid rgba(255,255,255,0.2);border-radius:4px;background-color:rgba(255,255,255,0.2);}"
                               "QPushButton:Pressed{border-radius:4px;background-color:rgba(255,255,255,0.08);}");
    ui->btnConnect->setStyleSheet("QPushButton{border:0px;border-radius:4px;background-color:rgba(61,107,229,1);color:white;font-size:14px;}"
                               "QPushButton:Hover{border:0px solid rgba(255,255,255,0.2);border-radius:4px;background-color:rgba(107,142,235,1);}"
                               "QPushButton:Pressed{border-radius:4px;background-color:rgba(50,87,202,1);}");
    ui->lineUp->setStyleSheet("background:rgba(255,255,255,0.08);");
    ui->lineDown->setStyleSheet("background:rgba(255,255,255,0.08);");


    ui->lbLeftupTitle->setText(tr("Add hidden Wi-Fi")); //加入隐藏Wi-Fi
    ui->lbConn->setText(tr("Connection")); //连接设置:
    ui->lbNetName->setText(tr("Network name")); //网络名称:
    ui->lbSecurity->setText(tr("Wi-Fi security")); //Wi-Fi安全性:
    ui->lbAuth->setText(tr("Authentication")); //认证:
    ui->lbAnonyId->setText(tr("Anonymous identity")); //匿名身份:
    ui->lbDomain->setText(tr("Domain")); //域名:
    ui->lbCA->setText(tr("CA certificate")); //CA 证书:
    ui->lbCaPwd->setText(tr("CA certificate password")); //CA 证书密码:
    ui->checkBoxCA->setText(tr("No CA certificate is required")); //不需要CA证书
    ui->lbInnerAuth->setText(tr("Inner authentication")); //内部认证:
    ui->lbUserName->setText(tr("Username")); //用户名:
    ui->lbPassword->setText(tr("Password")); //密码:
    ui->btnCancel->setText(tr("Cancel")); //取消
    ui->btnConnect->setText(tr("Connect")); //连接

    ui->cbxConn->addItem(tr("C_reate…")); //新建...
    system("nmcli connection show>/tmp/kylin-nm-connshow");
    QFile file("/tmp/kylin-nm-connshow");
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text)){
        qDebug()<<"Can't open the file!";
    }
    QString txt = file.readAll();
    QStringList txtLine = txt.split("\n");
    file.close();
    foreach (QString line, txtLine) {
        if(line.indexOf("wifi") != -1){
            QStringList subLine = line.split(" ");
            ui->cbxConn->addItem(subLine[0]);
        }
    }
    ui->cbxConn->setCurrentIndex(0);

    ui->cbxSecurity->addItem(tr("None")); //无
    ui->cbxSecurity->addItem(tr("WPA & WPA2 Personal")); //WPA 及 WPA2 个人
    ui->cbxSecurity->addItem(tr("WEP 40/128-bit Key (Hex or ASCII)")); //WEP 40/128 位密钥(十六进制或ASCII)
    ui->cbxSecurity->addItem(tr("WEP 128-bit Passphrase")); //WEP 128 位密码句
    ui->cbxSecurity->addItem("LEAP");
    ui->cbxSecurity->addItem(tr("Dynamic WEP (802.1X)")); //动态 WEP (802.1x)
    ui->cbxSecurity->addItem(tr("WPA & WPA2 Enterprise")); //WPA 及 WPA2 企业
    if (WepOrWpa == 0) {
        ui->cbxSecurity->setCurrentIndex(5);
    } else if (WepOrWpa == 1) {
        ui->cbxSecurity->setCurrentIndex(6);
    }
    connect(ui->cbxSecurity,SIGNAL(currentIndexChanged(QString)),this,SLOT(changeDialogSecu()));

    ui->cbxAuth->addItem("TLS");
    ui->cbxAuth->addItem("LEAP");
    ui->cbxAuth->addItem("PWD");
    ui->cbxAuth->addItem("FAST");
    ui->cbxAuth->addItem(tr("Tunneled TLS"));//隧道 TLS
    ui->cbxAuth->addItem(tr("Protected EAP (PEAP)")); //受保护的 EAP
    ui->cbxAuth->setCurrentIndex(4);
    connect(ui->cbxAuth,SIGNAL(currentIndexChanged(QString)),this,SLOT(changeDialogAuth()));

    ui->cbxCA->addItem(tr("None")); //无
    ui->cbxCA->addItem(tr("Choose from file")); //从文件选择...
    ui->cbxCA->setCurrentIndex(0);

    ui->cbxInnerAuth->addItem("PAP");
    ui->cbxInnerAuth->addItem("MSCHAP");
    ui->cbxInnerAuth->addItem("MSCHAPv2");
    ui->cbxInnerAuth->addItem("MSCHAPv2(no EAP)");
    ui->cbxInnerAuth->addItem("CHAP");
    ui->cbxInnerAuth->addItem("MDS");
    ui->cbxInnerAuth->addItem("GTC");
    ui->cbxInnerAuth->setCurrentIndex(0);

    ui->btnConnect->setEnabled(false);

    this->setFixedSize(432,640);
}

DlgConnHidWifiSecTunnelTLS::~DlgConnHidWifiSecTunnelTLS()
{
    delete ui;
}

void DlgConnHidWifiSecTunnelTLS::mousePressEvent(QMouseEvent *event){
    if(event->button() == Qt::LeftButton){
        this->isPress = true;
        this->winPos = this->pos();
        this->dragPos = event->globalPos();
        event->accept();
    }
}
void DlgConnHidWifiSecTunnelTLS::mouseReleaseEvent(QMouseEvent *event){
    this->isPress = false;
    this->setWindowOpacity(1);
}
void DlgConnHidWifiSecTunnelTLS::mouseMoveEvent(QMouseEvent *event){
    if(this->isPress){
        this->move(this->winPos - (this->dragPos - event->globalPos()));
        this->setWindowOpacity(0.9);
        event->accept();
    }
}

void DlgConnHidWifiSecTunnelTLS::changeDialogSecu()
{
    if(ui->cbxSecurity->currentIndex()==0){
        QApplication::setQuitOnLastWindowClosed(false);
        this->hide();
        DlgConnHidWifi *connHidWifi = new DlgConnHidWifi(0);
        connHidWifi->show();
    } else if(ui->cbxSecurity->currentIndex()==1) {
        QApplication::setQuitOnLastWindowClosed(false);
        this->hide();
        DlgConnHidWifiWpa *connHidWifiWpa = new DlgConnHidWifiWpa(0);
        connHidWifiWpa->show();
    } else if(ui->cbxSecurity->currentIndex()==2) {
        QApplication::setQuitOnLastWindowClosed(false);
        this->hide();
        DlgConnHidWifiWep *connHidWifiWep = new DlgConnHidWifiWep(0);
        connHidWifiWep->show();
    } else if(ui->cbxSecurity->currentIndex()==3) {
        QApplication::setQuitOnLastWindowClosed(false);
        this->hide();
        DlgConnHidWifiWep *connHidWifiWep = new DlgConnHidWifiWep(1);
        connHidWifiWep->show();
    } else if(ui->cbxSecurity->currentIndex()==4) {
        QApplication::setQuitOnLastWindowClosed(false);
        this->hide();
        DlgConnHidWifiLeap *connHidWifiLeap = new DlgConnHidWifiLeap();
        connHidWifiLeap->show();
    } else if(ui->cbxSecurity->currentIndex()==5) {
        if (WepOrWpa == 1) {
            ui->cbxSecurity->setCurrentIndex(5);
            WepOrWpa = 0;
        }
    } else {
        if (WepOrWpa == 0){
            ui->cbxSecurity->setCurrentIndex(6);
            WepOrWpa = 1;
        }
    }
}

void DlgConnHidWifiSecTunnelTLS::changeDialogAuth()
{
    if(ui->cbxAuth->currentIndex()==0){
        QApplication::setQuitOnLastWindowClosed(false);
        this->hide();
        DlgConnHidWifiSecTls *connHidWifiSecTls = new DlgConnHidWifiSecTls(WepOrWpa);
        connHidWifiSecTls->show();
    } else if(ui->cbxAuth->currentIndex()==1) {
        QApplication::setQuitOnLastWindowClosed(false);
        this->hide();
        DlgConnHidWifiSecLeap *connHidWifiSecLeap = new DlgConnHidWifiSecLeap(WepOrWpa);
        connHidWifiSecLeap->show();
    } else if(ui->cbxAuth->currentIndex()==2) {
        QApplication::setQuitOnLastWindowClosed(false);
        this->hide();
        DlgConnHidWifiSecPwd *connHidWifiSecPwd = new DlgConnHidWifiSecPwd(WepOrWpa);
        connHidWifiSecPwd->show();
    } else if(ui->cbxAuth->currentIndex()==3) {
        QApplication::setQuitOnLastWindowClosed(false);
        this->hide();
        DlgConnHidWifiSecFast *connHidWifiSecFast = new DlgConnHidWifiSecFast(WepOrWpa);
        connHidWifiSecFast->show();
    } else if(ui->cbxAuth->currentIndex()==4) {
        qDebug()<<"it's not need to change dialog";
    } else {
        QApplication::setQuitOnLastWindowClosed(false);
        this->hide();
        DlgConnHidWifiSecPeap *connHidWifiSecPeap = new DlgConnHidWifiSecPeap(WepOrWpa);
        connHidWifiSecPeap->show();
    }
}

void DlgConnHidWifiSecTunnelTLS::on_cbxCA_currentIndexChanged(const QString &arg1)
{
    if (ui->cbxCA->currentIndex() == 0){
        ui->leCaPwd->setText("");
        ui->lbCaPwd->setEnabled(false);
        ui->leCaPwd->setEnabled(false);
    } else {
        ui->leCaPwd->setText("");
        ui->lbCaPwd->setEnabled(true);
        ui->leCaPwd->setEnabled(true);
    }
}

void DlgConnHidWifiSecTunnelTLS::on_btnCancel_clicked()
{
    this->close();
}

void DlgConnHidWifiSecTunnelTLS::on_btnConnect_clicked()
{
    this->close();
}

void DlgConnHidWifiSecTunnelTLS::on_checkBoxPwd_stateChanged(int arg1)
{
    if (arg1 == 0) {
        ui->leCaPwd->setEchoMode(QLineEdit::Password);
    } else {
        ui->leCaPwd->setEchoMode(QLineEdit::Normal);
    }
}

void DlgConnHidWifiSecTunnelTLS::on_checkBoxCA_stateChanged(int arg1)
{
    if (arg1 == 0) {
        ui->cbxCA->setCurrentIndex(0);
        ui->leCaPwd->setText("");
        ui->lbCA->setEnabled(true);
        ui->cbxCA->setEnabled(true);
    } else {
        ui->cbxCA->setCurrentIndex(0);
        ui->leCaPwd->setText("");
        ui->lbCA->setEnabled(false);
        ui->cbxCA->setEnabled(false);
    }
}

void DlgConnHidWifiSecTunnelTLS::on_checkBoxPwdSec_stateChanged(int arg1)
{
    if (arg1 == 0) {
        ui->lePassword->setEchoMode(QLineEdit::Password);
    } else {
        ui->lePassword->setEchoMode(QLineEdit::Normal);
    }
}

void DlgConnHidWifiSecTunnelTLS::on_leNetName_textEdited(const QString &arg1)
{
    if (ui->leNetName->text() == ""){
        ui->btnConnect->setEnabled(false);
    }else if (ui->leAnonyId->text() == ""){
        ui->btnConnect->setEnabled(false);
    }else if (ui->leDomain->text() == ""){
        ui->btnConnect->setEnabled(false);
    }else if (ui->leUserName->text() == ""){
        ui->btnConnect->setEnabled(false);
    }else if (ui->lePassword->text() == ""){
        ui->btnConnect->setEnabled(false);
    }else{
        if (ui->cbxCA->currentIndex() == 0){
            ui->btnConnect->setEnabled(true);
        }else if(ui->leCaPwd->text() == ""){
            ui->btnConnect->setEnabled(false);
        }else{
            ui->btnConnect->setEnabled(true);
        }
    }
}

void DlgConnHidWifiSecTunnelTLS::on_leAnonyId_textEdited(const QString &arg1)
{
    if (ui->leNetName->text() == ""){
        ui->btnConnect->setEnabled(false);
    }else if (ui->leAnonyId->text() == ""){
        ui->btnConnect->setEnabled(false);
    }else if (ui->leDomain->text() == ""){
        ui->btnConnect->setEnabled(false);
    }else if (ui->leUserName->text() == ""){
        ui->btnConnect->setEnabled(false);
    }else if (ui->lePassword->text() == ""){
        ui->btnConnect->setEnabled(false);
    }else{
        if (ui->cbxCA->currentIndex() == 0){
            ui->btnConnect->setEnabled(true);
        }else if(ui->leCaPwd->text() == ""){
            ui->btnConnect->setEnabled(false);
        }else{
            ui->btnConnect->setEnabled(true);
        }
    }
}

void DlgConnHidWifiSecTunnelTLS::on_leDomain_textEdited(const QString &arg1)
{
    if (ui->leNetName->text() == ""){
        ui->btnConnect->setEnabled(false);
    }else if (ui->leAnonyId->text() == ""){
        ui->btnConnect->setEnabled(false);
    }else if (ui->leDomain->text() == ""){
        ui->btnConnect->setEnabled(false);
    }else if (ui->leUserName->text() == ""){
        ui->btnConnect->setEnabled(false);
    }else if (ui->lePassword->text() == ""){
        ui->btnConnect->setEnabled(false);
    }else{
        if (ui->cbxCA->currentIndex() == 0){
            ui->btnConnect->setEnabled(true);
        }else if(ui->leCaPwd->text() == ""){
            ui->btnConnect->setEnabled(false);
        }else{
            ui->btnConnect->setEnabled(true);
        }
    }
}

void DlgConnHidWifiSecTunnelTLS::on_leCaPwd_textEdited(const QString &arg1)
{
    if (ui->leNetName->text() == ""){
        ui->btnConnect->setEnabled(false);
    }else if (ui->leAnonyId->text() == ""){
        ui->btnConnect->setEnabled(false);
    }else if (ui->leDomain->text() == ""){
        ui->btnConnect->setEnabled(false);
    }else if (ui->leUserName->text() == ""){
        ui->btnConnect->setEnabled(false);
    }else if (ui->lePassword->text() == ""){
        ui->btnConnect->setEnabled(false);
    }else if (ui->leCaPwd->text() == ""){
        ui->btnConnect->setEnabled(false);
    }else{
        ui->btnConnect->setEnabled(true);
    }
}

void DlgConnHidWifiSecTunnelTLS::on_leUserName_textEdited(const QString &arg1)
{
    if (ui->leNetName->text() == ""){
        ui->btnConnect->setEnabled(false);
    }else if (ui->leAnonyId->text() == ""){
        ui->btnConnect->setEnabled(false);
    }else if (ui->leDomain->text() == ""){
        ui->btnConnect->setEnabled(false);
    }else if (ui->leUserName->text() == ""){
        ui->btnConnect->setEnabled(false);
    }else if (ui->lePassword->text() == ""){
        ui->btnConnect->setEnabled(false);
    }else{
        if (ui->cbxCA->currentIndex() == 0){
            ui->btnConnect->setEnabled(true);
        }else if(ui->leCaPwd->text() == ""){
            ui->btnConnect->setEnabled(false);
        }else{
            ui->btnConnect->setEnabled(true);
        }
    }
}

void DlgConnHidWifiSecTunnelTLS::on_lePwd_textEdited(const QString &arg1)
{
    if (ui->leNetName->text() == ""){
        ui->btnConnect->setEnabled(false);
    }else if (ui->leAnonyId->text() == ""){
        ui->btnConnect->setEnabled(false);
    }else if (ui->leDomain->text() == ""){
        ui->btnConnect->setEnabled(false);
    }else if (ui->leUserName->text() == ""){
        ui->btnConnect->setEnabled(false);
    }else if (ui->lePassword->text() == ""){
        ui->btnConnect->setEnabled(false);
    }else{
        if (ui->cbxCA->currentIndex() == 0){
            ui->btnConnect->setEnabled(true);
        }else if(ui->leCaPwd->text() == ""){
            ui->btnConnect->setEnabled(false);
        }else{
            ui->btnConnect->setEnabled(true);
        }
    }
}
