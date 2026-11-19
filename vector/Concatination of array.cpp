class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n =  nums.size();
        vector<int> ans(2*n);
        int i=0;
        while(i<n){
            ans[i] = nums[i];
            i++;
        }
        int j=0;
        while(j<n){
            ans[i] =nums[j];
            i++;j++;
        }
        return ans;
    }
};