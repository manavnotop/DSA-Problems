class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxPro = 0;
        int lowest = INT_MAX;
        for(int i = 0; i < prices.size(); i++){
            lowest = min(lowest, prices[i]);
            maxPro = max(maxPro, prices[i] - lowest);
        }
        return maxPro;
    }
};