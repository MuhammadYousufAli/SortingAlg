#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n)
{
    for(int i = 0; i<n -1 ; i++)
    {
        int iMin = i;

        for(int  j = i + 1 ;j < n ; j++)
        {
            if(arr[iMin]>arr[j])
            {
                iMin = j;
            }
        }

       // int tmp = arr[i];
        //arr[i] = arr[iMin];
        //arr[iMin] = tmp;
       swap(arr[i], arr[iMin]);

      // arr[i] =  arr[i] ^  arr[iMin];
       //arr[iMin] = arr[i] ^  arr[iMin]; ///Problem korche
       //arr[i] =  arr[i] ^  arr[iMin];
    }

    cout<<"\nAfter Sorting Below Ascending-Order:"<<endl;

    for(int  i = 0; i <n; i++)
    {
        cout<<"Index No : "<<i<<" & Element = "<<arr[i]<<endl;
    }
}

int main()
{

    int n, a;
    cout<<"Enter Nth Value Here : ";
    cin>>a;
    n = fabs(a);
    int arr[n];
    cout<<"Enter Elements Below :"<<endl;
    for(int i = 0; i<n; i++)
    {
        cout<<"Index No : "<<i<<" & Element = ";
        cin>>arr[i];
    }

    selectionSort(arr, n);

    cout<<"\n\nAfter Sorting Below Descending-Order:"<<endl;

    for(int  i = n -1; i >=0; i--)
    {
        cout<<arr[i]<<"  ";
    }

    cout<<endl;

    return 0;
}
