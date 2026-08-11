class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int currentmax = nums[0];
        int currentmin = nums[0];
        int maxi = nums[0];

        for (int i=1;i<nums.size();i++) {
            int x =nums[i];

            int tempmax=max({x,currentmax*x,currentmin*x});
            int tempmin=min({x,currentmax*x,currentmin*x});

            currentmax=tempmax;
            currentmin=tempmin;

            maxi=max(maxi,currentmax);
        }

        return maxi;
    }
};