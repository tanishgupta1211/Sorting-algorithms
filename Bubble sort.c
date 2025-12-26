#include<stdio.h>
int main(){
    int temp;
    int a[6]={1,4,6,3,5,2};
    int n = 6;

    //bubble short
    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j <= n-2; j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    for(int k = 0; k < n; k++)
        printf("%d  ",a[k]);

    //optimized bubble short
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n-1-i; j++)
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
    }

    for(int k = 0; k < n; k++)
        printf("%d  ",a[k]);

    for(int i = 0; i < n; i++)  //------->n-1
    {
        bool flag = true;
        for(int j = 0; j < n-1-i; j++)  //------->n-1-i
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                flag = false;
            }
        }
        if(flag == true) break;
    }
    for(int k = 0; k < n; k++)
        printf("%d  ",a[k]);


    return 0;
}
