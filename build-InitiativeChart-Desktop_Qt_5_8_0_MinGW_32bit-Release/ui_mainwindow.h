/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *FightNameLayout;
    QLabel *label;
    QTextEdit *textEdit;
    QLabel *errorLabel;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *AddEnemyButton;
    QPushButton *AddPlayerButton;
    QPushButton *AddOtherButton;
    QPushButton *UPButton;
    QPushButton *SORTButton;
    QPushButton *RemoveCharacterButton;
    QPushButton *DOWNButton;
    QPushButton *ROLLButton;
    QTableWidget *tableWidget;
    QStatusBar *statusBar;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(809, 584);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        FightNameLayout = new QVBoxLayout();
        FightNameLayout->setSpacing(6);
        FightNameLayout->setObjectName(QStringLiteral("FightNameLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(60, 17));
        label->setMaximumSize(QSize(300, 20));

        FightNameLayout->addWidget(label);

        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy);
        textEdit->setMaximumSize(QSize(500, 40));

        FightNameLayout->addWidget(textEdit);

        errorLabel = new QLabel(centralWidget);
        errorLabel->setObjectName(QStringLiteral("errorLabel"));
        errorLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        FightNameLayout->addWidget(errorLabel);


        horizontalLayout->addLayout(FightNameLayout);

        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setMaximumSize(QSize(16777215, 130));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        AddEnemyButton = new QPushButton(widget);
        AddEnemyButton->setObjectName(QStringLiteral("AddEnemyButton"));
        AddEnemyButton->setMaximumSize(QSize(175, 30));

        gridLayout->addWidget(AddEnemyButton, 2, 3, 1, 1);

        AddPlayerButton = new QPushButton(widget);
        AddPlayerButton->setObjectName(QStringLiteral("AddPlayerButton"));
        AddPlayerButton->setEnabled(true);
        sizePolicy.setHeightForWidth(AddPlayerButton->sizePolicy().hasHeightForWidth());
        AddPlayerButton->setSizePolicy(sizePolicy);
        AddPlayerButton->setMaximumSize(QSize(175, 30));

        gridLayout->addWidget(AddPlayerButton, 1, 3, 1, 1);

        AddOtherButton = new QPushButton(widget);
        AddOtherButton->setObjectName(QStringLiteral("AddOtherButton"));
        AddOtherButton->setMaximumSize(QSize(175, 30));

        gridLayout->addWidget(AddOtherButton, 3, 3, 1, 1);

        UPButton = new QPushButton(widget);
        UPButton->setObjectName(QStringLiteral("UPButton"));
        UPButton->setMaximumSize(QSize(175, 30));

        gridLayout->addWidget(UPButton, 1, 2, 1, 1);

        SORTButton = new QPushButton(widget);
        SORTButton->setObjectName(QStringLiteral("SORTButton"));
        SORTButton->setMaximumSize(QSize(175, 30));

        gridLayout->addWidget(SORTButton, 4, 2, 1, 1);

        RemoveCharacterButton = new QPushButton(widget);
        RemoveCharacterButton->setObjectName(QStringLiteral("RemoveCharacterButton"));
        RemoveCharacterButton->setMaximumSize(QSize(175, 30));

        gridLayout->addWidget(RemoveCharacterButton, 4, 3, 1, 1);

        DOWNButton = new QPushButton(widget);
        DOWNButton->setObjectName(QStringLiteral("DOWNButton"));
        DOWNButton->setMaximumSize(QSize(175, 30));

        gridLayout->addWidget(DOWNButton, 2, 2, 1, 1);

        ROLLButton = new QPushButton(widget);
        ROLLButton->setObjectName(QStringLiteral("ROLLButton"));
        ROLLButton->setMaximumSize(QSize(175, 30));

        gridLayout->addWidget(ROLLButton, 3, 2, 1, 1);


        horizontalLayout->addWidget(widget);


        verticalLayout->addLayout(horizontalLayout);

        tableWidget = new QTableWidget(centralWidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        verticalLayout->addWidget(tableWidget);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 809, 17));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Fight Name", Q_NULLPTR));
        errorLabel->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        AddEnemyButton->setText(QApplication::translate("MainWindow", "Add Enemy", Q_NULLPTR));
        AddPlayerButton->setText(QApplication::translate("MainWindow", "Add Player", Q_NULLPTR));
        AddOtherButton->setText(QApplication::translate("MainWindow", "Add Other", Q_NULLPTR));
        UPButton->setText(QApplication::translate("MainWindow", "UP", Q_NULLPTR));
        SORTButton->setText(QApplication::translate("MainWindow", "SORT", Q_NULLPTR));
        RemoveCharacterButton->setText(QApplication::translate("MainWindow", "Remove", Q_NULLPTR));
        DOWNButton->setText(QApplication::translate("MainWindow", "DOWN", Q_NULLPTR));
        ROLLButton->setText(QApplication::translate("MainWindow", "ROLL", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
