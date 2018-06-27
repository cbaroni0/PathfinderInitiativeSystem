#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <stdlib.h>
#include <time.h>
#include <QDebug>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_UPButton_clicked();

    void on_DOWNButton_clicked();

    void on_AddPlayerButton_clicked();

    void on_AddEnemyButton_clicked();

    void on_AddOtherButton_clicked();

    void on_RemoveCharacterButton_clicked();

    void on_ROLLButton_clicked();

    void on_SORTButton_clicked();

private:
    Ui::MainWindow *ui;

    bool checkInitBonus();
};

#endif // MAINWINDOW_H
