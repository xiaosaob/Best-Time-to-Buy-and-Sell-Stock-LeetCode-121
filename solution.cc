// Say you have an array for which the ith element is the price of a given stock on day i.

// If you were only permitted to complete at most one transaction (ie, buy one and sell one share of the stock), design an algorithm to find the maximum profit.

class Solution {
public:
    int maxProfit(vector<int> &prices) {
        if(!prices.size()) return 0;
        int maxP = 0;
        int lowest = prices[0];
        for(int i = 1; i < prices.size(); ++i)
            if(prices[i]-lowest > maxP)
                maxP = prices[i]-lowest;
            else if(prices[i] < lowest)
                lowest = prices[i];
        return maxP;
    }
    
};
