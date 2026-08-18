class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int low=0,high=0,zeros=0,ans=0;
        for(int high=0;high<nums.size();high++){
            if(nums[high]==0){
                zeros++;

            }
            while(zeros>k){
                if(nums[low]==0){
                zeros--;}
                low++;
               
    }
     ans = max(ans, high - low + 1);
            }
            return ans;
            


        }

    
};