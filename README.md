# 📥 Undo/Redo String Project (OOP C++)

A console-based Undo/Redo system for strings implemented in C++ using Object-Oriented Programming (OOP) principles.  
This project allows you to **track changes to a string**, undo them step-by-step, and redo them if needed, using **stacks** for history management.

---

## 📌 Features

### 🧱 Internal Structure
- Uses two `std::stack<string>` containers: `_Undo` and `_Redo`  
- Stores previous values for Undo and Redo operations  
- Fully encapsulated in a class `clsMyString`  
- Uses `__declspec(property)` to access the string as a property

### ➕ Operations
- `SetValue(string)` — sets a new value and tracks history  
- `Undo()` — revert to the previous string value  
- `Redo()` — redo an undone value  

### 🔍 Access Operations
- `Value` property — get or set the current string  
- `GetValue()` and `SetValue()` methods available for compatibility  

---

## 🖥️ Console Output Example

```
S1 =
S1 = Mohammed
S1 = Mohammed2
S1 = Mohammed3

Undo:
S1 after undo = Mohammed2
S1 after undo = Mohammed
S1 after undo =

Redo:
S1 after redo = Mohammed
S1 after redo = Mohammed2
S1 after redo = Mohammed3

```


---

## 🧠 Concepts Used
- Object-Oriented Programming (OOP)  
- Stack data structure for Undo/Redo history  
- Encapsulation and property access in C++  
- Dynamic value tracking  

---

## 🛠️ Technologies Used
- C++ (console-based)  
- `std::stack` for history  
- Property syntax using `__declspec(property)`  

---

## 🎯 Educational Purpose
This project is designed to:
- Understand **Undo/Redo logic** in applications  
- Practice **stack-based history management**  
- Apply **OOP principles** in C++  
- Prepare for building **text editors, forms, and other interactive apps**  

---

## 🙏 Credits
- Developed by Abdessalem Kessouri  
- Special thanks to Dr. Mohammed Abu-Hadhoud for teaching clean OOP design.

