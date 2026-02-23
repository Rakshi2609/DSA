class Solution {
    public int[] twoSum(int[] nums, int target) {
        int i=0;
        while(i<nums.length-1){
            int j = i+1;
            while(j<nums.length){
            int t = nums[i] + nums[j];
            if(t == target){
                return new int[] {i,j};
            }
            j++;
        }
        i++;
        }
                return new int[] {-1,-1};
    }
}