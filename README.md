**Dynamic Hourglass Pattern Generator in C++**
This C++ console application creates a visual hourglass pattern of customizable size based on user input. It is an excellent demonstration of nested loop management and foundational C++ programming logic.

**⚙️ How It Works**
The pattern is constructed by printing characters (^) and strategic spacing in two distinct phases:

**1. Upper Half: The Inverted Pyramid**
This section is responsible for the top half of the hourglass, where the pattern starts wide and narrows to the center.

**Outer Loop (i):** Iterates from the first row (1) up to the user-specified row count (r).

**Space Loop (j):** Prints the leading spaces before the characters. The number of spaces increases with each row (i), which pushes the pattern inward, creating the indentation.

**Character Loops (k and l):** These loops are used to print the ^ characters. As the row number (i) increases, the number of characters printed decreases, causing the pattern to taper towards the center.

**Output:** Each iteration ends with cout << endl; to move to the next row.

**2. Lower Half:** The Regular Pyramid
This section completes the hourglass by mirroring the top half, starting from the narrowest point and widening back out.

**Outer Loop (i):** Iterates from the widest row back up to 1 (r down to 1) to control the size progression.

**Space Loop (j):** Prints leading spaces. The number of spaces decreases as the pattern widens, pulling the characters back towards the margins.

**Character Loops (k and l):** As the loop progresses, the total number of characters printed increases, causing the pattern to widen back out and complete the visual hourglass shape.
