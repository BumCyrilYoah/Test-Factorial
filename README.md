
# C++ Salary Friend Function & Factorial Calculator

## 📌 Project Description

This is a simple C++ program demonstrating two basic programming concepts:

1. **Friend functions in C++** using a `salary` class.
2. **Factorial calculation** using a `while` loop.

The program creates a `salary` object and attempts to access its private data through a friend function. It then asks the user to enter a number and calculates its factorial.

## 🛠️ Technologies Used

* **Language:** C++
* **Compiler:** g++, MinGW, or any standard C++ compiler
* **Header:** `<iostream>`

## 📂 Program Structure

The program contains:

### 1. `salary` Class

```cpp
class salary {
private:
    int es;
    friend int printsalary(salary s);
};
```

The class contains a private integer variable `es`.

The function `printsalary()` is declared as a **friend function**, allowing it to access the private members of the `salary` class.

### 2. Friend Function

```cpp
int printsalary(salary s) {
    s.es = s.es + 1;
}
```

The function receives a `salary` object and modifies its private member `es`.

### 3. Factorial Calculation

The program asks the user for a number:

```cpp
cin >> factorial;
```

It then uses a `while` loop to calculate the factorial:

```cpp
while(i <= factorial) {
    num = num * i;
    cout << num << "* ";
    i++;
}
```

For example, for an input of `5`, the multiplication progresses through:

`2 → 6 → 24 → 120`

## ⚠️ Important Issues in the Current Code

The current program has a few problems that should be corrected before using it as a final project:

* `es` is not initialized.
* `printsalary()` is declared as returning `int`, but it does not return a value.
* `cout << printsalary(s)` expects `printsalary()` to return something.
* `num` is an `int`, which can overflow quickly when calculating large factorials.
* The program starts the factorial calculation from `2`, so the handling of `0!` and `1!` is not explicitly implemented.

## 🎯 Learning Objectives

This project helps beginners understand:

* C++ classes
* Private class members
* Friend functions
* Objects
* Function parameters
* `while` loops
* User input with `cin`
* Output with `cout`
* Factorial calculations

## 🚀 Possible Improvements

Future versions could:

* Properly initialize the salary value.
* Make `printsalary()` return an integer.
* Use `long long` consistently for factorial calculations.
* Add validation for negative numbers.
* Handle `0!` and `1!`.
* Separate the salary demonstration and factorial calculator into different functions.

## 👨‍💻 Author

**Cyril Yoah Bum**

Embedded Systems & Robotics Enthusiast
C/C++ | Arduino | Electronics | Robotics | IoT

## 📄 License

This project is intended for educational and learning purposes.
