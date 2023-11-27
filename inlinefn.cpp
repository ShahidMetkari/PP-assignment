•	#include <iostream>
•	
•	// Inline function to compute the square
•	inline int square(int x) {
•	    return x * x;
•	}
•	
•	int main() {
•	    int num = 5;
•	    std::cout << "Square of " << num << " is " << square(num) << std::endl;
•	    return 0;
•	}
