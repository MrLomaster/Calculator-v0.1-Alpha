#include "mainwindow.h"
#include "ui_mainwindow.h"
bool check = true;
QString buff;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_label_2_linkActivated(const QString &link)
{

}

void MainWindow::on_pushButton_13_clicked()
{

}
void MainWindow::on_pushButton_1_clicked()
{

    if (check == true)
    {
        check = false;
        ui->label_2->setText("1");
    }
    else if (check == false)
    {
        ui->label_2->setText(ui->label_2->text() + "1");
    }

}

void MainWindow::on_pushButton_2_clicked()
{
    {

        if (check == true)
        {
            check = false;
            ui->label_2->setText("2");
        }
        else if (check == false)
        {
            ui->label_2->setText(ui->label_2->text() + "2");
        }

    }
}

void MainWindow::on_pushButton_3_clicked()
{
    {

        if (check == true)
        {
            check = false;
            ui->label_2->setText("3");
        }
        else if (check == false)
        {
            ui->label_2->setText(ui->label_2->text() + "3");
        }

    }
}

void MainWindow::on_pushButton_4_clicked()
{
    {

        if (check == true)
        {
            check = false;
            ui->label_2->setText("4");
        }
        else if (check == false)
        {
            ui->label_2->setText(ui->label_2->text() + "4");
        }

    }
}

void MainWindow::on_pushButton_5_clicked()
{
    {

        if (check == true)
        {
            check = false;
            ui->label_2->setText("5");
        }
        else if (check == false)
        {
            ui->label_2->setText(ui->label_2->text() + "5");
        }

    }
}

void MainWindow::on_pushButton_6_clicked()
{
    {

        if (check == true)
        {
            check = false;
            ui->label_2->setText("6");
        }
        else if (check == false)
        {
            ui->label_2->setText(ui->label_2->text() + "6");
        }

    }
}

void MainWindow::on_pushButton_7_clicked()
{
    {

        if (check == true)
        {
            check = false;
            ui->label_2->setText("7");
        }
        else if (check == false)
        {
            ui->label_2->setText(ui->label_2->text() + "7");
        }

    }
}

void MainWindow::on_pushButton_8_clicked()
{
    {

        if (check == true)
        {
            check = false;
            ui->label_2->setText("8");
        }
        else if (check == false)
        {
            ui->label_2->setText(ui->label_2->text() + "8");
        }

    }
}

void MainWindow::on_pushButton_9_clicked()
{
    {

        if (check == true)
        {
            check = false;
            ui->label_2->setText("9");
        }
        else if (check == false)
        {
            ui->label_2->setText(ui->label_2->text() + "9");
        }

    }
}

void MainWindow::on_pushButton_0_clicked()
{
    {

        if (check == true)
        {
            check = false;
            ui->label_2->setText("0");
        }
        else if (check == false)
        {
            ui->label_2->setText(ui->label_2->text() + "0");
        }

    }
}
