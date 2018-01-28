#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include <QDebug>

double firstNum;
bool userIsTypingSecondNum= false;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)

{
    ui->setupUi(this);
    setWindowTitle("CJ calc");
    connect(ui->pushButton_0,SIGNAL(released()),this,SLOT(digit_pressed()));
            connect(ui->pushButton_1,SIGNAL(released()),this,SLOT(digit_pressed()));
            connect(ui->pushButton_2,SIGNAL(released()),this,SLOT(digit_pressed()));
            connect(ui->pushButton_3,SIGNAL(released()),this,SLOT(digit_pressed()));
            connect(ui->pushButton_4,SIGNAL(released()),this,SLOT(digit_pressed()));
            connect(ui->pushButton_5,SIGNAL(released()),this,SLOT(digit_pressed()));
            connect(ui->pushButton_6,SIGNAL(released()),this,SLOT(digit_pressed()));
            connect(ui->pushButton_7,SIGNAL(released()),this,SLOT(digit_pressed()));
            connect(ui->pushButton_8,SIGNAL(released()),this,SLOT(digit_pressed()));
            connect(ui->pushButton_8,SIGNAL(released()),this,SLOT(digit_pressed()));
            connect(ui->pushButton_9,SIGNAL(released()),this,SLOT(digit_pressed()));

            connect(ui->pushButton_plusMinus,SIGNAL(released()),this,SLOT(unary_operation_perssed()));
            connect(ui->pushButton_mod,SIGNAL(released()),this,SLOT(unary_operation_perssed()));

            connect(ui->pushButton_add,SIGNAL(released()),this,SLOT(binary_operation_pressed()));
            connect(ui->pushButton_minus,SIGNAL(released()),this,SLOT(binary_operation_pressed()));
            connect(ui->pushButton_multi,SIGNAL(released()),this,SLOT(binary_operation_pressed()));
            connect(ui->pushButton_division,SIGNAL(released()),this,SLOT(binary_operation_pressed()));
ui->pushButton_add->setCheckable(true);
ui->pushButton_minus->setCheckable(true);
ui->pushButton_division->setCheckable(true);
ui->pushButton_multi->setCheckable(true);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::digit_pressed()
{
//qDebug()<<"test";
//    getting and displaying text
    QPushButton * button = (QPushButton*)sender();
QString newLabel;

    double labelNumber;
    if((ui->pushButton_add->isChecked() ||
            ui->pushButton_minus->isChecked()||
            ui->pushButton_division->isChecked() ||
            ui->pushButton_multi->isChecked()) &&(!userIsTypingSecondNum))
    {
        labelNumber = button->text().toDouble();
userIsTypingSecondNum = true;
newLabel = QString::number(labelNumber,'g',15);//how the number would be displayed

    }
    else{
if(ui->label->text().contains('.')&& button->text() =="0"){
    newLabel = ui->label->text()+button->text();


}
else{
    labelNumber = (ui->label->text()+button->text()).toDouble();

    newLabel = QString::number(labelNumber,'g',15);//how the number would be displayed

}

    }
//    labelNumber = (ui->label->text()+button->text()).toDouble();
 //convert to string
    ui->label->setText(newLabel);




}

void MainWindow::on_pushButton_dot_released()
{
    ui->label->setText(ui->label->text()+".");
}

void MainWindow::unary_operation_perssed()
{
    QString newLabel;
        double labelNumber;
    QPushButton * button = (QPushButton*)sender();
    if(button->text()=="+/-"){

        labelNumber = ui->label->text().toDouble();
        labelNumber = labelNumber * -1;
        newLabel = QString::number(labelNumber, 'g',15);
        ui->label->setText(newLabel);
    }
    if(button->text()=="%"){

        labelNumber = ui->label->text().toDouble();
        labelNumber = labelNumber * 0.01;
        newLabel = QString::number(labelNumber, 'g',15);
        ui->label->setText(newLabel);
    }
    }

void MainWindow::on_pushButton_clear_released()
{
ui->pushButton_add->setChecked(false);
ui->pushButton_minus->setChecked(false);
ui->pushButton_division->setChecked(false);
ui->pushButton_multi->setChecked(false);
userIsTypingSecondNum = false;
ui->label->setText("0");
}

void MainWindow::on_pushButton_equal_released()
{
    double labelNumber,secondNumber;
secondNumber = ui->label->text().toDouble();
QString newLabel;


    if(ui->pushButton_add->isChecked()){
labelNumber = firstNum + secondNumber;
newLabel = QString::number(labelNumber,'g',15);
ui->label->setText(newLabel);
ui->pushButton_add->setChecked(false);

    }
    else if(ui->pushButton_minus->isChecked()){
        labelNumber = firstNum - secondNumber;
        newLabel = QString::number(labelNumber,'g',15);
        ui->label->setText(newLabel);
        ui->pushButton_minus->setChecked(false);
    }
   else if(ui->pushButton_division->isChecked()){
        labelNumber = firstNum / secondNumber;
        newLabel = QString::number(labelNumber,'g',15);
        ui->label->setText(newLabel);
        ui->pushButton_division->setChecked(false);
    }
   else if(ui->pushButton_multi->isChecked()){
        labelNumber = firstNum * secondNumber;
        newLabel = QString::number(labelNumber,'g',15);
        ui->label->setText(newLabel);
        ui->pushButton_multi->setChecked(false);
    }
userIsTypingSecondNum = false;
}

void MainWindow::binary_operation_pressed()
{
    QPushButton * button = (QPushButton*)sender();
    firstNum = ui->label->text().toDouble();
button->setChecked(true);



}
