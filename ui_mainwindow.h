/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_division;
    QPushButton *pushButton_mod;
    QPushButton *pushButton_plusMinus;
    QPushButton *pushButton_7;
    QPushButton *pushButton_multi;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_4;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_1;
    QPushButton *pushButton_add;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_0;
    QPushButton *pushButton_dot;
    QPushButton *pushButton_equal;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(240, 357);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 241, 61));
        label->setStyleSheet(QLatin1String("QLabel{\n"
"qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"border: 1px solid gray;\n"
"}\n"
"background-color:while;"));
        pushButton_clear = new QPushButton(centralWidget);
        pushButton_clear->setObjectName(QStringLiteral("pushButton_clear"));
        pushButton_clear->setGeometry(QRect(0, 60, 61, 61));
        pushButton_clear->setStyleSheet(QLatin1String("QPushButton {\n"
"background-color:rgb(215,215,215);\n"
"border:1px solid gray;\n"
"\n"
"}\n"
"QPushButton:pressed {\n"
"background-color:qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"                            stop:0 #BEBEBE, stop:1 #D7D7D7);\n"
"}"));
        pushButton_division = new QPushButton(centralWidget);
        pushButton_division->setObjectName(QStringLiteral("pushButton_division"));
        pushButton_division->setGeometry(QRect(180, 60, 61, 61));
        QFont font;
        font.setPointSize(19);
        pushButton_division->setFont(font);
        pushButton_division->setStyleSheet(QLatin1String("QPushButton {\n"
"background-color:black;\n"
"color:white;\n"
"border:1px solid gray;\n"
"\n"
"}\n"
"QPushButton:pressed {\n"
"background-color:qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"                            stop:0 #FF7832, stop:1 #FF9739);\n"
"}"));
        pushButton_mod = new QPushButton(centralWidget);
        pushButton_mod->setObjectName(QStringLiteral("pushButton_mod"));
        pushButton_mod->setGeometry(QRect(120, 60, 61, 61));
        pushButton_mod->setStyleSheet(QLatin1String("QPushButton {\n"
"background-color:rgb(215,215,215);\n"
"border:1px solid gray;\n"
"\n"
"}\n"
"QPushButton:pressed {\n"
"background-color:qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"                            stop:0 #BEBEBE, stop:1 #D7D7D7);\n"
"}"));
        pushButton_plusMinus = new QPushButton(centralWidget);
        pushButton_plusMinus->setObjectName(QStringLiteral("pushButton_plusMinus"));
        pushButton_plusMinus->setGeometry(QRect(60, 60, 61, 61));
        pushButton_plusMinus->setStyleSheet(QLatin1String("QPushButton {\n"
"background-color:rgb(215,215,215);\n"
"border:1px solid gray;\n"
"\n"
"}\n"
"QPushButton:pressed {\n"
"background-color:qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"                            stop:0 #BEBEBE, stop:1 #D7D7D7);\n"
"}"));
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(0, 120, 61, 61));
        pushButton_7->setStyleSheet(QLatin1String("QPushButton {\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:qlineargradient(x1: 0, y1:0,x2:0, y2:1,\n"
"                            stop:0#dadbde, stop:1 #f6f7fa);\n"
"}"));
        pushButton_multi = new QPushButton(centralWidget);
        pushButton_multi->setObjectName(QStringLiteral("pushButton_multi"));
        pushButton_multi->setGeometry(QRect(180, 120, 61, 61));
        pushButton_multi->setFont(font);
        pushButton_multi->setStyleSheet(QLatin1String("QPushButton {\n"
"background-color:black;\n"
"color:white;\n"
"border:1px solid gray;\n"
"\n"
"}\n"
"QPushButton:pressed {\n"
"background-color:qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"                            stop:0 #FF7832, stop:1 #FF9739);\n"
"}"));
        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(60, 120, 61, 61));
        pushButton_8->setStyleSheet(QLatin1String("QPushButton {\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:qlineargradient(x1: 0, y1:0,x2:0, y2:1,\n"
"                            stop:0#dadbde, stop:1 #f6f7fa);\n"
"}"));
        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(120, 120, 61, 61));
        pushButton_9->setStyleSheet(QLatin1String("QPushButton {\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:qlineargradient(x1: 0, y1:0,x2:0, y2:1,\n"
"                            stop:0#dadbde, stop:1 #f6f7fa);\n"
"}"));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(0, 180, 61, 61));
        pushButton_4->setStyleSheet(QLatin1String("QPushButton {\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:qlineargradient(x1: 0, y1:0,x2:0, y2:1,\n"
"                            stop:0#dadbde, stop:1 #f6f7fa);\n"
"}"));
        pushButton_minus = new QPushButton(centralWidget);
        pushButton_minus->setObjectName(QStringLiteral("pushButton_minus"));
        pushButton_minus->setGeometry(QRect(180, 180, 61, 61));
        pushButton_minus->setFont(font);
        pushButton_minus->setStyleSheet(QLatin1String("QPushButton {\n"
"background-color:black;\n"
"color:white;\n"
"border:1px solid gray;\n"
"\n"
"}\n"
"QPushButton:pressed {\n"
"background-color:qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"                            stop:0 #FF7832, stop:1 #FF9739);\n"
"}"));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(60, 180, 61, 61));
        pushButton_5->setStyleSheet(QLatin1String("QPushButton {\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:qlineargradient(x1: 0, y1:0,x2:0, y2:1,\n"
"                            stop:0#dadbde, stop:1 #f6f7fa);\n"
"}"));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(120, 180, 61, 61));
        pushButton_6->setStyleSheet(QLatin1String("QPushButton {\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:qlineargradient(x1: 0, y1:0,x2:0, y2:1,\n"
"                            stop:0#dadbde, stop:1 #f6f7fa);\n"
"}"));
        pushButton_1 = new QPushButton(centralWidget);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        pushButton_1->setGeometry(QRect(0, 240, 61, 61));
        pushButton_1->setStyleSheet(QLatin1String("QPushButton {\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:qlineargradient(x1: 0, y1:0,x2:0, y2:1,\n"
"                            stop:0#dadbde, stop:1 #f6f7fa);\n"
"}"));
        pushButton_add = new QPushButton(centralWidget);
        pushButton_add->setObjectName(QStringLiteral("pushButton_add"));
        pushButton_add->setGeometry(QRect(180, 240, 61, 61));
        pushButton_add->setFont(font);
        pushButton_add->setStyleSheet(QLatin1String("QPushButton {\n"
"background-color:black;\n"
"color:white;\n"
"border:1px solid gray;\n"
"\n"
"}\n"
"QPushButton:pressed {\n"
"background-color:qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"                            stop:0 #FF7832, stop:1 #FF9739);\n"
"}"));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(60, 240, 61, 61));
        pushButton_2->setStyleSheet(QLatin1String("QPushButton {\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:qlineargradient(x1: 0, y1:0,x2:0, y2:1,\n"
"                            stop:0#dadbde, stop:1 #f6f7fa);\n"
"}"));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(120, 240, 61, 61));
        pushButton_3->setStyleSheet(QLatin1String("QPushButton {\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:qlineargradient(x1: 0, y1:0,x2:0, y2:1,\n"
"                            stop:0#dadbde, stop:1 #f6f7fa);\n"
"}"));
        pushButton_0 = new QPushButton(centralWidget);
        pushButton_0->setObjectName(QStringLiteral("pushButton_0"));
        pushButton_0->setGeometry(QRect(0, 300, 121, 61));
        pushButton_0->setStyleSheet(QLatin1String("QPushButton {\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:qlineargradient(x1: 0, y1:0,x2:0, y2:1,\n"
"                            stop:0#dadbde, stop:1 #f6f7fa);\n"
"}"));
        pushButton_dot = new QPushButton(centralWidget);
        pushButton_dot->setObjectName(QStringLiteral("pushButton_dot"));
        pushButton_dot->setGeometry(QRect(120, 300, 61, 61));
        pushButton_dot->setStyleSheet(QLatin1String("QPushButton {\n"
"background-color:rgb(215,215,215);\n"
"border:1px solid gray;\n"
"\n"
"}\n"
"QPushButton:pressed {\n"
"background-color:qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"                            stop:0 #BEBEBE, stop:1 #D7D7D7);\n"
"}"));
        pushButton_equal = new QPushButton(centralWidget);
        pushButton_equal->setObjectName(QStringLiteral("pushButton_equal"));
        pushButton_equal->setGeometry(QRect(180, 300, 61, 61));
        pushButton_equal->setFont(font);
        pushButton_equal->setStyleSheet(QLatin1String("QPushButton {\n"
"background-color:black;\n"
"color:white;\n"
"border:1px solid gray;\n"
"\n"
"}\n"
"QPushButton:pressed {\n"
"background-color:qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"                            stop:0 #FF7832, stop:1 #FF9739);\n"
"}"));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        pushButton_clear->setText(QApplication::translate("MainWindow", "C", Q_NULLPTR));
        pushButton_division->setText(QApplication::translate("MainWindow", "/", Q_NULLPTR));
        pushButton_mod->setText(QApplication::translate("MainWindow", "%", Q_NULLPTR));
        pushButton_plusMinus->setText(QApplication::translate("MainWindow", "+/-", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        pushButton_multi->setText(QApplication::translate("MainWindow", "x", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("MainWindow", "9", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        pushButton_minus->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        pushButton_1->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        pushButton_add->setText(QApplication::translate("MainWindow", "+", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        pushButton_0->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        pushButton_dot->setText(QApplication::translate("MainWindow", ".", Q_NULLPTR));
        pushButton_equal->setText(QApplication::translate("MainWindow", "=", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
