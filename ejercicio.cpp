#include <iostream>

using namespace std;

int main()
{
	long vals[100];

	vals[0] = 1;
	vals[1] = 1;
	vals[2] = 1;

	for(int i = 3; i < 100; i++)
	{
		vals[i] = vals[i - 2] + vals[i - 3];
	}
	
	cout << endl;
	for(int i = 0; i < 100; i++)
	{
		cout << vals[i] << ", ";

		if(i % 10 == 0 and i != 0)
			cout << endl;
	}

	cout << endl;
}
