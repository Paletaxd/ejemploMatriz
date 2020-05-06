#include <iostream>
#include <conio.h>

using namespace std;

int main(void) {

	int vector[5][5] = {  1,  3,  5,  7,  9,
						 11, 13, 15, 17, 19,
						 21, 23, 25, 27, 29,
						 31, 33, 35, 37, 39,
						 41, 43, 45, 47, 49
					};
	int high = 0, lowest = 1000;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << vector[i][j] << " ";
		}
		cout << "\n\n";
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (vector[i][j] > high) {
				high = vector[i][j];
			}
			if (vector[i][j] < lowest) {
				lowest = vector[i][j];
			}
		}
	}

	cout << "The highest value of the vector is: " << high << endl;
	cout << "\nThe lowest value of the vector is: " << lowest << endl;

	getch();
	return 0;
}