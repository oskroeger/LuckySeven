// Lucky 7
// Owen Kroeger

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

void f1();
void f2();
void f3();
void f4();
void f5();
void f6();
void f7();

int main() {
	f3();
	return 0;
}


// read in 5 integers
// print the largest and the smallest of the group
void f1() {
	int curr, small, large;
	cout << "Enter 5 ints: ";
	cin >> curr;
	// first entry is small and large
	small = large = curr;

	for (int i = 1; i <= 4; i++) {
		cin >> curr;
		if (curr < small)
			small = curr;
		else if (curr > large)
			large = curr;
	}
	cout << "largest = " << large << " smallest = " << small << endl;
}

// program that calculates and prints the sum of the 
// first 50 positive multiples of 7
void f2() {
	int sum = 0;
	for (int i = 1; i <= 50; i++)
		sum += i * 7;
	cout << "sum = " << sum << endl;
}
// program that calculates and prints the first 
// 10 terms of the factorial
void f3() {
	
	int fact = 1;
	for (int i = 2; i <= 10; i++) {
		cout << fact << " ";
		fact = fact * i;
	}
	cout << endl;
}