#include <iostream>

using namespace std;

void array_init(int*, int, int, int);
string convert_array_to_string(int*, int);
bool number_in_array(int*, int, int);
int count_number_in_array(int*, int, int);
int first_number_place_in_array(int*, int, int);
int last_number_place_in_array(int*, int, int);

int main() {

	const int size = 100;
	int numbers[size];

	int length;
	cout << "Input array length : ";
	cin >> length;

	array_init(numbers, length, 1, 10);
	cout << convert_array_to_string(numbers, length);

	int number;
	cout << "\nInput number you want to check : ";
	cin >> number;

	string msg = number_in_array(numbers, length, number) ? "" : "no ";
	cout << "There are " << msg << number << " in array\n";
	cout << "Number " << number << " appears in array "
		<< count_number_in_array(numbers, length, number) << " times";
	cout << "\nFirst time in " 
		<< first_number_place_in_array(numbers, length, number) << " place";
	cout << "\nAnd last time in "
		<< last_number_place_in_array(numbers, length, number) << " place";

	return 0;
}
