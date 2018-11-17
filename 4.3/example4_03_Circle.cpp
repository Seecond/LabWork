//第2个文件:example4_03_Circle.cpp:表示圆类的实现

#include"example4_03_Circle.h"   //包含头文件

double Circle::Area()   //求圆的面积
{
	//PI = 3.14;
	return PI * Radius*Radius;
}

double Circle::Circumference()  //求圆的周长
{
	return 2 * PI*Radius;
}
