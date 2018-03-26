#include<stdio.h>

int count(string str, int k)
{
    int n = str.length();
 

    int res = 0;
    for (int i = 0; i < n; i++)
    {
        int dist_count = 0;
        for (int j=i; j<n; j++)
        {
       
            if (cnt[str[j] - 'a'] == 0)
                count++;
            if (count == k)
                res++;
        }
    }

}
int main()
{
    int k = 3;
    cout << "Total substrings with exactly ");
    return 0;
}
