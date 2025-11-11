//        Hour Glass Pattern depending on value entered by user

#include <iostream>
using namespace std;
int main() {

	int r;
	cout << "Enter Number of starter rows: ";
	cin >> r;
	cout << '\n' << '\n';

	//                        Upper Part of HourGlass pattern
	for (int i = 1; i <= r; i++) {
		for (int j = 1; j <= i; j++) {                         // for loop for spaces in start...
			cout << " ";

		}
		for (int k = r; k > (i-1); k--) {                      // for loop for Left side inverted triagle
			cout << "^";

		}
		for (int l = i; l < r; l++) {                          // for loop for Right side inverted triangle

			cout << "^";
			
		}
		cout << endl;
	}


	//                      Lower Part of HourGlass pattern
	for (int i = r; i >= 1; i--) {
		for (int j = 1; j <= i; j++) {                          // for loop for spaces in start....

			cout << " ";

		}
		for (int k = 1; k < ((r-i)+1); k++) {                  // for loop for Left side traingle

			cout << "^";

		}
		for (int l = i; l <= r; l++) {                         // for loop for Right side triangle
			cout << "^";

		}
		cout << endl;
	}


		return 0;
}
