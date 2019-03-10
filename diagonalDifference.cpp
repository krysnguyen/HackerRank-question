#include <bits/stdc++.h>

using namespace std;

// Complete the diagonalDifference function below.
int diagonalDifference(vector<vector<int>> arr) {
    int sum1 = 0; 
    int sum2 = 0;
    int n = arr.size();
    //int n = sizeof(arr)/ sizeof(arr[0]); 
    int n1 = n;
    for (int i= 0; i < n;i++)
    {
        sum1 = sum1 + arr[i][i];
        sum2 = sum2 + arr[i][n1-1];
        n1--;
    }
    int sum = sum1 - sum2;
    if (sum < 0)
    {
        sum = -sum;
    }
    return sum;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<vector<int>> arr(n);
    for (int i = 0; i < n; i++) {
        arr[i].resize(n);

        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = diagonalDifference(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
