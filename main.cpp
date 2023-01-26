#include <iostream>
#include <algorithm>
#include <iterator>
#include <ctime>
using namespace std;

void reversed(int arr[], const int size);
int main() { 
	srand(time(0));
	const int size = 10;
	int arr[size]{};
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
		cout << arr[i] << '\t';
	}
	/*reverse(begin(arr), end(arr));*/
	cout << "\n***********\n";
	reversed(arr, size)
	/*std::reverse(std::begin(arr),
		std::end(arr));
	std::copy(std::begin(arr), std::end(arr),
		std::ostream_iterator<int>(std::cout, " "));*/
	/*for (int& i : arr) {
		cout << i << ' ';
	}*/
}
void reversed(int arr[], const int size) {
	std::reverse(std::begin(arr),
		std::end(arr));
	std::copy(std::begin(arr), std::end(arr),
		std::ostream_iterator<int>(std::cout, " "));
}
