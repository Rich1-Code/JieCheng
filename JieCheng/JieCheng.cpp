// JieCheng.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
using namespace std;

int getJieCheng(int);

int _tmain(int argc, _TCHAR* argv[])
{
	int n,value;//将要输入所求阶乘的数

	while (true)
	{
		cout << "请输入你要求阶乘的数:";
		cin >> n;

		value = getJieCheng(n);

		cout << "得到的结果为：" << value << endl;
	}
	return 0;
}


int getJieCheng(int n)
{
	int value;
	if (n == 1 || n == 0)
	{
		return 1;
	}
	
	value = n*getJieCheng(n - 1);
	
	return value;
}