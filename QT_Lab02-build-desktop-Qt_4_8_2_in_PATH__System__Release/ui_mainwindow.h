/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Mon Feb 23 03:17:36 2015
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLineEdit *answer;
    QLabel *answerText;
    QLabel *correct;
    QLabel *correctText;
    QLabel *incorrect;
    QLabel *incorrectText;
    QPushButton *go;
    QLabel *result;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *number1;
    QLabel *operation;
    QLabel *number2;
    QLabel *equal;
    QMenuBar *menuBar;
    QMenu *menuFlash_Card;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        answer = new QLineEdit(centralWidget);
        answer->setObjectName(QString::fromUtf8("answer"));
        answer->setGeometry(QRect(180, 30, 61, 21));
        answerText = new QLabel(centralWidget);
        answerText->setObjectName(QString::fromUtf8("answerText"));
        answerText->setGeometry(QRect(190, 10, 52, 13));
        correct = new QLabel(centralWidget);
        correct->setObjectName(QString::fromUtf8("correct"));
        correct->setGeometry(QRect(110, 160, 41, 20));
        correctText = new QLabel(centralWidget);
        correctText->setObjectName(QString::fromUtf8("correctText"));
        correctText->setGeometry(QRect(50, 160, 51, 21));
        incorrect = new QLabel(centralWidget);
        incorrect->setObjectName(QString::fromUtf8("incorrect"));
        incorrect->setGeometry(QRect(260, 160, 41, 21));
        incorrectText = new QLabel(centralWidget);
        incorrectText->setObjectName(QString::fromUtf8("incorrectText"));
        incorrectText->setGeometry(QRect(200, 150, 61, 41));
        go = new QPushButton(centralWidget);
        go->setObjectName(QString::fromUtf8("go"));
        go->setGeometry(QRect(120, 130, 91, 22));
        result = new QLabel(centralWidget);
        result->setObjectName(QString::fromUtf8("result"));
        result->setEnabled(true);
        result->setGeometry(QRect(150, 80, 101, 16));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(30, 30, 160, 21));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        number1 = new QLabel(horizontalLayoutWidget);
        number1->setObjectName(QString::fromUtf8("number1"));

        horizontalLayout->addWidget(number1);

        operation = new QLabel(horizontalLayoutWidget);
        operation->setObjectName(QString::fromUtf8("operation"));

        horizontalLayout->addWidget(operation);

        number2 = new QLabel(horizontalLayoutWidget);
        number2->setObjectName(QString::fromUtf8("number2"));

        horizontalLayout->addWidget(number2);

        equal = new QLabel(horizontalLayoutWidget);
        equal->setObjectName(QString::fromUtf8("equal"));

        horizontalLayout->addWidget(equal);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 19));
        menuFlash_Card = new QMenu(menuBar);
        menuFlash_Card->setObjectName(QString::fromUtf8("menuFlash_Card"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFlash_Card->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        answerText->setText(QApplication::translate("MainWindow", "Answer", 0, QApplication::UnicodeUTF8));
        correct->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        correctText->setText(QApplication::translate("MainWindow", "Correct", 0, QApplication::UnicodeUTF8));
        incorrect->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        incorrectText->setText(QApplication::translate("MainWindow", "Incorrect", 0, QApplication::UnicodeUTF8));
        go->setText(QApplication::translate("MainWindow", "go", 0, QApplication::UnicodeUTF8));
        result->setText(QApplication::translate("MainWindow", "Error", 0, QApplication::UnicodeUTF8));
        number1->setText(QApplication::translate("MainWindow", "5", 0, QApplication::UnicodeUTF8));
        operation->setText(QApplication::translate("MainWindow", "+", 0, QApplication::UnicodeUTF8));
        number2->setText(QApplication::translate("MainWindow", "3", 0, QApplication::UnicodeUTF8));
        equal->setText(QApplication::translate("MainWindow", "=", 0, QApplication::UnicodeUTF8));
        menuFlash_Card->setTitle(QApplication::translate("MainWindow", "Flash Card", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
