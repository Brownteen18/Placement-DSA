/*Time Complexity: O(n)
Space Complexity: O(n) 
How It Works?
For each number:
Calculate target - current number
Check if that value already exists in map
If yes → return both indices
If not → store current number in map*/

#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp; // value -> index
        
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            
            // If complement already exists, we found the pair
            if (mp.find(complement) != mp.end()) {
                return {mp[complement], i};
            }
            
            // Store current number with its index
            mp[nums[i]] = i;
        }
        
        return {}; // if no solution found
    }
};
