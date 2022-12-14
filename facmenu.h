#ifndef FACMENU_H
#define FACMENU_H
#include"login.h"
#include <QMainWindow>

namespace Ui {
class FacMenu;
}

class FacMenu : public QMainWindow
{
    Q_OBJECT

public:
    explicit FacMenu(QWidget *parent = nullptr);
    ~FacMenu();

private slots:
    void on_pushButton_12_clicked();

    void on_pushButton_9_clicked();

    void on_tableView_activated(const QModelIndex &index);

    void on_pushButton_clicked();

private:
    Ui::FacMenu *ui;
};

#endif // FACMENU_H
