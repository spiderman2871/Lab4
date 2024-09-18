// Lab4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
// Print out the menu of choices for the user to select from
void printMenu() {
	cout << "Please Select which operation to perform:" << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "Your Selection: ";
}
void factorial() {
	int n;
	long long x = 1;
	cout << "Enter a number:" << endl;
	cin >> n;

	if (n < 0) {
		cout << "Enter a POSITIVE number:";
		cin >> n;
	}
	else {
		for (int i = 1; i <= n; i++) {
			x *= i;
		}
		cout << "The factorial of " << n << " is " << x << endl;

	}
}
void arithmetic() {
	int x;
	int y;
	int z;
	int result = 0;

	cout << "Enter a number to start at:";
	cin >> x; 
	cout << "Enter a number to add:";
	cin >> y;
	cout << "Enter the number of elements in a series:";
	cin >> z;

	for (int i = 1; i < z; i++) {
		result += x;
		x += y;
	}
	cout << result << endl;
}
void geometric() {
	// I recommend writing your geometric series code here
}
int main() {
	int choice;
	char again;
	do {
		printMenu();
		cin >> choice;
		// Quit if user chooses to exit (or any invalid choice)
		if (choice > 3 || choice < 1) {
			return 0;
		}
		else if (choice == 1) {
			factorial();
		}
		else if (choice == 2) {
			arithmetic();
		}
		else if (choice == 3) {
			geometric();
		}
		cout << "Go Again? [Y/N] ";
		cin >> again;
	} while (again == 'y' || again == 'Y');
}
