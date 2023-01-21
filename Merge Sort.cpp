#include<iostream>
using namespace std;

void merge(int *arr, int s, int e)
{
	int mid = (s + e) /2;
	
	int length1 = mid - s+1;
	int length2 = e - mid;
	
	
	int *first =new int[length1];
	int *second =new int[length2];
	
	//copy values
	
	int mainArrayindex = s;
	for(int i=0; i<length1; i++)
	{
		first[i] = arr[mainArrayindex++];
	}
	mainArrayindex = mid+1;
	for(int i=0; i<length2; i++)
	{
		second[i] = arr[mainArrayindex++];
	}
	//merge two sorted arrays
	
	int index1 = 0;
	int index2 = 0;
	mainArrayindex = s;
	
	while(index1 < length1 && index2 < length2)
	{
		if(first[index1] < second[index2])
		{
			arr[mainArrayindex++] = first[index1++];
		}
		else
		{
			arr[mainArrayindex++] = second[index2++];	
		}
		while(index1 < length1)
		{
			arr[mainArrayindex++] = first[index1++];
		}
		while(index2 < length2)
		{
			arr[mainArrayindex++] = second[index2++];
		}
	}

}
void mergeSort(int arr[], int s, int e)
{
	if(s >= e)
	{
		return;
	}
	int mid = (s + e) /2;
	
	//sort left part
	
	mergeSort(arr, s, mid);
	
	//sort right part
	
	mergeSort(arr, mid+1, e);
	
	//merge two sorted arrays
	
	merge(arr, s, e);
}
int main()
{
	int arr[5] = {6,4,3,5,1};
	int n = 5;
	
	mergeSort(arr , 0, n-1);
	for(int i=0; i<n; i++)
	{
		cout << arr[i] <<endl;
	}
	
}