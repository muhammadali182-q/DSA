#include <iostream>
using namespace std;
// O(n^2) in every case
void selection_sort(int arr[],int n){
    for(int i = 0; i<n-1 ; i++){
        int smallestidx = i;   // Startig part of unsorted array
        for(int j = i+1; j<n;j++){
            if(arr[j]<arr[smallestidx]){
                smallestidx = j;
            }
        }
        swap(arr[i],arr[smallestidx]);
    }

}
int main(){
    int arr[]={2,3,4,1,5};
    int n= sizeof(arr)/sizeof(arr[0]);
    selection_sort(arr,n);
    for(int x:arr){
        cout<<x<<" ";
    }
    return 0;

}