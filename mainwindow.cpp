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
    QString a2 = ui->label_2->text();
    switch (simi)
    {
        case 1:
            ui->label_2->setText(QString::number(a1.toInt() + a2.toInt()));
            break;
        case 2:
            ui->label_2->setText(QString::number(a1.toInt() - a2.toInt()));
            break;
        case 3:
            ui->label_2->setText(QString::number(a1.toInt() * a2.toInt()));
            break;
        case 4:
            ui->label_2->setText(QString::number(a1.toInt() / a2.toInt()));
            break;
    }

    QString a3 = QString::number(a1.toInt() + a2.toInt());
    check = true;
    ui->label_2->setText(QString::number(a1.toInt() + a2.toInt()));
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

void MainWindow::on_pushButton_clicked()
{
    if (check == true)
    {
        ui->label_2->setText("А цифры...");
    }
    if (check == false)
    {
        a1 = ui->label_2->text();
        sim = '+';
        simi = 1;
        ui->label_2->setText("0");
        check = true;
    }
}

void MainWindow::on_pushButton_10_clicked()
{
    if (check == true)
    {
        ui->label_2->setText("А цифры...");
    }
    if (check == false)
    {
        a1 = ui->label_2->text();
        sim = '-';
        simi = 2;
        ui->label_2->setText("0");
        check = true;
    }
}

void MainWindow::on_pushButton_11_clicked()
{
    if (check == true)
    {
        ui->label_2->setText("А цифры...");
    }
    if (check == false)
    {
        a1 = ui->label_2->text();
        sim = '*';
        simi = 3;
        ui->label_2->setText("0");
        check = true;
    }
}

void MainWindow::on_pushButton_12_clicked()
{
    if (check == true)
    {
        ui->label_2->setText("А цифры...");
    }
    if (check == false)
    {
        a1 = ui->label_2->text();
        sim = '/';
        simi = 4;
        ui->label_2->setText("0");
        check = true;
    }
}
