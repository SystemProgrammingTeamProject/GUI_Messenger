#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class QTcpSocket;

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void readyRead();                   
    void connected();                   
    void on_connectButton_clicked();    
    void on_sendButton_clicked();       

    void on_messageLineEdit_returnPressed();

private:
    Ui::Widget *ui;
    QTcpSocket* socket; 
};

#endif // WIDGET_H
