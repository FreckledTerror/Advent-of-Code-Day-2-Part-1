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
	char direction = 'L';
	int number, j = 0;
	int numberList[6];
	string test = "UDUDUDLRLRLRLD";

	number = 5;

	file.open("input.txt");
	if (!file.is_open()) {
		cout << "Could not open file!";
	}
			
	while (j != 5) {
		file >> noskipws >> direction;

		switch (direction) {
			case 'U':
				if (number == 1 || 2 || 3) {
					number = number;
				}
				else {
					number += 3;
				}
				break;

			case 'D':
				if (number == 7 || 8 || 9) {
					number = number;
				}
				else {
					number -= 3;
				}
				break;

			case 'L':
				if (number == 1 || 4 || 7) {
						number = number;
				}
				else {
					number -= 1;
				}
				break;

			case 'R':
				if (number == 3 || 6 || 9) {
					number = number;
				}
				else {
					number += 1;
				}
				break;
			case 'i':
				numberList[j] = number;
			}
			
		cout << number;
			j++;
		}
	
	cout << endl;

	file.close();

	return 0;
}