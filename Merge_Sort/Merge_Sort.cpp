#include<bits/stdc++.h>
using namespace std;

vector<int> A, B;

void merg(int l, int mid, int h){
    int i=l, j=mid+1, k=l;


    while(i<=mid and j<=h){
        if(A[i]<A[j]){
            B[k]=A[i];
            k++;
            i++;
        }
        else {
            B[k]=A[j];
            k++;
            j++;
        }
    }

    while(i<=mid){
        B[k]=A[i];
        i++;
        k++;
    }
    while(j<=h){
        B[k]=A[j];
        k++;
        j++;
    }

    for (int i=l; i<k; i++) A[i]=B[i];
}

void mergeSort(int l, int h){
    if(l<h){
        int mid=(l+h)/2;
        mergeSort(l, mid);
        mergeSort(mid+1, h);
        merg(l, mid, h);
    }
}

void print(vector<int> A){
    for (int i=0; i<A.size(); i++)cout<<A[i]<<" ";
}
int main(){
    int n;
    cout<<"Enter the number of element: ";
    cin>>n;
    A.resize(n);
    B.resize(n);

    cout<<"Enter the elements: ";
    for (int i=0; i<n; i++) cin>>A[i];

    cout<<endl<<"Before sort: ";
    print(A);

    mergeSort(0, n-1);

    cout<<endl<<"After sort: ";
    print(A);
    cout<<endl;

    return 0;
}
