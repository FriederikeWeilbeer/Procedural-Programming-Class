#include <iostream>
using namespace std;
#include <stdio.h>
#include <string.h>
#include <ctype.h>

double min(double x, double y) {
	//return the smaller value
	return x < y ? x : y;
}

void larger_of(double * x, double * y);
void sort(double* x, double* y, double* z);

void task1() {
	double x, y;
	cout << "Please enter two doubles seperated by spaces: ";
	cin >> x >> y;
	cout << "The smaller value is: " << min(x, y) << endl;
}

void task3() {
	char toprint;
	int times;
	int rows;
	cout << "Please enter a character and two integers devided by spaces: ";
	cin >> toprint >> times >> rows;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < times; j++) {
			cout << toprint;
		}
		cout << endl;
	} 
}

double task4(double x, double y) {
	// harmonic mean
	double harmonic = 2 / (1 / x + 1 / y);
	return harmonic;
}

int alphabetnr(char input)
{
	input = tolower(input);

	// use c function isalpha() to test whether the char is in the alphabet
	if (isalpha(input))
	{
		// capital and non-capital letters have to be the same position in the alphabet
		// return position in alphabet
		return input - 'a' + 1;
	}
	else
		return -1;
}


int Fibonacci(int n) {
	// handle n=1 and n=2
	if (n == 1) return 0;
	if (n == 2) return 1;
	
	// return the nth Fibonacci number without recursion
	int fib_n1 = 1;
	int fib_n = 1; 
	int fib_n2;
	
	for (int i = 3; i <= n; i++)
	{
		// update old values
		fib_n2 = fib_n1;
		fib_n1 = fib_n;
		fib_n = fib_n1 + fib_n2;
	}
	return fib_n;
}


int main()
{
	int task;
	cout << "Wich task do you want to see. Enter the numbers just as they are in the moodle course (1,3,4,5,6,7,11): ";
	cin >> task;
	switch (task)
	{
	case 1:
		task1();
		break;
	case 3:
		task3();
		break;
	case 4:
		double x4, y4;
		cout << "Please enter two doubles seperated by spaces: ";
		cin >> x4 >> y4;
		cout << "The harmonic mean is: " << task4(x4, y4) << endl;
		break;
	case 5:
		double x5, y5;
		cout << "Please enter two doubles devided by spaces: ";
		cin >> x5 >> y5;
		larger_of(&x5, &y5);
		cout << "Input after: ";
		printf("x = %.2f and y = %.2f\n", x5, y5);
		break;
	case 6:
		double x6, y6, z6;
		cout << "Please enter three doubles devided by spaces: ";
		cin >> x6 >> y6 >> z6;
		sort(&x6, &y6, &z6);
		printf("Your entries sorted by value are: %.2f, %.2f and %.2f\n", x6, y6, z6);
		break;
	case 7:
		char input;
		int nr;
		cout << "Please enter your char: ";
		while ((input = getchar()) != EOF) {
			if (input != '\n') {
				nr = alphabetnr(input);
				if (nr == -1) {
					cout << "The char is not in the alphabet" << endl;
				}
				else {
					cout << "The char is in the alphabet at position: " << nr << endl;
				}
			}
		}
		
		break;
	case 11:
		int x11;
		cout << "Please enter a positive integer: ";
		cin >> x11;
		// handle invalid inputs
		if (x11 < 1)
		{
			cout << "Invalid input" << endl;
		}
		cout << "The " << x11 << "th Fibonacci number is: " << Fibonacci(x11) << endl;
		break;
	}
}
void larger_of(double * x, double * y) {
	if (*x > *y) {
		*y = *x;
	}
	else {
		*x = *y;
	}
}
void sort(double* x, double* y, double* z) {
	double temp;

	if (*x > *y)
	{
		// first and second
		temp = *y;
		*y = *x;
		*x = temp;
	}

	if (*y > *z)
	{
		// second and third
		temp = *z;
		*z = *y;
		*y = temp;

		if (*x > *y)
		{
			// third and first
			temp = *y;
			*y = *x;
			*x = temp;
		}
	}
}