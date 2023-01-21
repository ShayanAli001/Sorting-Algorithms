#include<iostream>
using namespace std;

void bubblesort(int Arr[],int n)
{
	for(int i=0; i<n-1; i++){
	for(int a=0; a<n-1-i; a++)
	{
	if(Arr[a] > Arr[a+1])
	{
		swap(Arr[a],Arr[a+1]);
	}
}
}
}



int main()
{
	int foo[5]= {2,1,6,3,5};
	int n=5;
	
	bubblesort(foo,5);
	for(int i=0; i<n; i++)
	{
		cout<< foo[i]<<endl;
	}
}