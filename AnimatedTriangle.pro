#-------------------------------------------------
#
# Project created by QtCreator 2014-12-06T18:48:01
#
#-------------------------------------------------

QT       += core gui opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = AnimatedTriangle
TEMPLATE = app


SOURCES += main.cpp\
        Dialog.cpp \
    Scene.cpp

HEADERS  += Dialog.h \
    Scene.h

FORMS    += Dialog.ui

RESOURCES += \
    Shaders.qrc
