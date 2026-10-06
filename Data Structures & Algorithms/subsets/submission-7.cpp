class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
       vector <vector<int>> res;
       vector<int> subsets;
       dfs(nums, 0, subsets, res);
       return res;
    }

private:

    void dfs(const vector <int>& nums, int i, vector <int>& subsets, vector<vector<int>>& res) {
        if ( i == nums.size()) {
            res.push_back(subsets);
            return;
        }
        subsets.push_back(nums[i]);
        dfs(nums, i + 1, subsets, res);
        subsets.pop_back();
        dfs(nums, i + 1, subsets, res);
    }

};
