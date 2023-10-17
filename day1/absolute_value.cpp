#include <iostream>
#include <cmath>        // cmath is needed for absolute value
#include <algorithm>    // must include algorithm if using std::sort

int main() {
    // Declare our array of integers
    int nums[5] {};     // note this syntax -- uniform initialization!
    // long form of the above: int nums[5] = {0, 0, 0, 0, 0};

    // Read in our numbers
    for (int i = 0; i < 5; i++) {
        std::cout << "Enter a number: ";
        std::cin >> nums[i];
    }

    // Sort (in ascending order)
    std::sort(nums, nums + 5);  // why does this work? pointers!

    // Determine index of our greatest absolute value -- either first or last
    int i;
    if (std::abs(nums[0]) > std::abs(nums[4])) {
        i = 0;
    } else {
        i = 4;
    }

    // Print
    std::cout << "The number with the highest absolute value is " << nums[i] << std::endl;
    if (std::abs(nums[i]) > 10) {
        std::cout << ":)" << std::endl;
    }    
    
    return 0;
}