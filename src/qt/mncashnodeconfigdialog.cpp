#include "mncashnodeconfigdialog.h"
#include "ui_mncashnodeconfigdialog.h"

#include <QModelIndex>

MNcashNodeConfigDialog::MNcashNodeConfigDialog(QWidget *parent, QString nodeAddress, QString privkey) :
    QDialog(parent),
    ui(new Ui::MNcashNodeConfigDialog)
{
    ui->setupUi(this);
    QString desc = "<br>masternode=1<br>masternodeaddr=" + nodeAddress + "<br>masternodeprivkey=" + privkey + "<br>";
    ui->detailText->setHtml(desc);
}

MNcashNodeConfigDialog::~MNcashNodeConfigDialog()
{
    delete ui;
}
