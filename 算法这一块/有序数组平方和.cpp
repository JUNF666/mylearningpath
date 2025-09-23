#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left = 0, right = nums.size()-1;
        vector <int> New(right+1);
        for(int i=nums.size()-1; i>=0; i--){
            if(nums[left]*nums[left] >= nums[right]*nums[right]){
                New[i] = nums[left]*nums[left];
                left++;
            }
            else{
                New[i] = nums[right]*nums[right];
                right--;
            }
        }
        return New;
    }
};

int main() {
    #ifdef _WIN32
        system("chcp 65001");
    #endif
    Solution solution;
    
    // 测试用例1
    vector<int> nums1 = {-4, -1, 0, 3, 10};
    vector<int> result1 = solution.sortedSquares(nums1);
    cout << "测试用例1的结果: ";
    for(int num : result1) {
        cout << num << " ";
    }
    cout << endl;
    
    // 测试用例2
    vector<int> nums2 = {-7, -3, 2, 3, 11};
    vector<int> result2 = solution.sortedSquares(nums2);
    cout << "测试用例2的结果: ";
    for(int num : result2) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
