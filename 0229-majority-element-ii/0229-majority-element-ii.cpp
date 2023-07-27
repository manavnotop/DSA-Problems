class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        // vector<int> ans;
        // map<int, int> mpp;
        // for(int i = 0; i < nums.size(); i++){
        //     mpp[nums[i]]++;
        //     if(mpp[nums[i]] == nums.size()/3 + 1){
        //         ans.push_back(nums[i]);
        //     }
        // }

        // for( auto i: mpp){
        //     if(i.second > (nums.size() / 3)){
        //         ans.push_back(i.first);
        //     }
        // }
        //return ans;


        int count1 = 0, count2 = 0;
        int element1 = INT_MIN, element2 = INT_MIN;

        for(int i = 0; i < nums.size(); i++){
            if(count1 == 0 && nums[i] != element2){
                element1 = nums[i];
                count1++;
            }
            else if(count2 == 0 && nums[i] != element1){
                element2 = nums[i];
                count2++;
            }
            else if(nums[i] == element1){
                count1++;
            }
            else if(nums[i] == element2){
                count2++;
            }
            else{
                count1--;
                count2--;
            }
        }

        vector<int> ans;
        count1 = 0, count2 = 0;

        int min = nums.size() / 3 + 1;
        for(int i = 0; i < nums.size(); i++){
            if(element1 == nums[i]) count1++;
            if(element2 == nums[i]) count2++;
        }

        if(count1 >= min) ans.push_back(element1);
        if(count2 >= min) ans.push_back(element2);

        sort(ans.begin(), ans.end());
        return ans;
    }
};