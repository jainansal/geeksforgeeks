// https://practice.geeksforgeeks.org/problems/2a1c11024ceae36363fc405e07f2fa3e2f896ef0/1

// TC - O(nlogn), SC - O(1)
class Solution
{
public:
    int dominantPairs(int n, vector<int> &arr)
    {
        // Code here
        sort(arr.rbegin(), arr.rbegin() + n / 2);
        sort(arr.rbegin() + n / 2, arr.rend());
        int i = 0, j = n / 2, ans = 0;
        while (i < (n / 2) && j < n)
        {
            if (arr[i] >= 5 * arr[j])
            {
                ans += n - j;
                i++;
            }
            else
            {
                j++;
            }
        }
        return ans;
    }
};