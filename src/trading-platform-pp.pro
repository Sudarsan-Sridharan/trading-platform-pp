QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

LIBS += -lcurl




SOURCES += \
    api/api.cpp \
    components/news.cpp \
    components/stock.cpp \
    components/portfolio.cpp \
    components/trading_order.cpp \
    gui/chooseportfolio.cpp \
    gui/homepage.cpp \
    gui/newscard.cpp \
    gui/newspage.cpp \
    gui/signup.cpp \
    helper/helper.cpp \
    gui/widgets/selectwatchlistwidget.cpp \
    main.cpp \
    gui/mainwindow.cpp \
    gui/neworder.cpp \
    recommendation/strategy.cpp


HEADERS += \
    api/api.h \
    components/news.h \
    components/stock.h \
    components/portfolio.h \
    components/trading_order.h \
    gui/chooseportfolio.h \
    gui/homepage.h \
    gui/newscard.h \
    gui/newspage.h \
    gui/signup.h \
    gui/neworder.h \
    gui/mainwindow.h \
    gui/widgets/selectwatchlistwidget.h \
    helper/helper.h \
    recommendation/strategy.h
    
FORMS += \
    gui/chooseportfolio.ui \
    gui/homepage.ui \
    gui/mainwindow.ui \
    gui/newscard.ui \
    gui/newspage.ui \
    gui/signup.ui \
    gui/neworder.ui \
    gui/widgets/selectwatchlistwidget.ui

DISTFILES += \
    style.astylerc

RESOURCES += \
    resources/resources.qrc

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
