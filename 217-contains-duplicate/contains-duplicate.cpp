class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int>a;
        for(int i=0;i<n;i++){
           if(a.count(nums[i])){
             return true;
           }
        a.insert(nums[i]);
        }
        return false;
        
    }
};