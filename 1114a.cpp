#include <bits/stdc++.h>
#define FOR(i, n) for(int i=0; i<n; ++i)
#define ALL(v) v.begin(),v.end()
#define D(x) cout << (x) << endl;
#define Dn(x) cout << #x <<" : " << (x) << endl;
using LL = int64_t;
using ULL = uint64_t;
using namespace std;
typedef vector<LL> VI; typedef vector<VI> VVI;

int main(){
    ios::sync_with_stdio(false);

    LL x, y, z;
    LL a, b, c;
    cin >> x >> y >> z;
    cin >> a >> b >> c;

    // is A satified ?
    if (a < x){
        cout << "NO\n";
        return 0;
    }
    // is B satisfied ?
    if (a + b - x < y){
        cout << "NO\n";
        return 0;
    }
    // if C statisfied ?
    if (a+b+c-x-y < z){
        cout << "NO\n";
    }else{
        cout << "YES\n";
    }

    return 0;
}