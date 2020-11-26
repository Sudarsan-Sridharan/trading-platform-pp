#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
  : QMainWindow(parent)
  , ui(new Ui::MainWindow) {
  ui->setupUi(this);

  // nav bar on the left is initialized
  LeftNavigationBar *leftNav = new LeftNavigationBar(this);

  // initialize the different pages and add them to the layout
  // we add all the pages to the layout and then just hide them
  // when they are not displayed
  signUpPage = new SignUp(this);
  chooseUserPage = new ChooseUser(this);
  homepage = new HomePage(this);

  QHBoxLayout *layout = new QHBoxLayout;
  layout->addWidget(leftNav);
  layout->addWidget(signUpPage);
  layout->addWidget(chooseUserPage);
  layout->addWidget(homepage);

  signUpPage->hide();
  chooseUserPage->hide();

  ui->centralwidget->setLayout(layout);
}

MainWindow::~MainWindow() {
  delete ui;
  delete leftNav;
  delete layout;
}
