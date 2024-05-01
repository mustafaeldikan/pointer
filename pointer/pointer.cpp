#include <iostream>
using namespace std;
//Mustafa Eldikan----- Student No: 1306210108-----16.05.2022 #Assignment (2)

int main() {
	int const size = 10;
	int Array[size] = {0};
	int* Ptr = Array;
	int temp = 0;
	
	cout << "Please enter ten numbers..." << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> Array[i];
	}


	cout << "Array's elements is : " << endl;


	for (int i = 0; i < size; i++)
	{
		cout << Array[i] << " , ";

	}
	cout << endl;
	cout << "----------------------------" << endl;

	cout << "Before sorting array ...: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << *(Ptr + i) << " , ";
	}
	cout << endl;
	cout << "----------------------------" << endl;

	cout << "After sorting array ...: " << endl;
	for (int i = 0; i < size; i++)
	{
		
		for (int j = i+1; j < size; j++)
		{
			if (*(Ptr + i) < *(Ptr + j))
			{
				temp = *(Ptr+i);
				*(Ptr+i) = *(Ptr+j);
				*(Ptr + j) = temp;

			}
			
		}
	}
	for (int i= 0; i < size; i++)
	{
		cout << *(Ptr + i) << " , ";
	}
	cout << endl;

	return 0;
}