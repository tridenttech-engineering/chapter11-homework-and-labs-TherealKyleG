//Introductory21.cpp - Displays the average stock price
//Created/revised by Kyle Gallagher on 04/15/25

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double prices[10] = {96.5, 100.5, 100.5, 100.5, 99, 99, 99, 100, 98.5, 98.9};
	double total = 0.0;
	double average = 0.0;
	total = prices[0] + prices[1] + prices[2] + prices[3] + prices[4] + prices[5] + prices[6] + prices[7] + prices[8] + prices[9];
	average = total / 10;
	cout << fixed << setprecision(2);
	cout << "Average stock price: $" << average << endl;
	return 0;
}	//end of main function

