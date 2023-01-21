#include<iostream>
using namespace std;



int partition(int arr[], int s, int e)
{
	int pivot= arr[s];
	int count= 0;
	for(int i=s+1; i<=e; i++)
	{
		if(arr[i] <= pivot)
		{
			count++;
		}
	}
	
	int pivotindex= s+count;
	swap(arr[pivotindex],arr[s]);
	
	
	int i=s;
	int j=e;
	
	while(i < pivotindex && j > pivotindex)
	{
		while(arr[i]<=pivotindex)
		{
			i++;
		}
		while(arr[j]>pivotindex)
		{
			j--;
		}
		if(i < pivotindex && j > pivotindex)
		{
			swap(arr[i++],arr[j--]);
		}
		return pivotindex;
	}
	
	
}
void quicksort(int arr[], int s, int e)
{
	if(s >= e)
	{
		return;
	}
	
	int p=partition(arr, s, e);
	
	quicksort(arr, s, p-1);
	
	quicksort(arr, p+1, e);
	
	
}




int main()
{
	int foo[5]={5,6,4,3,2};
	int n=5;
	
	quicksort(foo, 0, n-1);
	
	for(int i=0; i<n; i++)
	{
		cout << foo[i] <<endl;
	}
	cout << endl;
}