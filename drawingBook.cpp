#include <bits/stdc++.h>
#include <stdio.h>      /* printf */
#include <math.h>
using namespace std;

/*
 * Complete the pageCount function below.
 */
int pageCount(int n, int p) { 
    if (p - 1 >= n - p) // turn from the right
    {
        if (n%2== 0)
        {
            return ceil((double)((n-p)/2.0)); 
        }
        else
        {
            return floor((double)((n-p)/2.0));   
        } 
    }
    else//turn from the left
    {
        double x = ceil((double)(p-1)/2.0);
        return (int)x;
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int p;
    cin >> p;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = pageCount(n, p);

    fout << result << "\n";

    fout.close();

    return 0;
}
