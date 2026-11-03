# ⚙️ C++ Functor Sorting Algorithms

## 📖 About the Project
This project concludes the C++ Standard Template Library exploration by implementing Function Objects (Functors). It demonstrates how to overload the parenthesis operator `()` within a class, allowing objects to behave as executable functions that can be passed directly into standard C++ algorithms.

## ✨ Features
*   **Custom Functors:** Implements a custom `HealthSorter` class with an overloaded `operator()` to dictate custom ascending sorting logic.
*   **Anonymous Instantiation:** Passes a temporary, unnamed object (`HealthSorter()`) directly into the `std::sort` algorithm to act as a memory-efficient sorting rulebook.
*   **STL Built-in Functors:** Utilizes the C++ standard library's `<functional>` header to dynamically reverse the array order using `greater<int>()`.

## 💻 Tech Stack
*   **Language:** C++
*   **Core Concepts:** STL Algorithms, Functors, Operator Overloading, Anonymous Objects.
