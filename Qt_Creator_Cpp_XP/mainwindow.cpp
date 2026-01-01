#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>

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

void MainWindow::on_actionClose_triggered()
{
    close();
}


void MainWindow::on_actionAbout_triggered()
{
    QMessageBox::about(this, "About Qt Creator C++ XP", "Learning, testing and trial Project.\n\nExploring experience with Qt and C++.\n\n@Nuno Nogueira 2026");
}

