//Aaron Richardson
//CIS 1202 501
//December 8th, 2024
#include "iostream"
#include <string>
#include <cstdlib>

using namespace std;

template <typename V>
V half(V number) {
	V test = (number / 2);
	return test;
}
int main() {
	int test;
	
	cin >> test;
	cout << half(test);

	return 0;
}
