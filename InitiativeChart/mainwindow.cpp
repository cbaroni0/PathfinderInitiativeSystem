#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // set number of columns to 6
    ui->tableWidget->setColumnCount(4);

    //set rows to size of list
    ui->tableWidget->setRowCount(0);

    //set error message to blank
    ui->errorLabel->setText("");

    //create table headers for each column
    ui->tableWidget->setHorizontalHeaderItem(0,new QTableWidgetItem("Name"));
    ui->tableWidget->setHorizontalHeaderItem(1,new QTableWidgetItem("Initiative"));
    ui->tableWidget->setHorizontalHeaderItem(2,new QTableWidgetItem("Init. Bonus"));
    ui->tableWidget->setHorizontalHeaderItem(3,new QTableWidgetItem("Status"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_UPButton_clicked()
{
    if(ui->tableWidget->currentItem() != NULL && ui->tableWidget->currentRow() > 0)
    {
        for(int i = 0; i < 4; i++)
        {
            //copy initial
            QTableWidgetItem* temp = new QTableWidgetItem();
            temp->setBackgroundColor(ui->tableWidget->item(ui->tableWidget->currentRow(),i)->backgroundColor());
            temp->setText(ui->tableWidget->item(ui->tableWidget->currentRow(),i)->text());
            //replace initial with above
            ui->tableWidget->item(ui->tableWidget->currentRow(),i)->setText(ui->tableWidget->item(ui->tableWidget->currentRow()-1,i)->text());
            ui->tableWidget->item(ui->tableWidget->currentRow(),i)->setBackgroundColor(ui->tableWidget->item(ui->tableWidget->currentRow()-1,i)->backgroundColor());
            //replace above with copy
            ui->tableWidget->item(ui->tableWidget->currentRow()-1,i)->setText(temp->text());
            ui->tableWidget->item(ui->tableWidget->currentRow()-1,i)->setBackgroundColor(temp->backgroundColor());
        }
    }
        ui->tableWidget->setCurrentCell(ui->tableWidget->currentRow()-1,ui->tableWidget->currentColumn());
}

void MainWindow::on_DOWNButton_clicked()
{
    if(ui->tableWidget->currentItem() != NULL && ui->tableWidget->currentRow() < ui->tableWidget->rowCount()-1)
    {
        for(int i = 0; i < 4; i++)
        {
            //copy initial
            QTableWidgetItem* temp = new QTableWidgetItem();
            temp->setBackgroundColor(ui->tableWidget->item(ui->tableWidget->currentRow(),i)->backgroundColor());
            temp->setText(ui->tableWidget->item(ui->tableWidget->currentRow(),i)->text());
            //replace initial with above
            ui->tableWidget->item(ui->tableWidget->currentRow(),i)->setText(ui->tableWidget->item(ui->tableWidget->currentRow()+1,i)->text());
            ui->tableWidget->item(ui->tableWidget->currentRow(),i)->setBackgroundColor(ui->tableWidget->item(ui->tableWidget->currentRow()+1,i)->backgroundColor());
            //replace above with copy
            ui->tableWidget->item(ui->tableWidget->currentRow()+1,i)->setText(temp->text());
            ui->tableWidget->item(ui->tableWidget->currentRow()+1,i)->setBackgroundColor(temp->backgroundColor());
        }
    }
    ui->tableWidget->setCurrentCell(ui->tableWidget->currentRow()+1,ui->tableWidget->currentColumn());
}

void MainWindow::on_AddPlayerButton_clicked()
{
    int size = ui->tableWidget->rowCount();
    ui->tableWidget->insertRow(size);
    for(int i = 0; i < 4; i++)
    {
        QTableWidgetItem* player = new QTableWidgetItem();
        player->setBackgroundColor(QColor(0,204,255));
        ui->tableWidget->setItem(ui->tableWidget->rowCount()-1, i, player);
    }
}

void MainWindow::on_AddEnemyButton_clicked()
{
    int size = ui->tableWidget->rowCount();
    ui->tableWidget->insertRow(size);
    for(int i = 0; i < 4; i++)
    {
        QTableWidgetItem* player = new QTableWidgetItem();
        player->setBackgroundColor(QColor(255,102,102));
        ui->tableWidget->setItem(ui->tableWidget->rowCount()-1, i, player);
    }
}

void MainWindow::on_AddOtherButton_clicked()
{
    int size = ui->tableWidget->rowCount();
    ui->tableWidget->insertRow(size);
    for(int i = 0; i < 4; i++)
    {
        QTableWidgetItem* player = new QTableWidgetItem();
        player->setBackgroundColor(QColor(102,255,51));
        ui->tableWidget->setItem(ui->tableWidget->rowCount()-1, i, player);
    }
}

void MainWindow::on_RemoveCharacterButton_clicked()
{
    if(ui->tableWidget->currentItem() != NULL)
    {
        ui->tableWidget->removeRow(ui->tableWidget->currentItem()->row());
    }
}

void MainWindow::on_ROLLButton_clicked()
{
    srand(time(NULL));
    if(checkInitBonus())
    {
        for(int i = 0; i < ui->tableWidget->rowCount(); i ++)
        {
            int tmpInt = rand() % 20 + 1 + ui->tableWidget->item(i,2)->text().toInt();
            QString tmp = QString::number(tmpInt);
            ui->tableWidget->item(i,1)->setText(tmp);
        }
    }
}

void MainWindow::on_SORTButton_clicked()
{
    qInfo() << "before init";
    if(checkInitBonus())
    {
        qInfo() << "after init";
        for(int i = 0; i < ui->tableWidget->rowCount()-1; i++)
        {
            for (int j = 0; j < ui->tableWidget->rowCount()-1-i; j++)
            {
                //checks if lower is greater value
                if(ui->tableWidget->item(j, 1)->text().toInt() < ui->tableWidget->item(j+1, 1)->text().toInt())
                {
                    for(int k = 0; k < 4; k++)
                    {
                        //copy initial
                        QTableWidgetItem* temp = new QTableWidgetItem();
                        temp->setBackgroundColor(ui->tableWidget->item(j, k)->backgroundColor());
                        temp->setText(ui->tableWidget->item(j, k)->text());
                        //replace initial with above
                        ui->tableWidget->item(j,k)->setText(ui->tableWidget->item(j+1,k)->text());
                        ui->tableWidget->item(j,k)->setBackgroundColor(ui->tableWidget->item(j+1,k)->backgroundColor());
                        //replace above with copy
                        ui->tableWidget->item(j+1,k)->setText(temp->text());
                        ui->tableWidget->item(j+1,k)->setBackgroundColor(temp->backgroundColor());
                    }//endfor
                }//endif
                else if(ui->tableWidget->item(j, 1)->text().toInt() == ui->tableWidget->item(j+1, 1)->text().toInt())
                {
                    if(ui->tableWidget->item(j, 2)->text().toInt() < ui->tableWidget->item(j+1, 2)->text().toInt())
                    {
                        for(int k = 0; k < 4; k++)
                        {
                            //copy initial
                            QTableWidgetItem* temp = new QTableWidgetItem();
                            temp->setBackgroundColor(ui->tableWidget->item(j, k)->backgroundColor());
                            temp->setText(ui->tableWidget->item(j, k)->text());
                            //replace initial with above
                            ui->tableWidget->item(j,k)->setText(ui->tableWidget->item(j+1,k)->text());
                            ui->tableWidget->item(j,k)->setBackgroundColor(ui->tableWidget->item(j+1,k)->backgroundColor());
                            //replace above with copy
                            ui->tableWidget->item(j+1,k)->setText(temp->text());
                            ui->tableWidget->item(j+1,k)->setBackgroundColor(temp->backgroundColor());
                        }//endfor
                    }//endif
                }
            }//endfor
        }//endfor
    }//endif
}

bool MainWindow::checkInitBonus()
{
    //used for regex check
    QRegularExpression rgx("[0-9]+");
    QRegularExpressionMatch match;
    //Error Msg setup
    QString errorMsg = "Error in Initiative Bonus!";
    ui->errorLabel->setText("");

    //FOR - error checks init.bonus section. only numbers allowed
    for(int i = 0; i < ui->tableWidget->rowCount(); i++)
    {
        match = rgx.match(ui->tableWidget->item(i,2)->text());
        if(!match.hasMatch())
        {
            ui->errorLabel->setText(errorMsg);
            return false;
        }
        if(ui->tableWidget->item(i,2)->text() == "")
        {
            return false;
        }
    }
    return true;
}
