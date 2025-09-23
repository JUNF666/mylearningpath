#include <bits/stdc++.h>
using namespace std;
int main(){
    int target,n;
    cin>>target>>n;
    int nums[n];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int slow=0;
    for(int fast=0;fast<n;++fast){
        if(nums[fast]!=target){nums[slow++]=nums[fast];}
    }
    cout<< slow<<endl;
    for(int i;i<slow;i++){
        cout<<nums[i]<<endl;
    }
}