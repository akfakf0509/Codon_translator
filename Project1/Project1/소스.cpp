#include <iostream>
#include <string>
using namespace std;

int main() {
	string input;

	cout << "�Գ��� �Է��ϼ���." << endl;

	cin >> input;

	for (unsigned int a = 0; a < input.length(); a++) {
		if(input[a] >= 'a')
			input[a] -= 'a' - 'A';

		if (!(input[a] == 'A' || input[a] == 'T' || input[a] == 'G' || input[a] == 'C')) {
			cout << "���� ���� ���ڰ� �ֽ��ϴ�." << endl;

			return 0;
		}
			
		if (input[a] == 'T') {
			input[a] = 'U';
		}
	}

	cout << "-=-=-=-=-=-=-=-=-=-=-=-=-" << endl << "�ڵ� : ";

	for (unsigned int a = 0; a < input.length(); a += 3) {

	}
}