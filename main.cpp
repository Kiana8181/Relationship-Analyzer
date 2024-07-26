#include <iostream>
using namespace std;
int* mabna(int x, int* mabna2);
void reflexive(int x[9][2]);
void symmetric(int x[9][2]);
void transitive(int x[9][2]);
void equivalence(int x[9][2]);
void antisymmetric(int x[9][2]);
void irreflexive(int x[9][2]);
void partial_order(int x[9][2]);
void total_order(int x[9][2]);

int main() {
    int x[9][2] = { 1,1,1,2,1,3,2,1,2,2,2,3,3,1,3,2,3,3 };
    int n;
    while (1) {
        cout << "1.reflexive" << endl << "2.symmetric" << endl << "3.transitive" << endl << "4.equivalence" << endl << "5.antisymmetric" << endl << "6.irreflexive" << endl << "7.partial_order" << endl << "8.total_order"<<endl;
        cout << "Please Enter A Number:";
        cin >> n;
        if (n == 1) {
            cout << "reflexive:"<<endl;
            reflexive(x);
        }
        if (n == 2) {
            cout << "symmetric:"<<endl;
            symmetric(x);
        }
        if (n == 3) {
            cout << " transitive:"<<endl;
            transitive(x);
        }
        if (n == 4) {
            cout << "equivalence:"<<endl;
            equivalence(x);
        }
        if (n == 5) {
            cout << "antisymmetric:"<<endl;
            antisymmetric(x);
        }
        if (n == 6) {
            cout << "irreflexive:"<<endl;
            irreflexive(x);
        }if (n == 7) {
            cout << "partial_order:"<<endl;
            partial_order(x);
        }if (n == 8) {
            cout << " total_order:"<<endl;
            total_order(x);
        }
    }
}

void reflexive(int x[9][2]) {
    int a[10] = {};
    for (int i = 0; i <= 512; i++) {
        mabna(i, a);
        if (a[1] == 1 && a[5] == 1 && a[9] == 1) {
            cout << "{ ";
            for (int j = 1; j < 10; j++) {
                if (a[j] == 1) cout << "<" << x[j-1][0] << "," << x[j-1][1]<<">,";
            }
            cout <<" }"<<endl;
        }
    }
}

void symmetric(int x[9][2]){
    int a[10] = {};
    for (int i = 0; i <= 512; i++) {
        mabna(i, a);
        if (a[2] != a[4] || a[3] != a[7] || a[6] != a[8]) continue;
        else{
            cout << "{ ";
            for (int j = 1; j < 10; j++) {
                if (a[j] == 1) cout << "<" << x[j - 1][0] << "," << x[j - 1][1] << ">,";
            }
            cout << " }" << endl;
        }
    }
}

void transitive(int x[9][2]) {
    int a[10] = {};
    for (int i = 0; i <= 512; i++) {
        mabna(i, a);
        if (a[2] == 1 && a[4] == 1 && (a[1] == 0 || a[5] == 0)) continue;
        else if (a[2] == 1 && a[6] == 1 && a[3] == 0) continue;
        else if (a[3] == 1 && a[7] == 1 && (a[1] == 0 || a[9] == 0)) continue;
        else if (a[3] == 1 && a[8] == 1 && a[2] == 0) continue;
        else if (a[4] == 1 && a[3] == 1 && a[6] == 0) continue;
        else if (a[6] == 1 && a[8] == 1 && (a[9] == 0 || a[5] == 0)) continue;
        else if (a[6] == 1 && a[7] == 1 && a[4] == 0) continue;
        else if (a[7] == 1 && a[2] == 1 && a[8] == 0) continue;
        else if (a[8] == 1 && a[4] == 1 && a[7] == 0) continue;
        else{
            cout << "{ ";
            for (int j = 1; j < 10; j++) {
                if (a[j] == 1) cout << "<" << x[j - 1][0] << "," << x[j - 1][1] << ">,";
            }
            cout << " }" << endl;
        }
    }
}

void equivalence(int x[9][2]) {
    int a[10] = {};
    for (int i = 0; i <= 512; i++) {
        mabna(i, a);
        if (a[1] == 1 && a[5] == 1 && a[9] == 1) {
            if (a[2] != a[4] || a[3] != a[7] || a[6] != a[8]) continue;
            else if (a[2] == 1 && a[4] == 1 && (a[1] == 0 || a[5] == 0)) continue;
            else if (a[2] == 1 && a[6] == 1 && a[3] == 0) continue;
            else if (a[3] == 1 && a[7] == 1 && (a[1] == 0 || a[9] == 0)) continue;
            else if (a[3] == 1 && a[8] == 1 && a[2] == 0) continue;
            else if (a[4] == 1 && a[3] == 1 && a[6] == 0) continue;
            else if (a[6] == 1 && a[8] == 1 && (a[9] == 0 || a[5] == 0)) continue;
            else if (a[6] == 1 && a[7] == 1 && a[4] == 0) continue;
            else if (a[7] == 1 && a[2] == 1 && a[8] == 0) continue;
            else if (a[8] == 1 && a[4] == 1 && a[7] == 0) continue;
            else {
               cout << "{ ";
               for (int j = 1; j < 10; j++) {
                   if (a[j] == 1) cout << "<" << x[j - 1][0] << "," << x[j - 1][1] << ">,";
               }
               cout << " }" << endl;
            }
        }
    }
        
}

