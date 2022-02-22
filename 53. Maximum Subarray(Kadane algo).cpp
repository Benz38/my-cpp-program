class Solution
{
public:
    int maxSubArray(vector<int> &arr)
    {

        // int n=arr.size();
        auto maxsum = INT_MIN, sum = 0;

        for (auto n : arr)
        {
            sum = max(n, sum + n);
            maxsum = max(maxsum, sum);
        }
        return maxsum;
    }
};