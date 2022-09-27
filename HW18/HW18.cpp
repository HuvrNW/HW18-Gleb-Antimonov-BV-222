#include <iostream>

//Task 1
inline double f_task1 (double n1, double n2, double n3) {
	return (n1 + n2 + n3) / 3;
}

//Task 2 Overloaded function
short max_val_of_3(short n1, short n2, short n3);
double max_val_of_3(double n1, double n2, double n3);
int max_val_of_3(int n1, int n2, int n3);

//Task 3 Template func
template <typename T>
void min_el_arr(T arr[], const int length);


int main() {
	setlocale(LC_ALL, "Russian");
	int x, y, z;

	//Task 1 Inline function
	std::cout << "\t\tTask 1.\n Inline func.\n Enter 3 numbers --> ";
	std::cin >> x >> y >> z;
	std::cout << f_task1(x, y, z) << "\n\n";
	
	//Task 2 Overloaded function
	std::cout << "\t\tTask 2.\n Overloaded function.\n Max value of 3.\n";
	std::cout << max_val_of_3(2, 3, 4) << "\n\n";
	std::cout << max_val_of_3(2.5, 3.3, 4.2) << "\n\n";
	std::cout << max_val_of_3((short)22, (short)44, (short)33) << "\n\n";
	
	//Task 3 Template function
	const int size3 = 5;
	int arr3[size3]{ 2, 44, -67, 32, -7 };
	min_el_arr(arr3, size3);





	return 0;
}

// Task 2 Overloaded function
int max_val_of_3(int n1, int n2, int n3) {
	std::cout << "INT\n";
	return (n1 > n2 ? n1 : n2) > n3 ? (n1 > n2 ? n1 : n2) : n3;
}
short max_val_of_3(short n1, short n2, short n3) {
	std::cout << "short\n";
	return (n1 > n2 ? n1 : n2) > n3 ? (n1 > n2 ? n1 : n2) : n3;
}
double max_val_of_3(double n1, double n2, double n3) {
	std::cout << "double\n";
	return (n1 > n2 ? n1 : n2) > n3 ? (n1 > n2 ? n1 : n2) : n3;
}

//Task 3 Template func
template <typename T>
void min_el_arr(T arr[], const int length) {
	for (int i = length - 1; i > 0; i--)
		for (int j = 0; j < i; j++)
			if (arr[j] > arr[j + 1])
				std::swap(arr[j], arr[j + 1]);
		std::cout << arr[0];
}




