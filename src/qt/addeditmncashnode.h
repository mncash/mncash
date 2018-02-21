#ifndef ADDEDITMNCASHNODE_H
#define ADDEDITMNCASHNODE_H

#include <QDialog>

namespace Ui {
class AddEditMNcashNode;
}


class AddEditMNcashNode : public QDialog
{
    Q_OBJECT

public:
    explicit AddEditMNcashNode(QWidget *parent = 0);
    ~AddEditMNcashNode();

protected:

private slots:
    void on_okButton_clicked();
    void on_cancelButton_clicked();

signals:

private:
    Ui::AddEditMNcashNode *ui;
};

#endif // ADDEDITMNCASHNODE_H
