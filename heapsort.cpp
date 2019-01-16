#include<bits/stdc++.h>
using namespace std;
int *numberArray;
int *harr;
int capacity;
int parent(int i) {
    return (i-1)/2;
}
int left(int i) {
    return (2*i + 1);
}
int right(int i) {
    return (2*i + 2);
}
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void MinHeapify(int i, int n)
{
    int l = left(i);
    int r = right(i);
    int smallest = i;
    if (l < n && harr[l] < harr[i])
        smallest = l;
    if (r < n && harr[r] < harr[smallest])
        smallest = r;
    if (smallest != i)
    {
        swap(&harr[i], &harr[smallest]);
        MinHeapify(smallest, n);
    }
}
void heapSort(int arr[], int n)
{
    for (int i = n/2 - 1; i >= 0; i--) {
        MinHeapify(i, n);
    }

    for (int i=n-1; i>=0; i--)
    {
        swap(arr[0], arr[i]);
        MinHeapify(0, i);
    }
}
int main()
{
    scanf("%d", &capacity);
    harr = new int[capacity];
    for (int i = 0; i < capacity; ++i) {
        scanf("%d", &harr[i]);
    }
    heapSort(harr, capacity);
    for (int i = 0; i < capacity; ++i ) {
        printf("%d ", harr[i]);
    }
    return 0;
}

