#include <iostream>
#include <stdio.h>
#include <vector>       // std::vector
#include <algorithm>    // std::sort


using namespace std;

int main() {
    
    vector<int> busNumbers;
    int numBusses = 0;

    cin >> numBusses;

    for(int i = 0; i < numBusses; i++){
        int busNumber = -1;
        cin >> busNumber;
        busNumbers.push_back(busNumber);
    }

    sort(busNumbers.begin(), busNumbers.end());

    int counter = 0; 
    int i = 0;
    int last = 0;

    while(i != numBusses){
        if(numBusses <= 2){
            for(int j = 0; j < numBusses; j++){
                cout << busNumbers[i] << endl;
            }
            i = numBusses;
        }
        else {
            if((busNumbers[i] == busNumbers[i+1] - 1) && (busNumbers[i] == busNumbers[i+2] - 2)){
                //There is at least one match
                for (int j = i; j < numBusses; j++){
                    if(busNumbers[i] == busNumbers[j] - (j - i)){
                        last = j; 
                    }
                }
                cout << busNumbers[i] << "-" << busNumbers[last] << " ";
                //increment i
                i = last + 1;
            }
            else{
                cout << busNumbers[i] << " ";
                i++;
            }
        }
    }

    return 0;
}