// 构造函数.cpp : 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include<iostream>
using namespace std;
class ccomplex {
public:
	double real, img;
	ccomplex() {
		real = 100;
		img = 200;
		cout << "默认信息函数" << real << "+" << img << "i" << endl;
	}
	void setvalue(double r, double i)


};

int main()
{
	ccomplex oc;
	return 0;
}