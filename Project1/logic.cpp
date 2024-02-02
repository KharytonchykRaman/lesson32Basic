#include <iostream>
#include <string>

using namespace std;

void array_init(int* array, int length, int min, int max) {

	if (max < min)
	{
		swap(min, max);
	}

	for (int i = 0; i < length; i++)
	{
		array[i] = rand() % (max - min + 1) + min;
	}
}

string convert_array_to_string(int* array, int length) {

	string msg = "";

	for (int i = 0; i < length; i++)
	{
		msg += to_string(array[i]) + " ";
	}

	return msg;
}

bool number_in_array(int* array, int length, int number) {

	for (int i = 0; i < length; i++)
	{
		if (array[i] == number)
		{
			return true;
		}
	}

	return false;
}

int count_number_in_array(int* array, int length, int number) {

	int countNum = 0;

	for (int i = 0; i < length; i++)
	{
		if (array[i] == number)
		{
			countNum++;
		}
	}

	return countNum;
}

int first_number_place_in_array(int* array, int length, int number) {

	for (int i = 0; i < length; i++)
	{
		if (array[i] == number)
		{
			return i+1;
		}
	}

	return 0;
}

int last_number_place_in_array(int* array, int length, int number) {

	for (int i = length - 1; i >= 0; i--)
	{
		if (array[i] == number)
		{
			return i + 1;
		}
	}

	return 0;
}
