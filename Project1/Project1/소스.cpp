#include <iostream>
#include <string>
using namespace std;

int main() {
	string input;

	cout << "�Գ��� �Է��ϼ���." << endl;

	cin >> input;

	for (unsigned int a = 0; a < input.length(); a++) {
		if (input[a] >= 'a')
			input[a] -= 'a' - 'A';

		if (!(input[a] == 'A' || input[a] == 'T' || input[a] == 'G' || input[a] == 'C')) {
			cout << "���� ���� ���ڰ� �ֽ��ϴ�." << endl;

			return 0;
		}

		if (input[a] == 'A') {
			input[a] = 'U';
		}
		if (input[a] == 'T') {
			input[a] = 'A';
		}
		if (input[a] == 'C') {
			input[a] = 'G';
		}
		if (input[a] == 'G') {
			input[a] = 'C';
		}
	}

	cout << "-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;

	for (unsigned int a = 0; a < input.length(); a += 3) {
		if (a != 0)
			cout << "-";
		cout << (char)input[a] << (char)input[a + 1] << (char)input[a + 2];
	}

	cout << endl;

	for (unsigned int a = 0; a < input.length(); a += 3) {
		if (a != 0)
			cout << " | ";

		switch (input[a]) {
		case 'U':

			switch (input[a + 1]) {
			case 'U':

				switch (input[a + 2]) {
				case 'U':
				case 'C':
					cout << "��� �˶��";
					break;
				case 'A':
				case 'G':
					cout << "����";
					break;
				default:
					cout << "�ش��ϴ� �ƹ̳���� �����ϴ�.";
					break;
				}
				break;

			case 'C':

				switch (input[a + 2]) {
				case 'U':
				case 'C':
				case 'A':
				case 'G':
					cout << "����";
					break;
				default:
					cout << "�ش��ϴ� �ƹ̳���� �����ϴ�.";
					break;
				}
				break;

			case 'A':

				switch (input[a + 2]) {
				case 'U':
				case 'C':
					cout << "Ÿ�̷ν�";
					break;
				case 'A':
				case 'G':
					cout << "���� �ڵ�";
					break;
				default:
					cout << "�ش��ϴ� �ƹ̳���� �����ϴ�.";
					break;
				}
				break;

			case 'G':

				switch (input[a + 2]) {
				case 'U':
				case 'C':
					cout << "�ý�����";
					break;
				case 'A':
					cout << "���� �ڵ�";
					break;
				case 'G':
					cout << "Ʈ������";
					break;
				default:
					cout << "�ش��ϴ� �ƹ̳���� �����ϴ�.";
					break;
				}
				break;

			default:
				cout << "�ش��ϴ� �ƹ̳���� �����ϴ�.";
				break;
			}
			break;

		case 'C':

			switch (input[a + 1]) {
			case 'U':

				switch (input[a + 2]) {
				case 'U':
				case 'C':
				case 'A':
				case 'G':
					cout << "����";
					break;
				default:
					cout << "�ش��ϴ� �ƹ̳���� �����ϴ�.";
					break;
				}
				break;

			case 'C':

				switch (input[a + 2]) {
				case 'U':
				case 'C':
				case 'A':
				case 'G':
					cout << "���Ѹ�";
					break;
				default:
					cout << "�ش��ϴ� �ƹ̳���� �����ϴ�.";
					break;
				}
				break;

			case 'A':

				switch (input[a + 2]) {
				case 'U':
				case 'C':
					cout << "����Ƽ��";
					break;
				case 'A':
				case 'G':
					cout << "�۷�Ÿ��";
					break;
				default:
					cout << "�ش��ϴ� �ƹ̳���� �����ϴ�.";
					break;
				}
				break;

			case 'G':

				switch (input[a + 2]) {
				case 'U':
				case 'C':
				case 'A':
				case 'G':
					cout << "�Ƹ�����";
					break;
				default:
					cout << "�ش��ϴ� �ƹ̳���� �����ϴ�.";
					break;
				}
				break;

			default:
				cout << "�ش��ϴ� �ƹ̳���� �����ϴ�.";
				break;
			}
			break;
		case 'A':

			switch (input[a + 1]) {
			case 'U':

				switch (input[a + 2]) {
				case 'U':
				case 'C':
				case 'A':
					cout << "���� �ҷ���";
					break;
				case 'G':
					cout << "���� �ڵ�";
					break;
				default:
					cout << "�ش��ϴ� �ƹ̳���� �����ϴ�.";
					break;
				}
				break;

			case 'C':
				switch (input[a + 2]) {
				case 'U':
				case 'C':
				case 'A':
				case 'G':
					cout << "Ʈ������";
					break;
				default:
					cout << "�ش��ϴ� �ƹ̳���� �����ϴ�.";
					break;
				}
				break;

			case 'A':
				switch (input[a + 2]) {
				case 'U':
				case 'C':
					cout << "�ƽ��Ķ��";
					break;
				case 'A':
				case 'G':
					cout << "���̽�";
					break;
				default:
					cout << "�ش��ϴ� �ƹ̳���� �����ϴ�.";
					break;
				}
				break;

			case 'G':
				switch (input[a + 2]) {
				case 'U':
				case 'C':
					cout << "����";
					break;
				case 'A':
				case 'G':
					cout << "�Ƹ�����";
					break;
				default:
					cout << "�ش��ϴ� �ƹ̳���� �����ϴ�.";
					break;
				}
				break;

			default:
				cout << "�ش��ϴ� �ƹ̳���� �����ϴ�.";
				break;
			}
			break;

		case 'G':

			switch (input[a + 1]) {
			case 'U':
				switch (input[a + 2]) {
				case 'U':
				case 'C':
				case 'A':
				case 'G':
					cout << "�߸�";
					break;
				default:
					cout << "�ش��ϴ� �ƹ̳���� �����ϴ�.";
					break;
				}
				break;

			case 'C':
				switch (input[a + 2]) {
				case 'U':
				case 'C':
				case 'A':
				case 'G':
					cout << "�˶��";
					break;
				default:
					cout << "�ش��ϴ� �ƹ̳���� �����ϴ�.";
					break;
				}
				break;

			case 'A':
				switch (input[a + 2]) {
				case 'U':
				case 'C':
					cout << "�ƽ���Ʈ��";
					break;
				case 'A':
				case 'G':
					cout << "�۷�Ž��";
					break;
				default:
					cout << "�ش��ϴ� �ƹ̳���� �����ϴ�.";
					break;
				}
				break;

			case 'G':
				switch (input[a + 2]) {
				case 'U':
				case 'C':
				case 'A':
				case 'G':
					cout << "�۶��̽�";
					break;
				default:
					cout << "�ش��ϴ� �ƹ̳���� �����ϴ�.";
					break;
				}
				break;

			default:
				cout << "�ش��ϴ� �ƹ̳���� �����ϴ�.";
				break;
			}
			break;

		default:
			cout << "�ش��ϴ� �ƹ̳���� �����ϴ�.";
			break;
		}
	}

	cout << endl;

	system("pause");
}