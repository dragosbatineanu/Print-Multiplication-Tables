#include <iostream>

#include "Header.h"
using namespace std;

void multiplicationTable() {
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			int product = i * j;
			cout << i << " * " << j << " = " << product << "\t";
		}

		cout << endl;
	}
}