#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

int main()
{
    int num,arr[1000],i;
    cin>>num;
    for(i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    for(i=num-1;i>=0;i--)
    {
        cout<<arr[i];
        cout<<" ";
    }
    return 0;
}

