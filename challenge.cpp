/*
====================================================
        🧠 C++ TEAM COLLABORATION EXERCISE
====================================================

This project is divided into 4 simple tasks for 4 team members.

Each member should work on a separate Git branch, 
implement their part, and then push + create a pull request.

💡 The final program should:
    1️⃣ Ask the user for 2 integers.
    2️⃣ Calculate their sum and difference.
    3️⃣ Calculate their product.
    4️⃣ Display all results neatly.

----------------------------------------------------
⚙️ Instructions:
----------------------------------------------------
👤 Member 1 (Branch: task1_input)
    → Implement a function to take 2 integers from the user.

👤 Member 2 (Branch: task2_sum_diff)
    → Implement functions that return the sum and the difference of the 2 integers.

👤 Member 3 (Branch: task3_product)
    → Implement a function that returns the product of the 2 integers.

👤 Member 4 (Branch: task4_display)
    → Implement a function that displays all results in a clear, formatted way.

After all PRs are merged, the program should compile and run correctly.

====================================================
*/

#include <iostream>
using namespace std;

// ======== Task 1: Get user input (Member 1) ========
void getInput(int &a, int &b) {
    // TODO: Ask user to enter two integers and store them in a and b
    // Example:
    // "Enter two numbers: "
}


// ======== Task 2: Sum and Difference (Member 2) ========
int getSum(int a, int b) {
    // TODO: Return the sum of a and b
    return 0;
}

int getDifference(int a, int b) {
    // TODO: Return the difference (a - b)
    return 0;
}


// ======== Task 3: Product (Member 3) ========
int getProduct(int a, int b) {
    // TODO: Return the product of a and b
    return 0;
}


// ======== Task 4: Display results (Member 4) ========
void displayResults(int a, int b, int sum, int diff, int prod) {
   cout << "\n RESULTS\n";
    cout << "Numbers: " << a << " and " << b << endl;
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << diff << endl;
    cout << "Product: " << prod << endl;
}


int main() {
    int a, b;

    // Step 1: Get input
    getInput(a, b);

    // Step 2–3: Perform calculations
    int sum = getSum(a, b);
    int diff = getDifference(a, b);
    int prod = getProduct(a, b);

    // Step 4: Display results
    displayResults(a, b, sum, diff, prod);

    return 0;
}
