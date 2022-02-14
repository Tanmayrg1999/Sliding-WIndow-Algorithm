#include<iostream> 
using namespace std;

int main()
{
	int n;
	cout<<"Enter the length of an array:";
	cin>>n;
	int arr[n];
	cout<<"Enter the array Elements:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	for(int k=1;k<=n;k++)    //for window size
	{
			cout<<"You subarrays of size "<<k<<endl;
		for(int i=0;i<n-k+1;i++)   
		{
			for(int j=i;j<i+k;j++)   
			{
				cout<<arr[j];
			}
		cout<<endl;
	}
	}
	
}
