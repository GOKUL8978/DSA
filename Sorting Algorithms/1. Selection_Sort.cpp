
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={1,5,2,9,3,10};
    int i,j,index;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++){
        int index = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[index]){
                index=j;
            }
        }
        if(index!=i){
            swap(arr[index],arr[i]);
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<< " ";
    }
}
