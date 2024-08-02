#include<iostream>
using namespace std;
int main()
{
	double fahrenheit;
		cout << "What temperature would you like to convert to celsius:" << endl;
	cin >> fahrenheit;
	cout << (5.0 / 9) * (fahrenheit);
	return 0;
}