// ���캯��.cpp : �������̨Ӧ�ó������ڵ㡣
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
		cout << "Ĭ����Ϣ����" << real << "+" << img << "i" << endl;
	}
	void setvalue(double r, double i)


};

int main()
{
	ccomplex oc;
	return 0;
}