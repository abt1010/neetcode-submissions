class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map <int,int> map;
      for (int i = 0 ; i < nums.size(); ++i) {
        map[nums[i]] = i;
      }

       for(int i =0 ; i < nums.size(); ++i) {
        int check = target - nums[i];
            if(map.count(check) && map[check] != i) return{i, map[check]};
        
       }
    }
};
