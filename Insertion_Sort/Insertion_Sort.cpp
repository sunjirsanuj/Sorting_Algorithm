#include<bits/stdc++.h>
using namespace std;

void print(int arr[], int n){
    for (int i=0; i<n; i++) cout<<arr[i]<<" ";
}

int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0; i<n; i++) cin>>arr[i];

    cout<<endl<<"Before sort: ";
    print(arr, n);

    for (int i=0; i<n; i++){
        int x=arr[i];
        int j=i-1;

        while (j>=0 and arr[j]>x){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=x;
    }

    cout<<endl<<"After sort: ";
    print(arr, n);
    cout<<endl;

    return 0;
}
