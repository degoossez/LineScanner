QT       += core gui
CONFIG   += debug
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = OpenCV
TEMPLATE = app


SOURCES += main.cpp \
    FindLine.cpp

HEADERS += \
    FindLine.h

INCLUDEPATH += /home/dries/OpenCV/OpenCV-2.4.3/build/include
LIBS    += -L/usr/local/lib -lopencv_calib3d -lopencv_contrib -lopencv_core -lopencv_features2d -lopencv_flann -lopencv_gpu -lopencv_highgui -lopencv_imgproc -lopencv_legacy -lopencv_ml -lopencv_objdetect -lopencv_ts -lopencv_video


