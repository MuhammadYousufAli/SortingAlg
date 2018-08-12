#include <bits/stdc++.h>
using namespace std;

void insertionSort(int nums[], int n)
{
    int i,j, item;

    for(i = 1;i < n ; i++)
    {
        item = nums[i];

        j = i - 1;
        while(j>=0 && nums[j] > item )
        {
            nums[j+1] = nums[j];
            j--;
        }
        nums[j+1] = item;
    }
}

int main(void)
{
    int n, i;
    cout<<"Enter Array Size Here : ";
    scanf("%d",&n);

    int nums[n];
    for(i = 0 ; i < n ; i++)
    {
        printf("Index : %d & Item = ", i);
        scanf("%d", &nums[i]);
    }


    insertionSort(nums, n);
    cout<<"\nAfter Sorting Below : "<<endl;
    for(i = 0 ; i < n ; i++)
    {
        printf("Index : %d & Item = %d\n", i, nums[i]);
    }
    return 0;
}
