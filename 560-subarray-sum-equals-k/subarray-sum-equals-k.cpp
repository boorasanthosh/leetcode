class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum=0;
        int count=0;
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum==k) count++;
            count+=m[sum-k];
            m[sum]+=1;
        }
        return count;
    }
};