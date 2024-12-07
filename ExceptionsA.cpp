//Aaron Richardson
//CIS 1202 501
//December 8th, 2024
#include "iostream"
#include <string>
#include <cstdlib>

using namespace std;

char character(char, int);

int main() {
	try {
		cout << character('a', 1) << endl;
		cout << character('a', -1) << endl;
	}
	catch (string rangeExc) {
		cout << rangeExc << endl;
	}
	//returns an error for if the result is out of bounds of the alphabet
	try {
		cout << character('Z', -1) << endl;
		cout << character('?', 5) << endl;
	}
	catch(string charExc){
		cout << charExc << endl;
	}
	//returns an error for if the result is onot a letter of the alphabet
	return 0;
}

char character(char start, int offset) {
	string charExc = "invalidCharacterException";
	string rangeExc = "invalidRangeException";

	if (isalpha(start) == false)
		throw charExc;
	else if (isalpha(start + offset) == false || isupper(start) != isupper(start+offset))
		throw rangeExc;
	//Checks whether the letter and number entered would put the result outside of
	//an acceptable range, or if the letter is a letter
	else
		return (start + offset);
	//returns the letter a specified number away from the beginning number
}
