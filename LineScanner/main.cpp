#include <QApplication>
#include <FindLine.h>
#include "QDebug"
#include <FindLine.h>

#include <stdio.h>
#include <QDebug>

#include <opencv/cv.h>
#include <opencv2/opencv.hpp>
#include <opencv2/core/core.hpp>
#include <opencv/highgui.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QString Path;
    //Path = "/home/dries/Afbeeldingen/20130311_184718 (another copy).jpg"; //path where image is located
    //Path = "/home/dries/Afbeeldingen/20130311_184718 (copy).jpg"; //path where image is located
    Path = "/home/dries/Afbeeldingen/20130311_184718.jpg"; //path where image is located
    QByteArray ba = Path.toLocal8Bit();
    const char *PathChar = ba.data();
    Mat img = imread(PathChar); //read image+

    FindLine fl;
    img = fl.WhiteFilter(img);

    offsets offset;
    offset = fl.FindOffset(img);
    imshow("hallo",img);
    qDebug() << "Offset left:" << offset.left << " Offset right:" << offset.right;

    return a.exec();


}
