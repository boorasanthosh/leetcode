class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        long long sum1 = (n*(n+1))/2;
        long long sum2 = 0;
        for(int i=0 ;i<n;i++){
            sum2 += nums[i];
        }
        return abs(sum2 - sum1);
    }
};