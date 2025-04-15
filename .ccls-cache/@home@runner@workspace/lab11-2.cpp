//Lab 9-2.cpp - displays finish times for race.
//Created/revised by Kyle Gallagher on 04/15/25

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


double finishTimes[5]; 
const int SIZE = 5; 
double LowestTime(double finishTimes[], double SIZE) {
    double lowest = finishTimes[0]; 
    for (int i = 1; i < SIZE; i++) {
        if (finishTimes[i] < lowest) { 
            lowest = finishTimes[i];
        }
    }
    return lowest;
}
double AverageTime(double finishTimes[], double SIZE) {
    double total = 0.0; 
    for (int i = 0; i < SIZE; i++) {
        total += finishTimes[i]; 
    }
    return total / SIZE; 
}
int main()
{
    for (int i = 0; i < SIZE; i++) {
        cout << "Enter time " << i + 1 << ": ";
        cin >> finishTimes[i];
    }
    
    const int SIZE = 5; 
    double averageTime = 0.0; 
    double lowestTime = 0.0; 

    lowestTime = LowestTime(finishTimes, SIZE); 
    averageTime = AverageTime(finishTimes, SIZE); 
    cout << fixed << showpoint << setprecision(1); 
    cout << "The average time is: " << averageTime << endl; 
    cout << "The lowest time is: " << lowestTime << endl; 
    return 0;
}