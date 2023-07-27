class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int prefixSum = 0, count = 0;
        map<int, int> mpp;
        mpp[0] = 1;
        for(int i = 0; i < nums.size(); i++){
            prefixSum += nums[i];
            int remaining = prefixSum - k;
            count += mpp[remaining];
            mpp[prefixSum]++;
        }
        return count;
    }
};