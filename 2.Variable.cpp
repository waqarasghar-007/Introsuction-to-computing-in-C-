#include <iostream>
using namespace std;
int main()
{
	int x;
	cout<<"Values before declaration \n";
	cout<<x <<endl;
	cout<<&x <<endl;
	x=10;
	cout<<"Values after first declaration \n";
	cout<<x <<endl;
	cout<<&x <<endl;
	x=20;
	cout<<"Values after second declaration \n";
	cout<<x <<endl;
	cout<<&x <<endl;
	
	system("pause");
	return 0;
}
