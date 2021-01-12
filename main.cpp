#include <iostream>
#include<opencv2/opencv.hpp>
using namespace cv;
using namespace std;
 
Mat rot(Mat photo, double angle)  
{
    Mat dst;    
    Point2f pt(src.cols/2., src.rows/2.);            
    Mat r = getRotationMatrix2D(pt, angle, 1.0);      
    warpAffine(src, dst, r, Size(src.cols, src.rows));  
    return dst;        
}
 
int main()
{
    Mat photo = imread("C:\Users\Akshat\Pictures\Screenshots\photo.png");          
 
    Mat rotate;      
    rotate = rot(photo, 30);      
 
    imshow("src", photo);         
    imshow("dst", rotate);         
    waitKey(0);                     
    return 0;
}