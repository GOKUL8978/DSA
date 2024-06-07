
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={1,5,2,9,3,10};
    int i,j;
    bool swapped;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++){
        swapped = false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(swapped==false){
            break;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<< " ";
    }
}
