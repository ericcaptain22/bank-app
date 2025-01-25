# Virtual Bank App

## **Introduction**
The Virtual Bank App is a GTK+ 3 based application designed to provide users with a simulation of banking operations. This guide will help you set up and run the app on both **Linux** and **Windows** platforms.

---

## **Linux**

### **Dependencies**
Your app is built with **GTK+ 3**, so you need the GTK+ 3 development environment and related tools. Most Linux distributions have GTK+ 3 pre-installed, but the development files may need to be installed.

### **Install Required Libraries**
Open a terminal and install the dependencies:

#### For Ubuntu/Debian:
```bash
sudo apt update
sudo apt install -y build-essential gtk+3.0 libgtk-3-dev
```

#### For Fedora/RHEL:
```bash
sudo dnf groupinstall "Development Tools"
sudo dnf install gtk3-devel
```

#### For Arch Linux:
```bash
sudo pacman -S gtk3 base-devel
```

### **Steps to Run the App**
1. Navigate to your project directory:
   ```bash
   cd /path/to/your/project
   ```

2. Compile the application:
   ```bash
   gcc `pkg-config --cflags gtk+-3.0` -o build/bank_app src/*.c `pkg-config --libs gtk+-3.0`
   ```

3. Run the application:
   ```bash
   ./build/bank_app
   ```

---

## **Windows**

### **Dependencies**
On Windows, GTK+ 3 is not pre-installed. You need to install and set up GTK+ 3 manually.

### **Install Required Tools**
1. **Install MinGW**:
   - Download MinGW (Minimalist GNU for Windows) from [MinGW SourceForge](http://www.mingw.org/).
   - Install the base system and add the `gcc` compiler to your PATH.

2. **Install MSYS2**:
   - Download MSYS2 from [MSYS2.org](https://www.msys2.org/).
   - MSYS2 provides a Unix-like environment and a package manager for installing GTK+ 3 and related tools.

3. **Install GTK+ 3** via MSYS2:
   - Open the MSYS2 terminal and run the following commands:
     ```bash
     pacman -Syu
     pacman -S mingw-w64-x86_64-toolchain mingw-w64-x86_64-gtk3
     ```
   - This installs the GTK+ 3 libraries and the required GCC toolchain.

### **Steps to Run the App on Windows**
1. Open the MSYS2 MinGW64 terminal.
2. Navigate to your project directory:
   ```bash
   cd /path/to/your/project
   ```

3. Compile the application:
   ```bash
   gcc `pkg-config --cflags gtk+-3.0` -o build/bank_app src/*.c `pkg-config --libs gtk+-3.0`
   ```

4. Run the application:
   ```bash
   ./build/bank_app.exe
   ```

---

## **Bundling the Application**

To make it easier for others to run your app on Windows or Linux, you can bundle the required GTK+ libraries with the executable.

### **On Windows:**
1. Copy the `bin` folder from your GTK+ 3 installation (e.g., from MSYS2).
2. Place it in the same directory as your executable.
3. Ensure the `bin` folder is in your PATH when running the application.

### **On Linux:**
1. No need to bundle libraries; the system package manager usually provides the required dependencies.

---

## **Dependencies Recap**

| Dependency      | Linux Command                       | Windows (MSYS2 Command)            |
|------------------|-------------------------------------|-------------------------------------|
| GCC Compiler    | `sudo apt install build-essential`  | `pacman -S mingw-w64-x86_64-toolchain` |
| GTK+ 3 Library  | `sudo apt install libgtk-3-dev`     | `pacman -S mingw-w64-x86_64-gtk3`  |
| PKG-Config      | Included with `libgtk-3-dev`        | Included with `mingw-w64-x86_64-gtk3` |

---



