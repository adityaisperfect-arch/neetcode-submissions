class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int l=0;
        int r=1;
        int res=0;
        int ans=0;
        while(r<n){
            if(prices[l]<prices[r])
            {
            res=prices[r]-prices[l];
            ans= max(ans,res);
            }
            else{
                l=r;
            }
            r++;
        }
        return ans;
    }
};
