#include <bits/stdc++.h>
#define FOR(i, n) for(int i=0; i<n; ++i)
#define ALL(v) v.begin(),v.end()
#define D(x) cout << (x) << endl;
#define Dn(x) cout << #x <<" : " << (x) << endl;
using LL = int64_t;
using ULL = uint64_t;
using namespace std;
typedef vector<LL> VI; typedef vector<VI> VVI;


bool is_inside(LL x, LL a, LL b){
    return a <= x && x <= b;
}

int sign(LL x){
    if(x<0){
        return -1;
    }else if(x > 0){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    ios::sync_with_stdio(false);
    VI charismas;
    VI differences;
    int n;
    cin >> n;
    charismas.resize(n, 0);
    FOR(i, n){
        cin >> charismas[i];
    }
    if (charismas.size() < 2){
        cout << "0\n";
        return 0;
    }

    differences.resize(n-1, 0);

    FOR(i, n-1){
        differences[i] = charismas[i]-charismas[i+1];
    }


    VI best_step(n-1, 0);
    best_step[0] = abs(differences[0]);
    LL groupe_actuel = sign(differences[0]);

    for(int i = 1; i < n-1; ++i){
        if(sign(groupe_actuel) == sign(differences[i])){
            best_step[i] = best_step[i-1] + abs(differences[i]);
            continue;
        }
        LL pris = i<2?abs(differences[i]) : best_step[i-2] + abs(differences[i]);
        LL non_pris = best_step[i-1];
        if(pris > non_pris){
            best_step[i] = pris;
            groupe_actuel = sign(differences[i]);
        }else{
            best_step[i] = non_pris;
            groupe_actuel = 0;
        }
    }
    
    cout << best_step[n-2] << "\n";

    return 0;
}