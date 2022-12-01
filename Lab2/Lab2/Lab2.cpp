#include <iostream>
using namespace std;
#include <stdio.h>
#include <string.h>

float calculateTask9(float input1, float input2) {

	//calculate value of their difference devided by their product
	float result = (input1 - input2) / (input1 * input2);
	return result;
}

void task1() {
	//create array of low case letters
	char lowCase[26];
	for (int i = 0; i < 26; i++)
	{
		lowCase[i] = 'a' + i;
		// print array
		cout << lowCase[i] << " ";
	}
}

void task2() {
	//use nested loops to create pattern
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < i; j++) {
			cout << "^";
		}
		cout << endl;
	}
}

void task3() {
	char upperCase[6];
	//use nested loops to create pattern
	for (int i = 0; i < sizeof(upperCase)+1; i++) {
		for (int j = 0; j < i; j++) {
			upperCase[j] = 'F' - j;
			cout << upperCase[j];
		}
		cout << endl;
	}
}

void task4(){
	char upperCase[21];
	int count = 0;
	//use nested loops to create tree
	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < i; j++) {
			upperCase[j] = 'A' + count;
			cout << upperCase[j];
			count++;
		}
		cout << endl;
	}
}

void task5() {
	//use a char array to print out a pyramid shape
	char input;
	char letter;

	printf("Please, insert an uppercase letter: ");
	scanf_s("%c", &input);

	for (char row = 'A'; row <= input; row++) {
		for (char spaces = input; spaces > row; spaces--) {
			printf(" ");
		}
		for (letter = 'A'; letter < row; letter++) {
			printf("%c", letter);
		}
		for (; letter >= 'A'; letter--) {
			printf("%c", letter);
		}
		printf("\n");
	}
}

void task6() {
	int lowerLimit;
	int upperLimit;
	
	//user input
	cout << "Please enter a lower limit: ";
	cin >> lowerLimit;
	cout << "Please enter an upper limit: ";
	cin >> upperLimit;

	//print out head line
	printf("%10s" "%10s" "%10s\n", "Integer", "Square", "Cube");
	
	for (int i = lowerLimit; i <= upperLimit; i++) {
		
		//calculate square and cube
		int square = i * i;
		int cube = i * i * i;
	
		printf("%10d" "%10d" "%10d\n", i, square, cube);
	}
}

void task7() {
	char input[100];
	cout << "Please enter a word: ";
	cin >> input;
	
	//print out word in reverse
	for (int i = strlen(input); i >= 0; i--) {
		cout << input[i];
	}
}

void task8() {
	//read in user input
	float input1;
	float input2;
	
	cout << "Please enter your first and second number: \n";
	
	while ((scanf_s("%f", &input1)) == 1 && (scanf_s("%f", &input2)) == 1) {
		
		//calculate value of their difference devided by their product
		float result = (input1 - input2) / (input1 * input2);
		cout << "The result is: " << result << endl;
		
		cout << "Please enter your first and second number: \n";
	}
}

void task9() {
	//read in user input
	float input1 = 1.0;
	float input2 = 1.0;

	cout << "Please enter your first and second number: \n";
	while ((scanf_s("%f", &input1)) == 1 && (scanf_s("%f", &input2)) == 1) {

		cout << "The result is: " << calculateTask9(input1, input2);

		cout << "\nPlease enter your first and second number: \n";
	}
}

void task10() {
	int lower;
	int upper;
	cout << "Enter lower and upper integer limits: ";
	// read in user input devided by spaces
	while (scanf_s("%d %d", &lower, &upper) == 2 && upper > lower) {
		
		//sum of all the integers squares between the limits
		int sum = 0;
		for (int i = lower; i <= upper; i++) {
			sum += i * i;
		}
		cout << "The sums of the squares from " << lower * lower << " to " << upper * upper << " is: " << sum  << endl;
		cout << "Enter next sets of limits: ";
	}
	cout << "Done";
}

void task11() {
	// read in 8 integers and print them out backwards
	int input[8];
	cout << "Please enter 8 integers: ";
	for (int i = 0; i < 8; i++) {
		cin >> input[i];
	}
	for (int i = 7; i >= 0; i--) {
		cout << input[i] << " ";
	}
}

