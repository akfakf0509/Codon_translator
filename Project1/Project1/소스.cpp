#include <iostream>
#include <string>
using namespace std;

int main() {
	string input;

	cout << "게놈을 입력하세요." << endl;

	cin >> input;

	for (unsigned int a = 0; a < input.length(); a++) {
		if(input[a] >= 'a')
			input[a] -= 'a' - 'A';

		if (!(input[a] == 'A' || input[a] == 'T' || input[a] == 'G' || input[a] == 'C')) {
			cout << "옳지 않은 문자가 있습니다." << endl;

			return 0;
		}
			
		if (input[a] == 'T') {
			input[a] = 'U';
		}
	}

	cout << "-=-=-=-=-=-=-=-=-=-=-=-=-" << endl << "코돈 : ";

	for (unsigned int a = 0; a < input.length(); a += 3) {

	}
}