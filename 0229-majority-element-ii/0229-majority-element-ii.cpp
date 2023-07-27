class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        map<int, int> mpp;
        for(int i = 0; i < nums.size(); i++){
            mpp[nums[i]]++;
            if(mpp[nums[i]] == nums.size()/3 + 1){
                ans.push_back(nums[i]);
            }
        }

        // for( auto i: mpp){
        //     if(i.second > (nums.size() / 3)){
        //         ans.push_back(i.first);
        //     }
        // }
        return ans;
    }
};