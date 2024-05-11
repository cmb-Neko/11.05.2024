#include <iostream>
#include <ctime>
#include <chrono>
using namespace std::chrono;
using namespace std;

int main() {
	int input, number;
	srand(time(0));
	number = rand() % 501 - 1;

	cout << number << endl;
	auto start = high_resolution_clock::now();
	for (int round = 0; ; round++) {
		cout << "Enter guess: ";
		cin >> input;

		if (input == 0) {
			break;
		}
		else if (input < number) {
			cout << "Your guess is smaller than number" << endl;
		}
		else if (input > number) {
			cout << "Your guess is bigger than number" << endl;
		}
		else if (input == number) {
			cout << "ur did it!" << endl;
			auto stop = high_resolution_clock::now();
			auto duration = duration_cast<seconds>(stop - start);
			cout << "You have guessed the number in " << duration.count() << " seconds, and it took you " << round << " tries!" << endl;
			break;
		}
	}

}