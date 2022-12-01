/**
 * @file romanToInteger.cpp
 * @author Jay Prajapati (jayprajapati9900@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-01
 */
#include <iostream>
#include <ostream>
#include <map>

/**
 * @brief Declaring the method to convert the Roman Number
 *        to an integer.
 */
class Solution {
public:
    int romanToInt(std::string s) {
        int int_value = 0;

        // Declaring an unordered map for declaring 
        // the values of the roman letters with
        // their corresponding integer values.
        std::map<char, int> rtoi_vals = {
            {'I' , 1},
            {'V' , 5},
            {'X' , 10},
            {'L' , 50},
            {'C' , 100},
            {'D' , 500},
            {'M' , 1000}
        };
        
        // Traversing through the  string to calculate
        // the total integer valur of the given
        // roman number
        for (int i = 0; i < s.length(); i++) {
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