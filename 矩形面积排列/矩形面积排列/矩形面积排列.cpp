// 矩形面积排列.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"iostream"
using namespace std;
class CRactangle
{
public:
	int a;
	int b;
	int mianji()
	{
		return a*b;
	}
	int zhouchang()
	{
		return 2 * (a + b);
	}
	void Init(int a_, int b_) {
		a = a_;
		b = b_;
	}
};
int main()
{
	CRactangle orect[6], temp;
	int i, j;
	for (i = 0; i < 5; i++)
		cin >> orect[i].a >> orect[i].b;
	for (i = 0; i < 4; i++) {
		for (j = i + 1; j < 5; j++)
			if (orect[i].mianji() > orect[j].mianji())
			{
				temp = orect[i];
				orect[i] = orect[j];
				orect[j] = temp;
			}
	}
	for (i = 0; i < 5; i++)
	{
		cout << "h=" << orect[i].a << "  w=" << orect[i].b << "  mianji=" << orect[i].mianji() << endl;
	}
	return 0;
}
