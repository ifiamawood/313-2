// 313 2.cpp : 定义控制台应用程序的入口点。
//

#include"stdafx.h"
#include <iostream>
#include<opencv.hpp>;

using namespace cv;
using std::string;

int main()
{
	cv::Mat srcMat = imread("D:\\1.jpg");
	cv::Mat result1, result2;
	threshold(srcMat, result1, 100, 255, THRESH_BINARY);
	namedWindow("全局二值化");
	adaptiveThreshold(srcMat, result2, 255, ADAPTIVE_THRESH_GAUSSIAN_C, THRESH_BINARY_INV, 15, 10);
	namedWindow("区域自适应二值化");
	imshow("全局二值化", result1);
	waitKey(0);
	imshow("区域自适应二值化", result2);
	waitKey(0);
    return 0;
}

