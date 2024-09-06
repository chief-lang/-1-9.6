// 特殊指针1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//指针函数：是一个函数，但是这个函数的返回类型是一个指针
//函数指针：是一个指针，这个指针的指向是一个函数
//函数指针的定义格式：函数的返回值类型（*函数指针名）（函数的形参列表）；
#include <iostream>
//1.指针函数
//int* fun()
//{
//	//a是一个局部变量
//	int a = 10;
//
//	return&a;
//}
//
//int main()
//{
//	int*p=fun();
//	printf("%d\n", *p);//只能输出一次
//
//
//	return 0;
//}



//2.函数指针
//函数名就是这个函数的首地址
//void fun1(int a, int b)
//{
//	printf("%d\n", a + b);
//}
//void(*pFun)(int a, int b);
//
//int main()
//{
//	pFun = fun1;
//	pFun(1, 2);
//}


//3.函数指针的用法
int add(int a, int b)
{
	return a + b;
}
int sub(int a, int b)
{
	return a - b;
}//这是别人写的

typedef int (*pF)(int, int);//函数指针取别名，别名就是他自己本身
//并且这个别名可以当作类型去使用
#define aa 123

void fun3(int (*pF)(int, int), int x, int y)//这里用函数指针将别人写的和我写的连接起来，也可以写作：int (*pF)(int,int)=add;
{
	printf("%d\n", pF(x, y));
}
int main()
{
	fun3(add, 10, 10);
	fun3(sub, 10, 10);
}