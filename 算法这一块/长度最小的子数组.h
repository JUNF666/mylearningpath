#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left=0;
        long long sum=0;
        int sig=INT_MAX;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            while(sum>=target){                
                sig= min( sig , i-left+1 );
                sum-=nums[left];
                left++;              
            }
        }
        return sig== INT_MAX ? 0 : sig;

    }
};