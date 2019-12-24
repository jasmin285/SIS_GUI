#ifndef LOGIN_H
#define LOGIN_H

#include <QDebug>
#include <QMainWindow>
#include <QWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QLabel>
#include <QFormLayout>
#include <QHBoxLayout>
#include <QPixmap>
#include <QtQuick/QQuickView>
#include <QFont>
#include "clickablelabel.h"


class Login : public QWidget{
    Q_OBJECT

public:
    Login(QWidget *parent = nullptr);

private :
    QWidget *container;
    QWidget *_leftWidget;
    QWidget *_rightWidget;
    QPushButton *loginBtn;

    QLabel *img;
    QLabel *login;
    QLabel *passLbl;
    QLabel *errLbl;

    QHBoxLayout *mainLayout;
    QHBoxLayout *_mainLayout;
    QHBoxLayout *userLayout;
    QVBoxLayout *_leftLayout;
    QVBoxLayout *_rightLayout;
    QFormLayout *formlayout;
    QLineEdit *usrEdit;
    QLineEdit *passEdit;

    ClickableLabel * regLbl;


//signals :
//    void test();
};

#endif // LOGIN_H