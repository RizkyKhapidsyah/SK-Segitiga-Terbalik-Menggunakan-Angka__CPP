#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char* argv[]) {
	int count = 5;
	int i, j, k;

	for (i = 0; i < 5; i++) {
		for (j = 0; j < i; j++) {
			cout << " ";
		}
			
		for (k = count; k > 0; k--) {
			cout << k;
		}
			
		count--;
		cout << "\n";
	}

	_getch();
	return 0;
}