// https://practice.geeksforgeeks.org/problems/84963d7b5b84aa24f7807d86e672d0f97f41a4b5/1

// TC - O(1), SC - O(1)
class Solution
{
public:
    int solve(int a, int b, int c)
    {
        // code here
        vector<int> nums = {a, b, c};
        sort(nums.begin(), nums.end());
        if (nums[2] <= ((nums[0] + nums[1] + 1) * 2))
        {
            return a + b + c;
        }
        return -1;
    }
};