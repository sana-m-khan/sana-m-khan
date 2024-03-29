// Dice Rolling While Lab.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <random>
using namespace std;

int main()
{
	random_device dev;
	mt19937_64 rng(dev());
	uniform_int_distribution<int> dist(1, 6);

	int old = 0, newroll = 0, count = 0;
	bool won = false;

	while (!won) {
		newroll = dist(rng);
		if (old + 1 == newroll) {
			old = newroll;
			count++;
			if (newroll == 6) {
				won = true;
			}
		}
		else {
			old = 0;
		}
		cout << newroll;
	}
	cout << "\nCount: " << count << endl;
    return 0;
}