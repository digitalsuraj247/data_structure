#bubble Sort
using namespace std;
#include<iostream>
main()
{
	int a[]={1,21,2,34,65,99,8,6,7,9},n=10;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			int temp;
			if(a[j]>a[j+1])	
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	
	for(int i=0;i<10;i++)
	{
		cout<<a[i]<<" ";
	}
}
