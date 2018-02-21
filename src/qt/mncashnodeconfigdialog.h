#ifndef MNCASHNODECONFIGDIALOG_H
#define MNCASHNODECONFIGDIALOG_H

#include <QDialog>

namespace Ui {
    class MNcashNodeConfigDialog;
}

QT_BEGIN_NAMESPACE
class QModelIndex;
QT_END_NAMESPACE

/** Dialog showing transaction details. */
class MNcashNodeConfigDialog : public QDialog
{
    Q_OBJECT

public:
    explicit MNcashNodeConfigDialog(QWidget *parent = 0, QString nodeAddress = "123.456.789.123:9999", QString privkey="MASTERNODEPRIVKEY");
    ~MNcashNodeConfigDialog();

private:
    Ui::MNcashNodeConfigDialog *ui;
};

#endif // MNCASHNODECONFIGDIALOG_H
