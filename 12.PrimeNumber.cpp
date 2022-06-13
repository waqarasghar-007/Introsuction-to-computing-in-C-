#include <iostream>
using namespace std;
int main()
{
	bool prime;
	int num;
	cout << "Enter a number : \n";
	cin >> num;
	for (int i = 2; i < num / 2; i++)
	{
		if (num%i == 0)
		{
			prime = false;
			break;
		}
		else
		{
			prime = true;
			
		}
			
	}
	if (prime)
	{
		cout << num << " is a prime number." <<endl;
	}
	else
	{
		cout <<num << " is not a prime number. \n";
	}
	system("pause");
	return 0;
}
