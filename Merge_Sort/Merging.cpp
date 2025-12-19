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
        C[k]=min(A[i], B[j]);
        k++;
        if(A[i]==min(A[i], B[j])) i++;
        else j++;
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
