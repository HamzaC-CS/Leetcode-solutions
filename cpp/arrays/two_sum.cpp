class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashmap;
        for(int i = 0; nums.size(); ++i)
        {
            int complement = target - nums[i];
            if(hashmap.find(complement) != hashmap.end())
            {
                return {i, hashmap[complement]};
            }
            hashmap[nums[i]] = i;
        }

        return {};
     }
};
