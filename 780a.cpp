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
    LL n; 
    cin >> n;
    VI tab_socks(n, 0);
    LL current_nb = 0;
    LL max_socks = 0;
    FOR(i, 2*n){
        LL sock;
        cin >> sock;
        sock--;
        if(tab_socks[sock] == 0){
            tab_socks[sock] = 1;
            current_nb ++;
            max_socks = max(max_socks, current_nb);
        }else{
            tab_socks[sock] --;
            current_nb --;
        }
    }
    cout << max_socks << endl;
    return 0;
}