#include<iostream>
#include<cassert>
using namespace std;

int main()
{
	int i = 5;
	assert(5 == i);
	cout << "hello" << endl;

	assert(4 == i);
	cout << "world" << endl;

	return 0;
}
