#include<bits/stdc++.h>
using namespace std;

//Brute Force Approach  iF ALL Elements are positive then max sum will be Sum of all numbers
//Space Compexity - O(n)
//Space Complexity - O(1)
int solve1(vector<int>&arr){
     int sum = INT_MIN;
     int n = arr.size();
     for(int i=0;i<n;i++){
          sum+=arr[i];
     }
     return sum;
}

//Using Kadane algorithm

//here we can Handle both postive and negative Value 
//If array contains Negative Values Brute Forche will Not work and we will not get Maxsum 
//Because will add up negative numebrs even


//time Complexity - O(n);
//Space complexity - O(1);
int solve2(vector<int>&arr){
    int sum =0;
    int maxsum = 0;
    int n = arr.size();
    int l = 0;   
     while(l<n){
        if(sum<0){ //which means that a because of adding neagtive numnber our sum became negatuve
            sum =0;
        }
        else if (sum>maxsum){
            maxsum =sum;
        }
    else{
           sum+=arr[l];
        }
         l++;
     }
     return maxsum;
}
int main(){

//case-1 All integers are positive
    vector<int>arr= {1,2,3,4,5};
     cout<<solve1(arr)<<endl;
     //maxsum = 15
   vector<int>arr2= {-1,3,5,-3,1};
     cout<<solve2(arr2)<<endl;

     //maxsum = 8

     return 0;
}