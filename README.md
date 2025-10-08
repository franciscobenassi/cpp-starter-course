# C++ Starter Course

Welcome to the C++ Starter Course! This beginner-friendly guide will help you learn C++ step by step, from writing your first program to understanding functions.

## Lessons Overview

**Lesson 1: Introduction & Hello World**  
- Write your first C++ program.
- Learn about the structure of a simple C++ application.

**Lesson 2: Variables, Data Types, and Input/Output**  
- Understand variables and data types.
- Perform basic input and output operations.

**Lesson 3: Control Flow**  
- Learn about conditional statements: `if`, `else`, and `switch`.

**Lesson 4: Loops**  
- Use `for`, `while`, and `do-while` loops for repetition.

**Lesson 5: Functions and Program Structure**  
- Write reusable code using functions.

---

## How to Use

1. Follow each lesson in order.
2. Read the explanations, review the code, and try the exercises.
3. Experiment by modifying the code files.

---

## Lesson Details & Code Examples

---

### Lesson 1: Introduction & Hello World

```cpp
// lesson-1.cpp
#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
```
**Exercise:**  
- Change "Hello, World!" to your name or any other message.
- Add another line that prints "Welcome to learning C++!"

---

### Lesson 2: Variables, Data Types, and Input/Output

```cpp
// lesson-2.cpp
#include <iostream>

int main() {
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;
    std::cout << "You are " << age << " years old." << std::endl;
    return 0;
}
```
**Exercise:**  
- Add variables for your name (string) and height (double), and ask the user for them.
- Print a summary with all the values.

---

### Lesson 3: Control Flow (if, else, switch)

```cpp
// lesson-3.cpp
#include <iostream>

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    if (number > 0) {
        std::cout << "Positive number" << std::endl;
    } else if (number < 0) {
        std::cout << "Negative number" << std::endl;
    } else {
        std::cout << "Zero" << std::endl;
    }

    // Switch example
    char grade;
    std::cout << "Enter your grade (A/B/C/D/F): ";
    std::cin >> grade;
    switch (grade) {
        case 'A':
            std::cout << "Excellent!" << std::endl;
            break;
        case 'B':
        case 'C':
            std::cout << "Well done" << std::endl;
            break;
        case 'D':
            std::cout << "You passed" << std::endl;
            break;
        case 'F':
            std::cout << "Better try again" << std::endl;
            break;
        default:
            std::cout << "Invalid grade" << std::endl;
    }
    return 0;
}
```
**Exercise:**  
- Add more cases to the switch for grades plus comments for each.
- Try entering different numbers and grades.

---

### Lesson 4: Loops (for, while, do-while)

```cpp
// lesson-4.cpp
#include <iostream>

int main() {
    // For loop
    std::cout << "For loop from 1 to 5:" << std::endl;
    for (int i = 1; i <= 5; i++) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    // While loop
    int count = 1;
    std::cout << "While loop from 1 to 5:" << std::endl;
    while (count <= 5) {
        std::cout << count << " ";
        count++;
    }
    std::cout << std::endl;

    // Do-while loop
    int number = 1;
    std::cout << "Do-while loop from 1 to 5:" << std::endl;
    do {
        std::cout << number << " ";
        number++;
    } while (number <= 5);
    std::cout << std::endl;

    return 0;
}
```
**Exercise:**  
- Print all even numbers from 2 to 20 using a loop.
- Try using each type of loop for a different task.

---

### Lesson 5: Functions and Program Structure

```cpp
// lesson-5.cpp
#include <iostream>

// Function declaration
void greet(std::string name);

int add(int a, int b) {
    return a + b;
}

int main() {
    greet("Student");

    int sum = add(5, 7);
    std::cout << "5 + 7 = " << sum << std::endl;

    // User-defined greeting
    std::string userName;
    std::cout << "Enter your name: ";
    std::cin >> userName;
    greet(userName);

    return 0;
}

// Function definition
void greet(std::string name) {
    std::cout << "Hello, " << name << "!" << std::endl;
}
```
**Exercise:**  
- Write a function that multiplies two numbers and returns the result.
- Write a function that prints whether a number is even or odd.

---

Happy coding and have fun on your C++ journey!