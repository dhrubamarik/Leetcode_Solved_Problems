class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cur_arr = nums[0];
        int max_arr= nums[0];
        for(int i=1;i<nums.size();i++){
            cur_arr = max(nums[i] ,cur_arr + nums[i]);
            max_arr = max(max_arr,cur_arr);
        }
        return max_arr;
    }
};