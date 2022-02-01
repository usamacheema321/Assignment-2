#include<iostream>
#include<string>
using namespace std;
int main()
{
	int size;
	cout<<"enter size:";
	cin>>size;
	int arr[size];

	cout<<"Please enter number in Array"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	for(int i=size-1;i>=0;i--)
	{
		cout<< arr[i]; 
		
		
	}


return 0;
}
	
	