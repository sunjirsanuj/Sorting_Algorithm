#include<bits/stdc++.h>
using namespace std;

void print(int arr[], int n){
    for (int i=0; i<n; i++) cout<<arr[i]<<" ";
}

int main(){
    int n;
    cout<<"Enter the number of element: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements: ";
    for (int i=0; i<n; i++) cin>>arr[i];

    cout<<endl<<"Before sort: ";
    print(arr, n);

    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            if(arr[j]<arr[i]) swap(arr[i], arr[j]);
        }
    }

    cout<<endl<<"After sort: ";
    print(arr, n);
    cout<<endl;

    return 0;
}
