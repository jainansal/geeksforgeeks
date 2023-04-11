class Solution {
public:
    int solve(int a, int b, int c) {
        // code here
        vector<int> nums={a,b,c};
        sort(nums.begin(), nums.end());
        if(nums[2]<=((nums[0]+nums[1]+1)*2))
        {
            return a+b+c;
        }
        return -1;
    }
};