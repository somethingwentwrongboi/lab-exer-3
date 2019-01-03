#include<iostream>
#include<cctype>
using namespace std;

int main()
{
	char char1,char2;
	cout << "Enter 1st character: ";
	cin >> char1;
	cout << "Enter 2nd character: ";
	cin >> char2;
	if (isupper(char1) && isupper(char2))
	{
		for(char i = toupper(char1);i <= toupper(char2);++i)
		{
			cout << i << " ";
		}
	}
	else if (islower(char1) && islower(char2))
	{
		for(char i = char1;i <= char2;++i)
		{
			cout << i << " ";
		}
	}
	else
	{
		cout << "It is needed to be the same case value. \n ex.uppercase and uppercase or lowercase and lowercase";
	}
	
		
}
