#include <iostream>
#include <math.h>
using namespace std;
int i,j;

void bubbleSort1(int n, double arr[])
{
    for(i = 0; i<n-1;++i)
    {
        for(j = 0;j<n-(i+1);j++)
        {
            if(arr[j]>arr[j+1])
            {
                arr[j] = arr[j] + arr[j+1];
                arr[j+1] = arr[j] - arr[j+1];
                arr[j] = arr[j] - arr[j+1];
            }
        }
    }
}
int main()
{
    int n,a;
    cout<<"Enter Size of Array : ";
    cin>>a;
    n = fabs(a);
    double arr[n];
    for(i = 0; i < n;i++)
    {
        cout<<"Index : "<<i<<" & Item = ";
        cin>>arr[i];
    }
    bubbleSort1(n,arr);

    cout<<"\nAfter Sorting Using Bubble Sort Part 1..."<<endl;
    for(i = 0; i < n ; i++)
    {
        cout<<"Index : "<<i<<" & Item "<<arr[i]<<endl;
    }

}
