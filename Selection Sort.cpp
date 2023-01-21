#include<iostream>
using namespace std;

void selectionsort(int Arr[],int n)
{
	
	int i,j,k;
	for(i=0; i<n-1; i++)
	{
		for(k=j=i; j<n; j++)
		{
			if(Arr[k] < Arr[i])
			{
				k=j;
			}
			swap(Arr[i],Arr[k]);
			
		}
	}
}



int main()
{
	int foo[5]= {2,1,6,3,5};
	int n=5;
	
	selectionsort(foo,5);
	for(int i=0; i<n; i++)
	{
		cout<< foo[i]<<endl;
	}
}