#include<iostream>
using namespace std;
int secondLargest(int arr[], int n){
    int largest = arr[0];
    int slargest = 1;
    for(int i=0; i<n; i++){
        if(arr[i] > largest) {
            slargest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > slargest){
            slargest = arr[i];
        }
    }
    return slargest;
}
int main(){
    int arr[] = {1,2,4,7,7,5};
    int n  = 6;
    int slargest = secondLargest( arr, n);
    cout << "second largest is : " << slargest << endl;
}