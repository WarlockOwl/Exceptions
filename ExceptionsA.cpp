//Aaron Richardson
//CIS 1202 501
//December 8th, 2024
#include "iostream"
#include <string>
#include <cstdlib>

using namespace std;

char character(char, int);

int main() {
	char start, end;
	int offset;
	try {
		cout << character('a', 1);
		cout << character('a', -1);
		cout << character('Z', -1);
		cout << character('?', 5);
	}
	catch(string charExc){
		cout << charExc;
	}
	catch (string rangeExc) {
		cout << rangeExc;
	}

	return 0;
}

char character(char start, int offset) {
	string charExc = "invalidCharacterException";
	string rangeExc = "invalidRangeException";

	if (isalpha(start) == false)
		throw charExc;
	else if (isalpha(start + offset) == false)
		throw rangeExc;
	else if (isupper(start) != isupper(start+offset))
		throw rangeExc;
	else
		return (start + offset);

}