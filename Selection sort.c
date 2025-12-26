#include<stdio.h>
#include<limits.h>

int main()
{
    int arr[5] = {5,8,6,9,2};
    int n = 5;
    //selection sort
    for(int i = 0; i < n-1; i++)
    {
        int min = INT_MAX;
        int minidx = -1;
        for(int j = i; j <= n-1; j++)
        {
            if(min > arr[j])
            {
                min = arr[j];
                minidx = j;
            }
        }
        int temp = arr[minidx];
        arr[minidx] = arr[i];
        arr[i] = temp;
    }

    for(int k = 0; k < 5; k++)
        printf("%d  ",arr[k]);
    /*
     time complexity
     best case = n*n;
     avg case = n*n;
     worst case = n*n;
     */
    return  0;
}
