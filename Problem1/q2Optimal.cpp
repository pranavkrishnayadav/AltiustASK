//Optimal Solution 
//Using Recusrion 

//Time COmplexity - O(n)+O(k)+O(n-k) => O(n)+O(n)=> O(2n)=> O(n)
//Space complexity - O(1)
#include<bits/stdc++.h>
using namespace std;
void reverse(vector<int>&arr, int start, int end){    
      while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
      }
}
void rotatearray(vector<int>&arr, int k){
    int n = arr.size();
    k = k%n;
    //step 1  Reverzsing the entire Array 
    reverse(arr,0,n-1);
    //step 2 Reverse first k elements
    reverse(arr,0,k-1);
    //step 3 Reversing the remaining K + 1 elements
}
int main(){
    int k;
    cin>>k;
    vector<int>arr={1,2,3,4,5};
    rotatearray(arr,k);
     for(auto it: arr){
        cout<<it<<" ";
     }

     return 0;
}