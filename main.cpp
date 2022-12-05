#include <cctype>
#include <iostream>
#include <iomanip>
#include <compare>
#include <vector>
#include <fstream>
#include <string>

int main(){
    std::string line;
    std::vector<int> totalFinal;
    int total = 0; // NO UN PLD
    int j = 0;
    std::ifstream myfile("data.txt");



    while(getline (myfile, line) ){
        int num = 0;
        try {
            num = std::stoi(line);
            total = num + total;
            } 
        catch (...) {             
            totalFinal.push_back(total);
            total = 0;
            }
    }


    for(unsigned int i = 0; i < totalFinal.size(); i++){
        if(totalFinal[j] >= totalFinal[i]){
        }else{
            j = i;
        }
    }

    std::cout << totalFinal[j] << "\n";


}