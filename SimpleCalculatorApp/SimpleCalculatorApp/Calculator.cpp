#include <iostream>
using namespace std;

// Global Variables


void intro() {
	cout << "~~~~~~~~~~ Welcome to Simple Calculator App ~~~~~~~~~~";
	cout << "\nPlease choose the operation you would like to do:";
	cout << "\n1- Addition\t\t 2- Subtraction";
	cout << "\n3- Multiplication\t 4- Division";
}

int input() {
	int input;
	cout << "\n\nChoice: ";
	cin >> input;
	return input;
}

float add(float a, float b) {
	return a + b;
}

float sub(float a, float b) {
	return a-b;
}

float mult(float a, float b) {
	return 0;
}

float div(float a, float b) {
	return 0;
}

int main() {
	intro();
	int choice = input();
	
	if (choice == 1) {
		float num1, num2;
		
		cout << "Enter Number 1: ";
		cin >> num1;
		cout << "Enter Number 2: ";
		cin >> num2;
		cout << "sum is: " << add(num1, num2);
	}
	else if (choice == 2) {
		float num1, num2;

		cout << "Enter Number 1: ";
		cin >> num1;
		cout << "Enter Number 2: ";
		cin >> num2;
		cout << "sub is: " << sub(num1, num2);
	}
	

	return 0;
}