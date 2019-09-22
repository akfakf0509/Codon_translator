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
		switch (input[a]) {
		case 'U':
			switch (input[a + 1]) {
			case 'U':
				switch (input[a + 2]) {
				case 'U':
				case 'C':
					cout << "페닐 알라닌";
					break;
				case'A':
				case'G':
					cout << "류신";
					break;
				}
				break;
			case 'C':
				cout << "세린";
				break;
			case 'A':
				switch (input[a + 2]) {
				case 'U':
				case'C':
					cout << "타이로신";
					break;
				case 'A':
				case'G':
					cout << "종결 코돈";
					break;
				}
				break;
			case 'G':
				switch (input[a + 2]) {
				case 'U':
				case'C':
					cout << "시스테인";
					break;
				case 'A':
					cout << "종결 코돈";
					break;
				case 'G':
					cout << "트립토판";
					break;
				}
				break;
			}
			break;
		case 'C':
			switch (input[a + 1]) {
			case 'U':
				cout << "류신";
				break;
			case'C':
				cout << "프롤린";
				break;
			case 'A':
				switch (input[a + 2]) {
				case 'U':
				case'C':
					cout << "히스티딘";
					break;
				case'A':
				case'G':
					cout << "글루타민";
					break;
				}
				break;
			case'G':
				cout << "아르지닌";
				break;
			}
			break;
		case'A':
			switch (input[a + 1]) {
			case'U':
				switch (input[a + 2]) {
				case'U':
				case'C':
				case'A':
					cout << "아이 소류신";
					break;
				case'G':
					cout << "시작 코돈";
					break;
				}
				break;
			case 'C':
				cout << "트레오닌";
				break;
			case 'A':
				switch (input[a + 2]) {
				case'U':
				case'C':
					cout << "아스파라긴";
					break;
				case'A':
				case'G':
					cout << "라이신";
					break;
				}
				break;
			case'G':
				switch (input[a + 2]) {
				case'U':
				case'C':
					cout << "세린";
					break;
				case'A':
				case'G':
					cout << "아르지닌";
					break;
				}
				break;
			}
			break;
		case'G':
			switch (input[a + 1]) {
			case'U':
				cout << "발린";
				break;
			case'C':
				cout << "알라닌";
				break;
			case'A':
				switch (input[a + 2]) {
				case'U':
				case'C':
					cout << "아스파트산";
					break;
				case'A':
				case'G':
					cout << "글루탐산";
					break;
				}
				break;
			}
			break;
		}
		cout << " | ";
	}
}