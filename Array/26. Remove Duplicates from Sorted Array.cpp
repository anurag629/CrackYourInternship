class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        for(int i=0;i<nums.size();i++){
            int temp = nums[i];
            int j = i + 1;
            while(j<nums.size()){
                if(temp == nums[j]){
                    count = count +1;
                    nums.erase(nums.begin() + j);
                }
                else{
                    j = j + 1;
                }
            }
        }
        return n - count;
    }
};