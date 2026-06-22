#include<iostream>
#include<limits.h>
using namespace std;
int secondSmallest(int arr[], int n){
    int smallest = arr[0];
    int ssmallest = INT_MAX;
    for(int i=0; i<n; i++){
        if(arr[i] < smallest){
            ssmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] != smallest && arr[i] < ssmallest){
            ssmallest = arr[i];
        }
    }
    return ssmallest;
}
int main(){
    int arr[] = {1,1,4,7,3,5};
    int n = 6;
    int ssmallest = secondSmallest(arr, n);
    cout << "Second smallest number is : " << ssmallest << endl;
}