void task12() {
	// read in user input
	int limit = 1;
	int sign = 1;
	float series1 = 0.0;
	float series2 = 0.0;
	cout << "Please enter the number of terms you want to calculate: ";
	cin >> limit;
	
	// while loop to allow multiple inputs
	while (limit >= 0) {
		//series 1 and series2 calculation
		for (int i = 1; i <= limit; i++) {
			series1 += 1.0 / i;
			series2 += sign * (1.0 / i);
			sign = -sign;
		}
		cout << "The value for series 1 is: " << series1 << endl;
		cout << "The value for series 2 is: " << series2 << endl;
		cout << "Please enter the number of terms you want to calculate: ";
		cin >> limit;
		// reset series and sign
		series1 = 0;
		series2 = 0;
		sign = 1;

		// series 1 doesn't converge to a value while series 2 converges to 0.7
	}
}

void task13() {
	int powers2[8];
	int power = 1;
	
	//fill array
	for (int i = 0; i < 8; i++) {
		power *= 2;
		powers2[i] = power;
	}
	cout << "Powers of 2: \n";
	int i = 0;
	do {
		cout << powers2[i] << " ";
		i++;
	} while (i < 8);
}

void task14() {
	// create two eight element arrays of double value
	double array1[8];
	double array2[8];
	double sum = 0.0;
	
	// read in user input for array1
	cout << "Please enter 8 double values seperated by spaces: ";
	for (int i = 0; i < 8; i++){
		cin >> array1[i];
		// fill array2 with cummulated sum
		sum += array1[i];
		array2[i] = sum;
	}
	//display arrays using loops
	printf("\n" "%30s", "Given double values: ");
	for (int i = 0; i < 8; i++) {
		printf("%6.2f", array1[i]);
	}
	printf("\n" "%30s", "Calculated accumulated sum: ");
	for (int i = 0; i < 8; i++) {
		printf("%6.2f", array2[i], "\n");
	}
}

void task15(){
	// read in user input
	char input[255];
	cout << "Please enter a line: ";
	cin >> input;
	int i = 0;
	// read in user input until a new line is entered
	while ((input[i] = getchar()) != '\n') {
		i++;
	}
	//print the char array backwards
	for (int j = strlen(input); j > 0; j--) {
		cout << input[j];
	}
}

void task16() {
	double invDaphne = 100;
	double invDeidre = 100;
	int years = 0;
	do {
		invDaphne += 10;
		invDeidre += 0.05 * invDeidre;
		years++;
	} while (invDaphne > invDeidre);
	cout << "It takes " << years << " years for Deidre's investment to exceed Daphne's investment"<< endl;
	cout << "Daphnes investment after " << years << " years is: " << invDaphne << endl;
	cout << "Deidres investment afeter " << years << " years is: " << invDaphne << endl;
}

void task17() {
	double money = 1000000;
	double interest = 0.08;
	double withdraw = 100000;

	int years = 0;

	// he wins a million but withdraws 100.000 before collecting the first interest
	do {
		money -= withdraw;
		money += money * interest;
		years++;
	} while (money > 0);
	cout << "Chucky Lucky is in red after " << years << " years with a balance of " << money << " USD.";
}

void task18() {
	int friends = 5;
	int dunbarsNr = 150;
	int week = 0;

	//print headline
	printf("\nweek | friends\n");
	printf("--------------\n");

	while (friends < dunbarsNr) {
		printf("%3d %8d\n", week, friends);
		week++;
		friends = 2 * (friends - week);
	}
}

int main() {
	int input;
	cout << "Which task do you want to see? \nPlease enter a number from 1 to 18: ";
	cin >> input;
	switch (input) {
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
	case 10:
		task10();
		break;
	case 11:
		task11();
		break;
	case 12:
		task12();
		break;
	case 13:
		task13();
		break;
	case 14:
		task14();
		break;
	case 15:
		task15();
		break;
	case 16:
		task16();
		break;
	case 17:
		task17();
		break;
	case 18:
		task18();
		break;
	}return 0;
}