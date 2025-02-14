#include<bits/stdc++.h>

using namespace std;

int a[100];

void merge(int lf1,int rt1,int lf2,int rt2){
    int i = lf1 , j = lf2;
    int n = rt1-lf1+1 , m = rt2-lf2+1;
    int kk = 0;

    int arr3[m+n];

    while(i<rt1+1&&j<rt2+1){
        if(a[i]<a[j]){
            arr3[kk]=a[i];
            kk++;
            i++;
        }
        else{
            arr3[kk]=a[j];
            kk++;
            j++;
        }
    }

    while(i<rt1+1){
        arr3[kk]=a[i];
        kk++; i++;
    }

    while(j<rt2+1){
        arr3[kk]=a[j];
        kk++; j++;
    }

    for(int i=lf1;i<=rt2;i++){
        a[i] = arr3[i-lf1];  
    }

}

void mergesort(int left,int right){
    if(left>=right){
        return ;
    }
    int mid=(left+right)/2;
    mergesort(left,mid);
    mergesort(mid+1,right);
    merge(left,mid,mid+1,right);
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    //  code starts
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];               
    }
    mergesort(0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";               
    }
}
        