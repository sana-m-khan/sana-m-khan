/* 
Name: Sana M. Khan
Period: 5
Project: Module 3
Project Description: Reads in fractions and displays them in 3 different forms
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string full, first, second, top1, bottom1, top2, bottom2;
	int index, index2, index3, t1, t2, b1, b2, newden, newtop, newtop2, newtop3, mixed, mix2;
	double dec;
	 
	cout << "Enter your fraction problem ex. a/b + c/d: ";
	getline(cin, full);

	index = full.find(' ');
	first = full.substr(0, index);
	second = full.substr(index + 3);

	index2 = first.find('/');
	top1 = first.substr(0, index2);
	bottom1 = first.substr(index2 + 1);

	index3 = second.find('/');
	top2 = second.substr(0, index3);
	bottom2 = second.substr(index3 + 1);

	t1 = stoi(top1);
	b1 = stoi(bottom1);
	t2 = stoi(top2);
	b2 = stoi(bottom2);

	newtop = t1 * b2;
	newtop2 = b1 * t2;
	newtop3 = newtop + newtop2;
	newden = b1 * b2;
	cout << newtop3 << '/' << newden << endl;

	mixed = newtop3 / newden;
	mix2 = newtop3 % b2;
	cout << mixed << " " << mix2 << '/' << newden << endl;

	dec = 2.0 / 8.0;
	cout << newtop3 / (double)newden << endl;

	return 0;
}

