#include <iostream>
using namespace std;
int main()
{
	if (true)
		printf("true1 \n");
	if (false)
		cout << "False1 \n";

	if (0)
		cout << "zero \n";
	else
		cout << "one \n";

	if (true)
		if (true)
			cout << "True2 \n";
	if (true)
		if (false)
			cout << "False2 \n";


	if (true || true)
		cout << "True3 \n";
	else if (true && false)
		cout << "False3 \n";
	else
		cout << "True3 \n";

	system("pause");
	return 0;
}
