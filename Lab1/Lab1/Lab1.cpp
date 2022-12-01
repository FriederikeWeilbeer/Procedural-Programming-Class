# include <iostream>
using namespace std;

double cube(double num) {
	double cube;
	cube = num * num * num;
	cout << "The cube of your number is: " << cube << endl;
	return cube;
}

double Temperatures(double fahr) {
	const char celsius = 'C';
	const char fahrenheit = 'F';
	const char kelvin = 'K';

	double cels = (fahr - 32) * 5 / 9;
	double kelv = cels + 273.15;

	//print cels, fahr and kelv in a table
	printf("%8.2lf %c %10c %8.2lf %c %10c %8.2lf %c \n", fahr, fahrenheit, '=', cels, celsius, '=', kelv, kelvin);
	printf("Enter a temperature in Fahrenheit: ");
	return fahr;
}

void task1()
{

	int inputMinutes = 1;
	const int divisor = 60;


	while (inputMinutes > 0) {

		//input
		cout << "Please enter your number of minutes: ";
		cin >> inputMinutes;


		if (inputMinutes <= 0) {
			break;
		}

		//get number of hours 
		int hours = inputMinutes / divisor;

		//get number of minutes 
		int minutes = inputMinutes % divisor;

		//output in hours and minutes
		cout << "Your input equals " << hours << " hours " << " and " << minutes << " minutes!" << std::endl;
	}
}

void task2() {
	int input = 1;
	cout << "Enter an integer: ";
	cin >> input;

	int count = 0;
	while (count < 11) {
		cout << input << " ";
		input++;
		count++;
	}
}

void task3() {
	int inputDays = 1;


	while (inputDays > 0) {

		//input
		cout << "Please enter your number of days: ";
		cin >> inputDays;


		if (inputDays <= 0) {
			break;
		}

		//get number of weeks 
		int weeks = inputDays / 7;

		//get number of days 
		int days = inputDays % 7;

		//output in weeks and days
		cout << inputDays << " days are " << weeks << " weeks, " << days << " days." << std::endl;
	}
}

void task4() {
	float inputHeight = 1;


	while (inputHeight > 0) {

		//input
		cout << "Enter a height in centimeters (<=0 to quit): ";
		cin >> inputHeight;


		if (inputHeight <= 0) {
			cout << "bye";
			break;
		}


		//get number of feet 
		double decimalfeet = inputHeight / 30.48;
		int feet = (int)decimalfeet;

		//get number of inches
		double inches = (decimalfeet - (int)feet) * 12;

		//output in feet and inches

		printf("%.1lf %s %d %s %.1lf %s \n", inputHeight, " cm = ", feet, " feet, ", inches, " inches");

		//cout << inputHeight << " cm = " << feet << " feet, " << inches << " inches" << std::endl;

	}
}

void task5() {
	int count = 0;
	int sum = 0;           /* declaration and assignment statement */
	int input = 10;

	//read in the number of days to calculate
	cout << "Please enter the number of day you want to calculate: ";
	cin >> input;

	while (count++ < input) {     /* while                          */
		sum = sum + count;    /*     statement                  */
	}

	printf("sum = %d\n", sum);/* function statement             */
}

void task6() {

	int count = 0;
	int sum = 0;           /* declaration and assignment statement */
	int input = 10;

	//read in the number of days to calculate
	cout << "Please enter the number of day you want to calculate: ";
	cin >> input;

	while (count++ < input) {     /* while                          */
		sum = sum + count * count;    /*     statement                  */
	}

	printf("sum = %d\n", sum);/* function statement             */
}

void task7() {
	double number;
	cout << "Please enter your number of choice: ";
	cin >> number;
	double result = cube(number);
	//cout << "The cube of " << number << " is " << result << endl;
}

void task8() {
	int operand1;
	int operand2;

	//read in second operand
	cout << "This program computes moduli.\n Enter an integer to serve as the second operand: ";
	cin >> operand2;

	//read in first operand
	cout << "Now enter the first operand: ";
	cin >> operand1;

	if (operand1 <= 0) {
		cout << "Done";
	}

	int result = operand1 % operand2;
	cout << operand1 << " % " << operand2 << " is " << result << endl;

	while (operand1 > 0) {

		//input
		cout << "Enter next number for first operand (<= 0 to quit): ";
		cin >> operand1;


		if (operand1 <= 0) {
			cout << "Done";
			break;
		}

		int result = operand1 % operand2;
		cout << operand1 << " % " << operand2 << " is " << result << endl;
	}
}

void task9() {
	double inputTemp;
	printf("Enter a temperature in Fahrenheit: ");
	scanf_s("%lf", &inputTemp);			//%d Eingabe einer dezimalen Zahl, %lf for doubles	

	Temperatures(inputTemp);

	while (scanf_s("%lf", &inputTemp) == 1) {
		Temperatures(inputTemp);
	}
}

int main() {
	int task;
	cout << "Enter the number of the task you want to see: ";
	cin >> task;
	switch (task) {
	case 1:
		task1();
		break;
	case 2:
		task2();
		break;
	case 3:
		task3();
		break;
	case 4:
		task4();
		break;
	case 5:
		task5();
		break;
	case 6:
		task6();
		break;
	case 7:
		task7();
		break;
	case 8:
		task8();
		break;
	case 9:
		task9();
		break;
	}
	return 0;
}