void antisymmetric(int x[9][2]) {
    int a[10] = {};
    for (int i = 0; i <= 512; i++) {
        mabna(i, a);
        if ((a[2] == 1 && a[4] == 1) || (a[3] == 1 && a[7] == 1) || (a[6] == 1 && a[8] == 1)) continue;
        else {
            cout << "{ ";
            for (int j = 1; j < 10; j++) {
                if (a[j] == 1) cout << "<" << x[j - 1][0] << "," << x[j - 1][1] << ">,";
            }
            cout << " }" << endl;
        }
    }
}

void irreflexive(int x[9][2]) {
    int a[10] = {};
    for (int i = 0; i <= 512; i++) {
        mabna(i, a);
        if (a[1] != 1 && a[5] != 1 && a[9] != 1) {
            cout << "{ ";
            for (int j = 1; j < 10; j++) {
                if (a[j] == 1) cout << "<" << x[j - 1][0] << "," << x[j - 1][1] << ">,";
            }
            cout << " }" << endl;
        }
    }
}

void partial_order(int x[9][2]) {
    int a[10] = {};
    for (int i = 0; i <= 512; i++) {
        mabna(i, a);
        if (a[1] == 1 && a[5] == 1 && a[9] == 1) {
            if ((a[2] == 1 && a[4]==1) || (a[3] == 1 && a[7]== 1) || (a[6] == 1 && a[8] == 1)) continue;
            else if (a[2] == 1 && a[4] == 1 && (a[1] == 0 || a[5] == 0)) continue;
            else if (a[2] == 1 && a[6] == 1 && a[3] == 0) continue;
            else if (a[3] == 1 && a[7] == 1 && (a[1] == 0 || a[9] == 0)) continue;
            else if (a[3] == 1 && a[8] == 1 && a[2] == 0) continue;
            else if (a[4] == 1 && a[3] == 1 && a[6] == 0) continue;
            else if (a[6] == 1 && a[8] == 1 && (a[9] == 0 || a[5] == 0)) continue;
            else if (a[6] == 1 && a[7] == 1 && a[4] == 0) continue;
            else if (a[7] == 1 && a[2] == 1 && a[8] == 0) continue;
            else if (a[8] == 1 && a[4] == 1 && a[7] == 0) continue;
            else {
                cout << "{ ";
                for (int j = 1; j < 10; j++) {
                    if (a[j] == 1) cout << "<" << x[j - 1][0] << "," << x[j - 1][1] << ">,";
                }
                cout << " }" << endl;
            }
        }
    }
}

void total_order(int x[9][2]) {
    int a[10] = {};
    for (int i = 0; i <= 512; i++) {
        mabna(i, a);
        if (a[1] == 1 && a[5] == 1 && a[9] == 1) {
            if ((a[2] == 1 && a[4] == 1) || (a[3] == 1 && a[7] == 1) || (a[6] == 1 && a[8] == 1)) continue;
            else if (a[2] == 1 && a[4] == 1 && (a[1] == 0 || a[5] == 0)) continue;
            else if (a[2] == 1 && a[6] == 1 && a[3] == 0) continue;
            else if (a[3] == 1 && a[7] == 1 && (a[1] == 0 || a[9] == 0)) continue;
            else if (a[3] == 1 && a[8] == 1 && a[2] == 0) continue;
            else if (a[4] == 1 && a[3] == 1 && a[6] == 0) continue;
            else if (a[6] == 1 && a[8] == 1 && (a[9] == 0 || a[5] == 0)) continue;
            else if (a[6] == 1 && a[7] == 1 && a[4] == 0) continue;
            else if (a[7] == 1 && a[2] == 1 && a[8] == 0) continue;
            else if (a[8] == 1 && a[4] == 1 && a[7] == 0) continue;
            else if (a[2] != a[4] && a[6] != a[8] && a[3] != a[7]){
                cout << "{ ";
                for (int j = 1; j < 10; j++) {
                    if (a[j] == 1) cout << "<" << x[j - 1][0] << "," << x[j - 1][1] << ">,";
                }
                cout << " }" << endl;
            }
        }
    }
}

int* mabna(int x, int* mabna2) {
    int i;
    for (i = 0; x > 0; i++)
    {
        mabna2[9 - i] = x % 2;
        x = x / 2;
    }
    return mabna2;
}
