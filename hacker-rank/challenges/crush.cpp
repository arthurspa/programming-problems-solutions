#include <iostream>
#include <stdio.h> // stdin
#include <cstdlib> // getenv
#include <algorithm>
#include <vector>
#include <map>
#include <cmath>
#include <string>
#include <ctime>
#include <deque>

using namespace std;

#define FOR(i, a, b) for (int i = (a); i <= (b); ++i)
#define FORR(i, a, b) for (int i = (a); i >= (b); --i)
#define REP(i, n) FOR(i, 0, (n)-1)
#define REP1(i, n) FOR(i, 1, (n))
#define mp make_pair
#define pb push_back
#define st first
#define nd second
#define sz(w) (int)w.size()
typedef vector<int> vi;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
const int inf = 1e9 + 5;

void solve()
{
    // My solution goes here
    int n, m;

    cin >> n >> m;

    vector<ll> v(n + 1);

    int a, b, k;
    REP(i, m)
    {
        cin >> a >> b >> k;

        v[a] += k;
        if (b + 1 <= n)
            v[b + 1] -= k;
    }

    ll max = 0, sum = 0;
    FOR(i, 1, n)
    {
        sum += v[i];
        if (sum > max)
            max = sum;
    }

    cout << max;
}

int main()
{

    if (getenv("IS_DEBUG"))
    {
        string fullFileName(__FILE__);
        string fileNameWithoutExtension = fullFileName.substr(0, fullFileName.rfind('.'));
        string inputFileName = fileNameWithoutExtension.append(".input");

        freopen(inputFileName.c_str(), "r", stdin);
    }

    int start = clock();
    solve();
    int end = clock();

    // Workaround for issue
    // https://github.com/Microsoft/vscode-cpptools/issues/466
    if (getenv("IS_DEBUG"))
    {
        cout << endl
             << "[Finished in " << end - start << " ms]" << endl;
    }

    return 0;
}