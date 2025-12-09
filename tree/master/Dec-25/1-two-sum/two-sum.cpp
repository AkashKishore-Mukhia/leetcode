class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        vector<int> v;
        
        int n= nums.size();
        for(int i=0; i<n; i++){
            int cur = target - nums[i];
            if(mp.count(cur)) {
                v.push_back(mp[cur]);
                v.push_back(i);
            }
            else mp[nums[i]] = i;
        }
        
        return v;
    }
};