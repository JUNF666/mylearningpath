#include <bits/stdc++.h>
using namespace std;
int main(){
    int nums[10];
    for(int i=0; i<10; i++){
        cin>>nums[i];
    }
    int target;
    cin >> target;
    int left = 0,right = 9;int mid;
    while (left <= right) {
            int mid = left + (right - left) / 2;  // 避免直接相加可能导致的溢出
            
            if (nums[mid] == target) {
                cout<<mid;return 0;  // 找到目标值，返回索引
            } else if (nums[mid] > target) {
                right = mid - 1;  // 目标值在左侧，调整右边界
            } else {
                left = mid + 1;   // 目标值在右侧，调整左边界
            }
        }
        
        cout<<-1;  // 未找到目标值
}