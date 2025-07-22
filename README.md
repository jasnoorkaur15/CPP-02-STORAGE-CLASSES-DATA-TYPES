# C++ Experiment 2: Study and Implementation of Data Types & Storage Classes

## 🎯 Aim

- Understand and use **data types** in C++  
- Explore **storage classes** – `auto`, `static`, `extern`, `register`  
- Learn about **variable scope** and memory allocation for each data type  

## 🎓 Objectives
- 🔹 Apply different **storage classes**  
- 🔹 Understand the **storage**, **scope**, and **default values** of each class  
- 🔹 Learn how to check memory size using the `sizeof` operator  

## 🛠️ Program Overview
### 🔹 Syntax
- A **user-defined function** is created to observe behavior of storage classes  
- The `main()` function **calls** that function  
- The `sizeof` operator is used to check memory allocation  

## 🧠 Storage Classes Explained
### 🔸 Auto Storage Class
- Default for all **local variables**
- Exists **only inside functions**
- Deleted after function execution
- Default value: **undefined (garbage)**

```cpp
auto int x;
```
### 🔸 Extern Storage Class
- Refers to a **global variable** declared outside any function
- `extern` tells the compiler the variable exists **somewhere else**
- Cannot be initialized here
- Default value: **garbage**

```cpp
extern int x;
```
### 🔸 Static Storage Class
- Retains value between function calls
- Used to **preserve state**
- Default value: **0**

```cpp
static int x;
```
### 🔸 Register Storage Class
- Suggests storing the variable in a **CPU register**
- Provides **faster access**
- Cannot use `&x` because it may not have an address
- Default value: **garbage**

```cpp
register int x;
```
## 🔧 What I Used

- **Storage Classes**: `auto`, `extern`, `static`, `register`  
- **Data Types**: `int`, `float`, `char`, `bool`, `short`, `long`, `double`  
- **Operators**: `sizeof` to check size of data types  

---

## 🖥️ Sample Output

### 🟡 Auto Storage Class
```
Size of variable: 4
The variable is: 6
Address of func variable a: 0x7ffccd69c61c

Size of variable: 4
The variable is: 6
Address of func variable a: 0x7ffccd69c61c

Size of variable: 4
The variable is: 6
The variable is: 7
Address of global variable a: 0x404040
```

---

### 🟢 Static Storage Class
```
Address of func variable a: 0x404194
Size of variable: 4
The variable is: 1

Address of func variable a: 0x404194
Size of variable: 4
The variable is: 2

Address of func variable a: 0x404194


