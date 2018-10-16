#include<iostream>
using namespace std;
int main()
{

	int arr[10], i, num, n, c=0, pos;
	cout<<"Enter the array size : ";
	cin>>size;
	cout<<"Enter Array Elements : ";
	for(i=0; i<size; i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the number to search : ";
	cin>>num;
	for(i=0; i<size; i++)
	{
		if(arr[i]==num)
		{
			c=1;
			pos=i+1;
			break;
		}
	}
	if(c==0)
	{
		cout<<"Number not found..!!";
	}
	else
	{
		cout<<num<<" found at position "<<pos;
	}

}
//Changed Size
