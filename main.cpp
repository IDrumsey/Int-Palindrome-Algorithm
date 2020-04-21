#include <iostream>

using std::cout;
using std::endl;
using std::cin;


bool isPalindrome(int num) {
	if (num < 0)return 0;//Takes care of negative nums

	int firstHalf = num;
	int secondHalf = 0;

	int digits = floor(log10(num) + 1);

	while (firstHalf > secondHalf) {
		secondHalf = (secondHalf * 10) + (firstHalf % 10);

		firstHalf = floor(firstHalf / 10);

		cout << "second : " << secondHalf << endl;
		cout << "first : " << firstHalf << endl;
	}

	if (digits % 2 != 0)//ODD
	{
		secondHalf /= 10;
	}


	if (firstHalf == secondHalf) {
		return 1;
	}
	else return 0;
}




int main() {

	char choice;
	int num;

	do
	{
		system("cls");

		cout << "Num : ";
		cin >> num;

		if (isPalindrome(num)) {
			cout << num << " is a Palindrome\n";
		}
		else {
			cout << num << " is Not a Palindrome\n";
		}

		cout << "Go again? (y/n) : ";
		cin >> choice;
	} while (choice == 'y' || choice == 'Y');
	system("pause");
	return 0;
}