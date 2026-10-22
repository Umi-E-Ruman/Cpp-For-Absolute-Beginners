# Lecture 13: Pointers — Complete Guide

## 🎯 What You'll Learn
- What is a pointer?
- Memory addresses and Hexadecimal overview
- Address-of (`&`) and Dereference (`*`) operators
- Null pointers
- Pointers and Arrays
- Pointer Arithmetic
- Pass by Value vs Pass by Reference

---

## 📍 What is a Pointer?
A pointer is a special variable that **stores the memory address** of another variable. 
Instead of holding a value (like `10` or `"Hello"`), it holds the location where that value lives in the computer's memory.

Think of it like a **house address**. The pointer is the piece of paper with the address written on it, not the house itself.

---

## 🔍 Memory Addresses
Every variable in C++ lives at a specific memory address.
- We use the **Address-of operator (`&`)** to get the memory address of a variable.
- We use the **Dereference operator (`*`)** to get the value stored at that address.

### Example:
```cpp
int age = 18;
int* ptr = &age; // 'ptr' now holds the memory address of 'age'

cout << age;     // Output: 18
cout << &age;    // Output: 0x7bfe14 (Example memory address)
cout << ptr;     // Output: 0x7bfe14 (Same address)
cout << *ptr;    // Output: 18 (Value at that address)
