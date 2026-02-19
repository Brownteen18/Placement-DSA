/* Brute force for Two sum problem(1,Leetcode)
TC:O(n^2)
SC:O(1)
How it works:
Pick one element i
Check all elements after it j
If nums[i] + nums[j] == target
→ return indices
It checks every possible pair.*/

#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        
        return {}; // if no solution found
    }
};

