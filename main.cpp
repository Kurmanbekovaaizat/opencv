#include <iostream>
#include<cv.h>
#include <opencv2/opencv.hpp>


using namespace cv;
using namespace std;

string imgPath_1 ="/home/aizat/erste.jpeg";

string imgPath_2 = "/home/aizat/zweite.jpg";

void bitwise ();
void showImages();

Mat mat1 = imread(imgPath_1);
Mat mat2 = imread(imgPath_2);

Mat res ;

int main() {

    showImages();
    bitwise();

    return 0;

}

void showImages(){

    cvNamedWindow("Erstes Bild");
    cvNamedWindow("Zweites Bild");

    imshow("Erstes Bild", mat1);
    imshow("Zweites Bild", mat2);

}

void bitwise (){

    cvNamedWindow("bit_And",1);
    cvNamedWindow("bit_Or",1);
    cvNamedWindow("bit_Xor",1);

    bitwise_and(mat1,mat2,res);
    imshow("bit_And", res);

    bitwise_or(mat1,mat2,res);
    imshow("bit_Or", res);

    bitwise_xor(mat1,mat2,res);
    imshow("bit_Xor", res);

    waitKey(0);

}