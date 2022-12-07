#include <iostream>
#include <algorithm>
using namespace std;

void sort012(int *arr, int n)
{
    //Write your code here
    int count0=0, count1=0, count2=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] == 0)
        {
           count0++;
        }
        
        if(arr[i]==1)
        {
            count1++;
        }

        if(arr[i]==2)
        {
            count2++;
        }    
    }
    
    int n0 = count0;
    int n1 = n0 + count1;
    int n2 = n1 + count2;

    
    for(int j=0; j<n0; j++)
    {
        arr[j] = 0;
    }
    for(int j=n0; j<n1; j++)
    {
        arr[j] = 1;
    }
    for(int j=n1; j<n2; j++) 
    {
        arr[j] = 2;
    }
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int size;

		cin >> size;
		int *arr = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
		}

		sort012(arr, size);

		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}

		delete[] arr;
		cout << endl;
	}

	return 0;
}