#include <QCoreApplication>
#include <newserver.h>
#include <iostream>
#include <QWidget>
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Server q;
    QWidget *m_widget = new QWidget();
    m_widget->show();
    return a.exec();

}
