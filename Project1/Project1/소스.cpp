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
		switch (input[a]) {
		case 'U':
			switch (input[a + 1]) {
			case 'U':
				switch (input[a + 2]) {
				case 'U':
				case 'C':
					cout << "��� �˶��";
					break;
				case'A':
				case'G':
					cout << "����";
					break;
				}
				break;
			case 'C':
				cout << "����";
				break;
			case 'A':
				switch (input[a + 2]) {
				case 'U':
				case'C':
					cout << "Ÿ�̷ν�";
					break;
				case 'A':
				case'G':
					cout << "���� �ڵ�";
					break;
				}
				break;
			case 'G':
				switch (input[a + 2]) {
				case 'U':
				case'C':
					cout << "�ý�����";
					break;
				case 'A':
					cout << "���� �ڵ�";
					break;
				case 'G':
					cout << "Ʈ������";
					break;
				}
				break;
			}
			break;
		case 'C':
			switch (input[a + 1]) {
			case 'U':
				cout << "����";
				break;
			case'C':
				cout << "���Ѹ�";
				break;
			case 'A':
				switch (input[a + 2]) {
				case 'U':
				case'C':
					cout << "����Ƽ��";
					break;
				case'A':
				case'G':
					cout << "�۷�Ÿ��";
					break;
				}
				break;
			case'G':
				cout << "�Ƹ�����";
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
					cout << "���� �ҷ���";
					break;
				case'G':
					cout << "���� �ڵ�";
					break;
				}
				break;
			case 'C':
				cout << "Ʈ������";
				break;
			case 'A':
				switch (input[a + 2]) {
				case'U':
				case'C':
					cout << "�ƽ��Ķ��";
					break;
				case'A':
				case'G':
					cout << "���̽�";
					break;
				}
				break;
			case'G':
				switch (input[a + 2]) {
				case'U':
				case'C':
					cout << "����";
					break;
				case'A':
				case'G':
					cout << "�Ƹ�����";
					break;
				}
				break;
			}
			break;
		case'G':
			switch (input[a + 1]) {
			case'U':
				cout << "�߸�";
				break;
			case'C':
				cout << "�˶��";
				break;
			case'A':
				switch (input[a + 2]) {
				case'U':
				case'C':
					cout << "�ƽ���Ʈ��";
					break;
				case'A':
				case'G':
					cout << "�۷�Ž��";
					break;
				}
				break;
			}
			break;
		}
		cout << " | ";
	}
}