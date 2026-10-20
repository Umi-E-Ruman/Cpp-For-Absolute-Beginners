# Module 4: Loops & Functions

> **Goal:** Learn to repeat tasks efficiently and organize code into reusable functions

---

## 📚 Lectures

| # | Title |
|---|-------|
| 9 | Loops — for, while, do-while, nested loops, break, continue |
| 10 | Functions — Creating, Calling, Parameters, Return Types |

---

## 🔄 1. Loops (Lecture 9)

Loops are used to repeat a block of code multiple times. 

### Types of Loops:
- **`for` loop:** Best when you know exactly how many times to repeat.
- **`while` loop:** Best when you repeat as long as a condition is true.
- **`do-while` loop:** Runs at least once, then checks the condition.

### Loop Control:
- `break`: Stops the loop entirely.
- `continue`: Skips the current iteration and moves to the next.
- **Nested Loops:** A loop inside another loop (used for patterns, matrices).

### Example (For Loop):
```cpp
for (int i = 1; i <= 5; i++) {
    cout << i << " ";
}
