// Roman numerals are represented by seven different symbols: I, V, X, L, C, D
// and M.

// Symbol       Value
// I             1
// V             5
// X             10
// L             50
// C             100
// D             500
// M             1000

// For example, 2 is written as II in Roman numeral, just two ones added
// together. 12 is written as XII, which is simply X + II. The number 27 is
// written as XXVII, which is XX + V + II.

// Roman numerals are usually written largest to smallest from left to right.
// However, the numeral for four is not IIII. Instead, the number four is
// written as IV. Because the one is before the five we subtract it making four.
// The same principle applies to the number nine, which is written as IX. There
// are six instances where subtraction is used:

// I can be placed before V (5) and X (10) to make 4 and 9.
// X can be placed before L (50) and C (100) to make 40 and 90.
// C can be placed before D (500) and M (1000) to make 400 and 900.
// Given a roman numeral, convert it to an integer.

/**
 * @file romanToInteger.cpp
 * @author Jay Prajapati (jayprajapati9900@gmail.com)
 * @brief Coverts Roman Number to Integer Number
 * @version 0.1
 * @date 2022-12-01
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <iostream>
#include <map>
#include <ostream>

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
    std::map<char, int> rtoi_vals = {{'I', 1},   {'V', 5},   {'X', 10},
                                     {'L', 50},  {'C', 100}, {'D', 500},
                                     {'M', 1000}};

    // Traversing through the  string to calculate
    // the total integer valur of the given
    // roman number
    for (int i = 0; i < s.length(); i++) {
      if (rtoi_vals[s[i]] >= rtoi_vals[s[i + 1]]) {
        int_value += rtoi_vals[s[i]];
      } else {
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
