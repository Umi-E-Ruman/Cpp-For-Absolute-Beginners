# Lecture 2: Setting Up Your C++ Environment

## 🎯 What You'll Learn

- What is a **code editor** and why we need it
- What is a **compiler** and why we need it
- Difference between editor and compiler (with analogies)
- Complete step-by-step setup on **Windows**
- *(Mac setup resource provided separately )*

---

## 🧠 Code Editor vs Compiler — Simple Analogy

### 📝 Code Editor = Your Notebook
A code editor is where you **write** your code.
- Like a notebook where you write a recipe
- It doesn't cook the food — it just holds the words
- Examples: **VS Code, Notepad++, Sublime Text**

### 👨‍🍳 Compiler = Your Chef
A compiler is what **turns your code into a program** the computer can run.
- Like a chef who reads your recipe and actually cooks the dish
- Without a chef, your recipe is just words on paper
- Examples: **g++, MinGW, clang, MSVC**

> **You write in the editor. The compiler makes it run.**

---

## 🪟 Complete Windows Setup Guide

### Step 1: Download VS Code
1. Go to [code.visualstudio.com](https://code.visualstudio.com/)
2. Click **Download for Windows**
3. Run the installer
4. Follow the setup wizard (keep default options)
5. Launch VS Code

### Step 2: Download MinGW (C++ Compiler)
1. Go to [sourceforge.net/projects/mingw](https://sourceforge.net/projects/mingw/)
2. Download the installer
3. Install **mingw32-base** and **mingw32-gcc-g++**
4. Wait for installation to complete

### Step 3: Add MinGW to System PATH
1. Copy the path: `C:\MinGW\bin`
2. Search **"Environment Variables"** in Windows
3. Click **Edit the system environment variables**
4. Click **Environment Variables**
5. Under **System variables**, find **Path** → click **Edit**
6. Click **New** → paste `C:\MinGW\bin`
7. Click **OK** on all windows

### Step 4: Verify Installation
Open **Command Prompt** and type:
```bash
g++ --version
