#include<bits/stdc++.h>
using namespace std;

void print(int arr[], int s){
    for (int i=0; i<s; i++) cout<<arr[i]<<" ";
}

int main(){
    int m, n;
    cout<<"Enter the number of element for first array: ";
    cin>>m;
    int A[m];
    cout<<"Enter first array's elements(sorted order): ";
    for (int i=0; i<m; i++) cin>>A[i];
    cout<<endl<<"Enter the number of elemnt for second array: ";
    cin>>n;
    int B[n];
    cout<<"Enter second array's elements(sorted order): ";
    for (int i=0; i<n; i++) cin>>B[i];

    int C[m+n];

    int i=0, j=0, k=0;
    while(i<m and j<n){
        if(A[i]<B[j]){
            C[k]=A[i];
            i++;
            k++;
        }
        else {
            C[k]=B[j];
            j++;
            k++;
        }
    }

    while(i<m) {
        C[k]=A[i];
        k++;
        i++;
    }
    while(j<n){
        C[k]=B[j];
        j++;
        k++;
    }

    cout<<endl<<"The final array: ";
    print(C, m+n);
    cout<<endl;

    return 0;
}
