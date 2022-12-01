#include <iostream>
#include <ostream>
#include <unordered_map>

class Solution {
public:
    int romanToInt(std::string s) {
        int int_value = 0;

        // Declaring an unordered map for declaring 
        // the values of the roman letters with
        // their corresponding integer values.
        std::unordered_map<char, int> rtoi_vals;

        // Inserting the valus of the integers
        // to the corresponding Roman Letters.
        rtoi_vals['I'] = 1;
        rtoi_vals['V'] = 5;
        rtoi_vals['X'] = 10;
        rtoi_vals['L'] = 50;
        rtoi_vals['C'] = 100;
        rtoi_vals['D'] = 500;
        rtoi_vals['M'] = 1000;
        
        // Traversing through the  string to calculate
        // the total integer valur of the given
        // roman number
        for (int i = 0; i <= s.length(); i++) {
            if (rtoi_vals[s[i]] >= rtoi_vals[s[i+1]]) {
            int_value += rtoi_vals[s[i]];
            }
            else {
            int_value -= rtoi_vals[s[i]];
            }
        }

        // Returning the integer value of the Roman Number
        return int_value;
    }
};

int main() {
    Solution mySolution;
    std::cout << mySolution.romanToInt("MMMDCCCLXXXVIII") << std::endl;
}