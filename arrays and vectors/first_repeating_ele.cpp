#include <bits/stdc++.h>

using namespace std;

int firstRepeated(int *arr, int n)
{
    // code here
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
        if (mp[arr[i]] > 1)
        {
            return i + 1;
        }
    }
    return -1;
}

int main()
{
}