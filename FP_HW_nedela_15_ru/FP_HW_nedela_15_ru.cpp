#include <Windows.h>
#include <iostream>
using namespace std;
int Max_Min(int* arr1, int* arr2, unsigned size1, unsigned size2) {
	int* arr3 = new int[size1 + size2];
	for (int i = 0; i < size1; i++) {
		arr3[i] = arr1[i];
	}
	for (int i = 0; i < size2; i++) {
		arr3[i+size1] = arr2[i];
	}
	int max = arr3[0];
	for (int i = 0; i < size1 + size2; i++) {
		if (max < arr3[i]) {
			max = arr3[i];
		}
	}
	int min = arr3[0];
	for (int i = 0; i < size1 + size2; i++) {
		if (min > arr3[i]) {
			min = arr3[i];
		}
	}
	return max;
	return min;
}
void avg() {

}
void Action(int* a, int* b, unsigned size1, unsigned size2) {

}
void Show(int* a, int* b, unsigned size1, unsigned size2) {
	for (int i = 0; i < size1; i++) {
		cout << i<<" " << "element first arr->" << a[i] << endl;
	}
	cout << endl;
	for (int i = 0; i < size2; i++) {
		cout << i <<" " << "element second arr->" << b[i] << endl;
	}
	cout << endl;
}
int main()
{
	unsigned size1;
	unsigned size2;
	
	cout << "enter size1"<<endl;
	cin >> size1;
	cout << "enter size2"<<endl;
	cin >> size2;

	int* arr1 = new int[size1];
	int* arr2 = new int[size2];

	for (int i = 0; i < size1; i++) {
		cout << "enter " << i << " element firs arr"<<endl;
		cin >> arr1[i];
	}
	for (int i = 0; i < size2; i++) {
		cout << "enter " << i << " element second arr"<<endl;
		cin >> arr2[i];
	}
	//Show(arr1, arr2, size1, size2);
	common_Arr(arr1, arr2, size1, size2);
}

