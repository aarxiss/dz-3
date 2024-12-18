#include <iostream>
#include <cmath>
using namespace std;

int main() {
	setlocale(LC_ALL, "uk_UA");
	// Підрахунок кількості додатних елементів масиву
	int quantity;
	cout << "Введіть кількість елементів масиву: ";
	cin >> quantity;

	double* array = new double[quantity];
	int positive_count = 0;

	cout << "Введіть елементи масиву:" << endl;
	for (int i = 0; i < quantity; ++i) {
		cin >> array[i];
		if (array[i] > 0) {
			positive_count++;
		}
	}

	cout << "Кількість додатніх елементів: " << positive_count << endl;

	delete[] array;
	return 0;
}

