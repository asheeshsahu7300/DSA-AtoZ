class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>comps;

        for(int i=0;i<nums.size();i++){
            int comp=target-nums[i];
            if(comps.find(comp)!=comps.end()){
                return {comps[comp],i};
            }
            comps[nums[i]]=i;
        }
        return {};
    }
};