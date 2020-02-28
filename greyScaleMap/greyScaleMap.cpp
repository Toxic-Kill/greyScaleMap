#include <iostream>
#include<opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main()
{
	cv::Mat M1 = cv::imread("D:\\Files\\2.jpg", 0);//读取图片，转化为灰度图
	cv::imshow("M1", M1);//显示灰度图
	waitKey(0);
}