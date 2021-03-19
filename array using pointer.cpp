#include<iostream>
using namespace std;
int main()
{
	int i,a[5];
	cout<<"Enter element: ";
	for(i=0;i<=4;i++)
	{
		cin>>a[i];
	}
	cout<<"You entered: ";
	for(i=0;i<=4;i++)
	{
		cout<<endl<<*(a+i);
	}
	return 0;
}
