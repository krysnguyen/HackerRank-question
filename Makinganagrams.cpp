#include <bits/stdc++.h>

using namespace std;
const int chars = 26;
// Complete the makeAnagram function below.
int makeAnagram(string a, string b) {
    int ans;
    int a_size = a.length();
    int b_size = b.length();
    char a_array [a_size + 1];
    char b_array [b_size + 1];
    strcpy(a_array, a.c_str());
    strcpy(b_array, b.c_str());
    int count[chars] = {0};
    for(int i = 0; i < a_size; i++)
    {
        count[a_array[i]-'a']++;
    }
    for(int j = 0; j< b_size; j++)
    {
        count[b_array[j]-'a']--;
    }
    for(int k = 0; k< chars; k++)
    {
        ans  = abs(count[k]) + ans;         
    }
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string a;
    getline(cin, a);

    string b;
    getline(cin, b);

    int res = makeAnagram(a, b);

    fout << res << "\n";

    fout.close();

    return 0;
}
