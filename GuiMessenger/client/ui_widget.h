

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label_5;
    QLineEdit *ipLineEdit;
    QPushButton *connectButton;
    QLineEdit *portLineEdit;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *sendButton;
    QLineEdit *messageLineEdit;
    QLabel *label;
    QPushButton *pushButton;
    QLineEdit *nameLineEdit;
    QListWidget *listWidget;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(1200, 600);
        gridLayoutWidget = new QWidget(Widget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 631, 441));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(10, 10, 10, 10);
        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(label_2, 6, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        ipLineEdit = new QLineEdit(gridLayoutWidget);
        ipLineEdit->setObjectName(QString::fromUtf8("ipLineEdit"));
        ipLineEdit->setMinimumSize(QSize(400, 0));

        gridLayout->addWidget(ipLineEdit, 0, 1, 1, 1);

        connectButton = new QPushButton(gridLayoutWidget);
        connectButton->setObjectName(QString::fromUtf8("connectButton"));
        connectButton->setStyleSheet(QString::fromUtf8("	background-color: rgb(230, 164, 219);\n"
"	border-radius: 6px; \n"
"    color:#ffffff;"));

        gridLayout->addWidget(connectButton, 0, 2, 1, 2);

        portLineEdit = new QLineEdit(gridLayoutWidget);
        portLineEdit->setObjectName(QString::fromUtf8("portLineEdit"));
        portLineEdit->setMinimumSize(QSize(400, 0));

        gridLayout->addWidget(portLineEdit, 2, 1, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(label_4, 9, 0, 1, 1);

        sendButton = new QPushButton(gridLayoutWidget);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));
        sendButton->setStyleSheet(QString::fromUtf8(" padding: 1px 10px 1px 10px;\n"
"    background-color: rgb(230, 164, 219);\n"
"border-radius: 6px; \n"
"    color:#ffffff;"));

        gridLayout->addWidget(sendButton, 6, 2, 1, 2);

        messageLineEdit = new QLineEdit(gridLayoutWidget);
        messageLineEdit->setObjectName(QString::fromUtf8("messageLineEdit"));

        gridLayout->addWidget(messageLineEdit, 6, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("	background-color: rgb(230, 164, 219);\n"
"	border-radius: 6px; \n"
"	color:#ffffff;"));

        gridLayout->addWidget(pushButton, 9, 1, 1, 1);

        nameLineEdit = new QLineEdit(gridLayoutWidget);
        nameLineEdit->setObjectName(QString::fromUtf8("nameLineEdit"));
        nameLineEdit->setMinimumSize(QSize(400, 0));

        gridLayout->addWidget(nameLineEdit, 3, 1, 1, 1);

        listWidget = new QListWidget(gridLayoutWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setAutoScroll(false);
        listWidget->setAutoScrollMargin(3);
        listWidget->setDefaultDropAction(Qt::IgnoreAction);
        listWidget->setMovement(QListView::Static);

        gridLayout->addWidget(listWidget, 4, 1, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "Message:", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "NAME  :", nullptr));
        connectButton->setText(QCoreApplication::translate("Widget", "Connect", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "PORT   : ", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "File :", nullptr));
        sendButton->setText(QCoreApplication::translate("Widget", "Send Message", nullptr));
        label->setText(QCoreApplication::translate("Widget", "IP          :", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "Upload", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
