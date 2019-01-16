#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,tem;
    int size_;
    cout<<"Enter the size of array: ";
    cin>>size_;
    int arr[size_];
    cout<<"Enter element for array: ";
    for(int i=0; i<size_; i++)
        scanf("%d",&arr[i]);
    for(k=0; k<size_; k++)
    {
    for(i=0; i<size_; i++)
    {
        if(arr[i]>arr[i+1])
        {
         tem=arr[i];
         arr[i]=arr[i+1];
         arr[i+1]=tem;
        }

    }
    }
    for(j=0;j<10;j++)
    {
        printf("%d\n",arr[j]);
    }
}
