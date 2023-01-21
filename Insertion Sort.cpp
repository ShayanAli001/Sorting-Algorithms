#include<iostream>
using namespace std;


void insertionSort(int arr[], int n)
{
	for(int i=1; i<n; i++)
	{
		int temp = arr[i];
		int j = i-1;
		while(j >= 0 && arr[j] > temp)
		{
			arr[j+1] = arr[j];
			j--;	
		}	
		arr[j+1] = temp;
	}
	
}

void print(int arr[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout << arr[i] << ",";
	}
}

int main()
{
	int n;
	cout << "Enter the size of array :"<<endl;
	cin >> n;
	
	int arr[n];
	cout << "Enter values to sort " << endl;
	for(int i=0; i<n; i++)
	{
		cin >> arr[i];
	}
	insertionSort(arr,n);
	for(int i=0; i<n; i++)
	{
		cout << arr[i];
	}
}