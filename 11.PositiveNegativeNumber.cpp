#include <iostream>
using namespace std;
int main()
{
	bool positive = false;
	int num;
	cout << "Enter a number \n";
	cin >> num;
	if (num >= 0)
		positive = true;
	else
		positive = false;

	if (positive)
		cout << num << " is positive." << endl;
	else
		cout << num << " is negative." << endl;
	system("pause");
	return 0;
}
