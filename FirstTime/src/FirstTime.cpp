//============================================================================
// Name        : FirstTime.cpp
// Author      : Dr. Coom
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;
/*
 * endl tells c++ to break the line and write on a new one
 *
 *
 */
void additionCalc(double num1, double num2);
void subtractionCalc(double num1, double num2);
void multiplicationCalc(double num1, double num2);
void divisionCalc(double num1, double num2);
void restart(double num1, double num2);
int main() {
	int selection;
	double num1, num2;
	bool stillRunning = true;
	while(stillRunning){
	cout << "Welcome to the calculator. Please select a calculation" << endl;
	cout << "1. Addition | 2. Subtraction | 3. Multiplication | 4. Division | 5. Quit" << endl;
	cin >> selection;
	if(selection == 1){
		cout << "Enter first addition number" << endl;
		cin >> num1;
		cout << "Enter second addition number" << endl;
		cin >> num2;
		additionCalc(num1, num2);
	} else if(selection == 2){
		cout << "Enter first subtraction number" << endl;
		cin >> num1;
		cout << "Enter second subtraction number" << endl;
		cin >> num2;
		subtractionCalc(num1, num2);
	} else if(selection == 3){
		cout << "Enter first multiplication number" << endl;
		cin >> num1;
		cout << "Enter second multiplication number" << endl;
		cin >> num2;
		multiplicationCalc(num1, num2);
	} else if(selection == 4){
		cout << "Enter first division number" << endl;
		cin >> num1;
		cout << "Enter second division number" << endl;
		cin >> num2;
		divisionCalc(num1, num2);
	} else if(selection == 5){
		stillRunning = false;
	}else{
		cout << "I don't know what you're doing" << endl;
		}
	}
	return 0;
}
/*
 * It's possible to use slash asterisk comments in C++!!!!!!
 */
// Calculations:
void additionCalc(double num1, double num2){
	cout << num1 + num2 << endl;
}
void subtractionCalc(double num1, double num2){
	cout << num1 - num2 << endl;
}
void multiplicationCalc(double num1, double num2){
	cout << num1 * num2 << endl;
}
void divisionCalc(double num1, double num2){
	cout << num1 / num2 << endl;
}






