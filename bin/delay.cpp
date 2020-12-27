/*
 * NOTE: it is recommended to use this even if you don't
 * understand the following code.
 */

#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

// input data
int N;
vector<int> S, D, O;

int main() {
//  uncomment the following lines if you want to read/write from files
//  ifstream cin("input1.txt");
//  ofstream cout("output.txt");

    cin >> N;
    S.resize(N);
    D.resize(N);
    O.resize(N);
    for (int i=0; i<N; i++)
        cin >> S[i];
    for (int i=0; i<N; i++)
        cin >> D[i];

    // insert your code here
    int currentNI = 0;
    int x;
    for (int t = 0; t < N; t++)
    {
        if(t - D[t] < 0)
        {
            x = 0;
        }
        if(t - D[t] < currentNI)
        {
            x = currentNI;
        }
        else
        {
            x = t - D[t];
        }
        if(currentNI != x)
        {
            currentNI = x;
            O[t] = S[x];
        }
        else
        {
            O[t] = S[currentNI];
        }
    }


    // print the result
    for (int i=0; i<N; i++)
        cout << O[i] << " ";
    cout << endl;
    return 0;
}
