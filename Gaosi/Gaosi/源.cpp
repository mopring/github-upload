#include<iostream>
#include<fstream>
#include<string>
using namespace std;
double f(double x,double y)
{
	double res = x/2+y/(2*x);
	return res;
}

int main()
{
	double res = 4;
		for (int i = 1; i <= 50; i++)
		{
			res = f(res,17);
			cout << i << " " << res<<endl;
		}

	system("pause");
}