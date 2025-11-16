#include <iostream>
using namespace std;
// O(n) in best case and O(n^2) in worst and average case
void insertion_sort(int arr[],int n){
    for(int i = 1 ; i < n ; i++){
        int curr = arr[i];
        int prev = i-1;
        while(prev>=0 && arr[prev]>curr){
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev+1]= curr;
    }
}
int main(){
    int arr[]={2,3,4,1,5};
    int n= sizeof(arr)/sizeof(arr[0]);
    insertion_sort(arr,n);
    for(int x:arr){
        cout<<x<<" ";
    }
    return 0;

}