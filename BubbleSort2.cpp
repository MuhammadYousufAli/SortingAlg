#include <iostream>
#include <math.h>
using namespace std;
int i,j;

void bubbleSort1(int n, double arr[])
{
    for(i = 0; i<n-1;++i)
    {
        for(j = i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                arr[i] = arr[i] + arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] = arr[i] - arr[j];
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

