#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int t;
    long n, n3, n5, n15, ans;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        cin >> n;
        n3 = (n-1)/3;
        n3 = 3*(n3)*(n3+1);
        
        n5 = (n-1)/5;
        n5 = 5*(n5)*(n5+1);
        
        n15 = (n-1)/15;
        n15 = 15*(n15)*(n15+1);
        
        ans = (n3 + n5 -n15)/2;
        
        cout << ans << endl;
    }
    return 0;
}
