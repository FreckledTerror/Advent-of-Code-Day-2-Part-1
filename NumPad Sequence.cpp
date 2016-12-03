/*
Hunter Lopez
12/2/2016
Advent of Code Day 2 Part 1
*/
#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
using namespace std;
int main() {
	ifstream file;
	char direction;
	int number, j = 0;
	int numberList[6];

	number = 5;

	file.open("input.txt");
	if (!file.is_open()) {
		cout << "Could not open file!";
	}

	while (file) {				//Most recent addition to the program
		while (direction != 'i') {
			file >> direction;

			if (direction == 'U') {
				number -= 3;
			}
			else if (direction == 'D') {
				number += 3;
			}
			else if (direction == 'L') {
				number -= 1;
			}
			else if (direction == 'R') {
				number += 1;
			}

			if (number == 1 && direction == 'U') {
				number = number;
			}
			else if (number == 2 && direction == 'U') {
				number = number;
			}
			else if (number == 3 && direction == 'U') {
				number = number;
			}
			else if (number == 1 && direction == 'L') {
				number = number;
			}
			else if (number == 4 && direction == 'L') {
				number = number;
			}
			else if (number == 7 && direction == 'L') {
				number = number;
			}
			else if (number == 3 && direction == 'R') {
				number = number;
			}
			else if (number == 6 && direction == 'R') {
				number = number;
			}
			else if (number == 9 && direction == 'R') {
				number = number;
			}
			else if (number == 7 && direction == 'D') {
				number = number;
			}
			else if (number == 8 && direction == 'D') {
				number = number;
			}
			else if (number == 9 && direction == 'D') {
				number = number;
			}
		}
		cout << number;

		j++;
	}
	

	cout << endl;

	return 0;
}