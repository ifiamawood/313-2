// 313 2.cpp : �������̨Ӧ�ó������ڵ㡣
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
	namedWindow("ȫ�ֶ�ֵ��");
	adaptiveThreshold(srcMat, result2, 255, ADAPTIVE_THRESH_GAUSSIAN_C, THRESH_BINARY_INV, 15, 10);
	namedWindow("��������Ӧ��ֵ��");
	imshow("ȫ�ֶ�ֵ��", result1);
	waitKey(0);
	imshow("��������Ӧ��ֵ��", result2);
	waitKey(0);
    return 0;
}

