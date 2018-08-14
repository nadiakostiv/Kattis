#include <iostream>
#include <sstream>
#include <stdio.h>
#include "Complex_number.h"

using namespace std;

int main() {

    stringstream ss;
    string mystr;
    int case1 = 0;
    double x, y, r;

    while(cin >> x){

        // getline(cin, mystr);

        cin >> y >> r;

        Complex_number* z_n = new Complex_number(x, y);


        for(int i = 1; i < r; i++){
            z_n = (*z_n).add(*(*z_n).square()); 
        }

        double magnitude = (*z_n).mag();

        if(magnitude < 2){
            case1++;
            cout << "Case " << case1 << ": IN" << endl;
        }
        else{
            case1++;
            cout << "Case " << case1 << ": OUT" << endl;
        }
    }

    return 0;
}

