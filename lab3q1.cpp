#include<iostream>
#include<iomanip>
using namespace std;

int main()

{
	double WeightPounds, WeightKg;

	cout << "Enter your weight:";
	cin >> WeightPounds;

	WeightKg = 0.45 * WeightPounds;

	cout << fixed << setprecision(2);

	cout << "weight in pounds:" << WeightPounds << endl;
	cout << "weight in kilograms:" << WeightKg << endl;

	return 0;
}
