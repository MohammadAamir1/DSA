#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,1,2,2,2,3,3};
    int n = 7;
    int i = 0;
    for(int j = 1; j<n; j++){
        arr[i+1] = arr[j];
        i++;
    }
    return i+1;
}