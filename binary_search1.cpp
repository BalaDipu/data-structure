#include <bits/stdc++.h>
using namespace std;


int binary_search(int *array,int p,int q,int element)
{
	if(p>q)return -1;
	if(p==q)
	{
		if(array[p]==element)return p;
		return -1;
	}
	int m=(p+q)>>1;
	if(array[m]==element)return m;
	else if(array[m]>element)binary_search(array,p,m-1,element);
	else binary_search(array,m+1,q,element);
}

int main()
{
	int array[]={1,3,5,7,9},i;
	int t=sizeof(array)/sizeof(array[0]);
	int value=binary_search(array,0,t-1,7);
	printf("%d\n", value);
}