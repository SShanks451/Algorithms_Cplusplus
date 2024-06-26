// question link :- https://www.geeksforgeeks.org/0-1-knapsack-problem-dp-10/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int val[] = {60, 100, 120};
    int wt[] = {10, 20, 30};
    const int W = 50;
    const int n = sizeof(val) / sizeof(val[0]);

    int dp[n + 1][W + 1];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= W; j++)
        {
            if (i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= W; j++)
        {
            if (wt[i - 1] <= j)
            {
                dp[i][j] = max(val[i - 1] + dp[i - 1][j - wt[i - 1]], dp[i - 1][j]);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    cout << dp[n][W];

    return 0;
}