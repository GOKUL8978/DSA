int cnt =0;
void merge(vector <int>&arr ,int low,int mid,int high){
       vector <int> temp;
       int left = low;
       int right = mid+1;
       while(left <= mid && right <=high){
           if(arr[left]<=arr[right]){
               temp.push_back(arr[left]);
               left++;
           }
           else{
               temp.push_back(arr[right]);
               cnt += (mid-left+1);
               right++;
           }
       }
       while(left <=mid){
           temp.push_back(arr[left]);
           left++;
       }
       while(right<=high){
           temp.push_back(arr[right]);
           right++;
       }
       for(int i=low;i<=high;i++){
           arr[i] = temp[i-low];
       }
}
void mS(vector <int> &arr,int low,int high){
    if(low==high) return ;
    int mid = (low+high)/2;
    mS(arr,low,mid);
    mS(arr,mid+1,high);
    merge(arr,low,mid,high);
}

int numberOfInversions(vector<int>&a, int n) {
    // Write your code here.
   
    mS(a,0,n-1);
    return cnt;
}
