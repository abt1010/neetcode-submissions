class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        for(int i = 1; i < nums.size(); ++i) {
            for(int j = i-1; j >= 0; --j) {
                if(nums[j] == nums[i]) {
                    return true;
                }
            }
        }
        return false;
    }
};