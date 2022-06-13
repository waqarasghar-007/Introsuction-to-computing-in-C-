#include <iostream>
using namespace std;
int main()
{
	bool even = false;
	int num;
	cout << "Enter any number : \n";
	cin >> num;
	if (num % 2 == 0)
		even = true;
	else
		even = false;
	if (even)
		cout << num << " is " << "even" << endl;
	else
		cout << num << " is " << " odd " << endl;
	system("pause");
	return 0;
}
