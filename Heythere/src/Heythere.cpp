//============================================================================
// Name        : Heythere.cpp
// Author      : Nathan Igo
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int myNumber;
int first;
int second;
string result;
int main() {
	myNumber = 10;
	first = 15;
	second = 15;
	string myString = "abcdefg";
	cout << "Hello there\tI am your computer talking." << endl; // prints stuff to the console.
	cout << 24 * 5 / 3 - 21 * 0.5 << endl;
	cout << myNumber << endl;
	myNumber *= 2;
	cout << myNumber << endl;
	myString[1] = 'de';
	cout << myString[2] << endl;
	cout << myString << endl;
	result = (first == second) ? "equal" : "not equal";
	cout << result << endl;
	return 0;
}
