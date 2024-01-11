#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

string string1;

const int size1 = 5;
const int size2 = 7;

int arr5[size1], arr7[size2];

const int new_array = size1 + size2;

int merged_array[new_array];

void MergeArrays(int arr5[], int arr7[], int merged_array[]) {
	for (int i = 0; i < size1; i++)
	{
		merged_array[i] = arr5[i];
	}

	for (int i = 0; i < size2; i++)
	{
		merged_array[i + size1] = arr7[i];
	}

	sort(merged_array, merged_array + 12);
}

void CommonElement(int arr5[], int arr7[], int merged_array[]) {
	cout << "Common Elements = [";

	for (int i = 0; i < size1; i++)
	{
		for (int j = 0; j < size2; j++) {
			if (arr5[i] == arr7[j])
			{
				cout << arr5[i] << ", ";
			}
			else
			{
				continue;
			}
		}
	}

	cout << "]\n";
}

void pelindromic_check(string str) {
	int flag = 0, i;
	for (i = 0; i < str.size(); i++) {
		if (str[i] != str[str.size() - i - 1]) {
			flag = 1;
			break;
		}
	}

	if (flag) {
		cout << str << " is not a palindrome" << endl;
	}
	else {
		cout << str << " is a palindrome" << endl;
	}
}

int main() {
	cout << "Enter valus for 1st array: ";
	for (int i = 0; i < 5; i++)
	{
		cin >> arr5[i];
	}

	cout << "Enter valus for 2st array: ";
	for (int i = 0; i < 7; i++)
	{
		cin >> arr7[i];
	}

	MergeArrays(arr5, arr7, merged_array);

	cout << "Merged Array in sorted form is: [";

	for (int i = 0; i < 12; i++)
	{
		cout << merged_array[i] << ", ";
	}

	cout << "]\n";

	CommonElement(arr5, arr7, merged_array);

	cin.ignore();

	cout << "Enter A sentence to check if it is palindrome or not: \n";
	getline(cin, string1);

	pelindromic_check(string1);

	return 0;
}