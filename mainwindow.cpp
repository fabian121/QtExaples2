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

void MainWindow::on_btnSayHello_clicked()
{
    QString name = ui->txtName->toPlainText();
    ui->txtResult->setPlainText("Hello World " + name + "!");
}

void MainWindow::on_btnClean_clicked()
{
    ui->txtName->setPlainText("");
    ui->txtResult->setPlainText("");
}
