#include<iostream>
using namespace std;

int linechar(int x)
{
	for (int i = 1;i <= x;i++)
	{
		cout << "*" ;
	}
	cout << endl;
	for (int i = 1;i <= x;i++)
	{
		cout << "@";
	}
	cout << endl;
	return x;
}

int linechar(int x,int y)
{
	for (int i = 1;i <= x;i++)
	{
		cout << "*";
	}
	cout << endl;
	for (int i = 1;i <= y;i++)
	{
		cout << "#";
	}
	cout << endl;
	return x, y;
}

int main()
{
	int x = 20, y = 15,c = 10;
	linechar(x);
	linechar(c,y);
}
