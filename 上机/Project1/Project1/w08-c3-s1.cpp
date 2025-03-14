/* 信04 2252941 杨瑞灵 */
#include <iostream>
using namespace std;

/***************************************************************************
  函数名称：
  功    能：输入一个符合要求的整数
  输入参数：根据no值x，打印“请输出第x个int型整数”
  返 回 值：
  说    明：函数名、形参、返回类型不准修改
***************************************************************************/
int get_int(int no)
{
	int x;
	cout << "请输入第" << no << "个int型整数" << endl;
	while (1) {
		cin >> x;   //读入x的方式必须是 cin>>int型变量，不允许其他方式
		if (cin.good())
			break;
		else if (cin.good() == 0)
		{
			cin.clear();//清除错误标志位
			cin.ignore(10000000000, '\n');//清除缓冲区内数据}
		}
		else
		{
			cin.clear();
			cin.ignore();
		}
		cout << "请输入第" << no << "个int型整数" << endl;
	}

	return x;
}

/***************************************************************************
  函数名称：
  功    能：将四个数按从小到大顺序输出
  输入参数：
  返 回 值：
  说    明：函数名、形参、返回类型不准修改
***************************************************************************/
void output(int a, int b, int c, int d)
{
	int i, t;
	for (i = 1; i <= 4; i++)
	{
		if (a > b)
		{
			t = a;
			a = b;
			b = t;
		}
		if (b > c)
		{
			t = c;
			c = b;
			b = t;
		}
		if (c > d)
		{
			t = c;
			c = d;
			d = t;
		}
	}

	cout << "从小到大依次是 : " << a << ' ' << b << ' ' << c << ' ' << d << endl;
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：main不准动
***************************************************************************/
int main()
{
	int a, b, c, d;

	a = get_int(1);
	b = get_int(2);
	c = get_int(3);
	d = get_int(4);

	output(a, b, c, d);

	return 0;
}