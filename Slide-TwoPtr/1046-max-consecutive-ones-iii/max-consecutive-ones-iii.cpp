class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int left = 0;
        int maxLen = 0;
        int zeroCount = 0;


        for(int right = 0; right < n; right++){
            if(nums[right]==0){
                zeroCount++;
            }

            if(zeroCount > k){
                if(nums[left]==0){
                    zeroCount--;
                }  
                left++;
            }
            if(zeroCount<=k){
                maxLen = max(maxLen, right - left +1);
            }
            
        }
        return maxLen;
    }
};