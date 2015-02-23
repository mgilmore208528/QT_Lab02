#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_go_pressed()
{
    if (ui->correct->text().toInt() < 10 && ui->incorrect->text().toInt() < 10)
    {
        int num1 = ui->number1->text().toInt();
        int num2 = ui->number2->text().toInt();
        if (ui->answer->text().toInt() == (num1 + num2))
        {
                ui->result->setText("Correct");
                int right = ui->correct->text().toInt();
                right++;
                ui->correct->setText(QString::number(right));
        }
        else
        {
            ui->result->setText("Incorrect");
            int wrong = ui->incorrect->text().toInt();
            wrong++;
            ui->incorrect->setText(QString::number(wrong));
        }

        ui->answer->setText("");
        num1 = (qrand() % (10));
        num2 = (qrand() % (10));
        ui->number1->setText(QString::number(num1));
        ui->number1->setText(QString::number(num2));
    }

    else
    {
       ui->answer->setVisible(false);
       ui->equal->setVisible(false);
       ui->go->setVisible(false);
       ui->number1->setVisible(false);
       ui->number2->setVisible(false);
       ui->operation->setVisible(false);
       ui->answerText->setVisible(false);

       ui->result->setText("Final Results");

    }
}
