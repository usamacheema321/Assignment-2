#include<iostream>
using namespace std;
int main()
{
	int size;
	cout<< " enter the array size " << endl;
	cin>>size;
	int arr[size];
	cout<< " enter array elements " << endl;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<< " even elements: ";
	for(int i=0;i<size;i++)
	{
		if(arr[i]%2==0)
		{
			cout<< arr[i]<< " ";
		}
		
	}
	cout<< " odd elements:" ;
	for(int i=0;i<size;i++)
	{
		if(arr[i]%2==1)
		{
			cout<< arr[i]<< " ";
		}
	}
	
	return 0;
	
	
	
}