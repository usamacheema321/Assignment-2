#include<iostream>
using namespace std;
int main()
{
	int size;
	cout<< " enter array size:";
	cin>>size;
	int arr[size];
	int arr2[size];
	cout<< " enter numbers in array ";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<size;i++)
	{
		if (arr[i]==arr[i+1])
		{
//			arr2[i]=arr[i];
		}
	}
	for(int j=0;j<size;j++)
	{
		cout<<arr[j]<<"\t";
	}
}
