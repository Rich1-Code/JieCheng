// JieCheng.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
using namespace std;

int getJieCheng(int);

int _tmain(int argc, _TCHAR* argv[])
{
	int n,value;//��Ҫ��������׳˵���

	while (true)
	{
		cout << "��������Ҫ��׳˵���:";
		cin >> n;

		value = getJieCheng(n);

		cout << "�õ��Ľ��Ϊ��" << value << endl;
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