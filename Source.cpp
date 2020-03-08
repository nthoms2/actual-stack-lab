/*
Nolan Thoms
C++ Fall 2019
Lab 3
Using interactive files
*/

#include <iostream>
#include <math.h>
#include <string>
#include <fstream>

using namespace std;

float mean(int one, int two, int three, int four);
float sd(int one, int two, int three, int four, float mean);

int main()
{
	int one;
	int two;
	int three;
	int four;

	cout << "please input four numbers" << endl;
	cin >> one >> two >> three >> four;

	cout << "The mean of your numbers are:" << mean << endl;
	cout << "The standard deviation of your numbers are:" << sd << endl;
	return 0;
}

float mean(int one, int two, int three, int four)
{
	return float(one + two + three + four) / 4;
}

float sd(int one, int two, int three, int four, float mean)
{
	return sqrt(((pow((one - mean), 2)) * (pow((two - mean), 2)) * (pow((3 - mean), 2)) * (pow((4 - mean), 2))) / 4);
}