class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto i:nums)
            {
                mp[i]++;   
            }
        for(auto i:mp)
        {
            if(i.second == mp.size()-1)
            return i.first;
        }
        return -1;
    }
};
