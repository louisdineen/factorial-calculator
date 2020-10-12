//============================================================================
// Name        : FactorialCalc.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int num, fact = 1;
	cout << "Input an integer 2-7: ";
	cin >> num;
	int n = num;

	do {
		fact = fact * n;
		n--;
	}
	while (n > 1);

	cout << num << "! = " << fact;
	return 0;
}
