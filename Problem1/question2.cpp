//Rotate Array K positions 

//brute FOrce Aproach 
#include<bits/stdc++.h>
using namespace std;

void solve( vector<int>&arr, int k){
    int n = arr.size();
//Handling edge case if k == 0 no need to rotate array 
    if(k==0) return ;
    k = k%n;
    //Justreversing the array 
//step 1 
    reverse(arr.begin(),arr.begin()+k);
//step 2 
     reverse(arr.begin()+k, arr.end());
}

int main(){
   int k;
   cin>>k;
    vector<int>arr= {1,2,3,4,5};
    
    solve(arr,k);

    for(auto it: arr){
        cout<<it<<" ";
    }
}
