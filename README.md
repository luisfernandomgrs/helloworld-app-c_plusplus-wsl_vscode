This project is my first code using WSL and g++;

This practice exercise has learning to use VS Code with WSL and g++ to make Linux executables.
Also to introduce to this new world outside of the Desktop Application Windows.

To realize this project, my learning is based into help from:
https://code.visualstudio.com/docs/cpp/config-wsl

# 🚀

## NeverStopLearning

My practice exercise include:

- Install and Config VS Code;
- and Install compilers into Ubuntu inside WSL;
- and Install tools to debug code in this development workspace;
- and finished with Publish code project into GitHub.

# Step to install tools

- Install Visual Studio Code.
- Install the Remote - WSL extension.
- Install Windows Subsystem for Linux

# Step into WSL/Ubuntu

- To prepare your sustem, by typing:

```cmd
  sudo apt-get update && sudo apt-get dist-upgrade
```

- Install GNU compiler and the GDB debugger, by typing:

```cmd
sudo apt-get install build-essential gdb
```

- You know what's "whereis" command linux ? Verify that the install succeeded by location g++ and gdb.

```cmd
whereis g++
whereis gdb
```

<br><br>

# Before of continue the tutorial

make copy this code project or write the code to your project...
<br><br>

# Compiler settings, Build instructions and debugger settings

As you go through the tutorial , you see three files created in your the workspace.

- c_cpp_properties.json
  - (compiler path and IntelliSense settings)
- tasks.json
  - (build instructions)
  1. From the main menu, choose **Terminal > Configure Default Build Task**.
  2. In the dropdown, which will display a tasks dropdown listing various predefined build tasks for C++ compilers.
  - Choose **g++ build active file**
- launch.json
  - (debugger settings)
  1. From the main menu, choose **Run > Add Configuration...**
  2. and then choose **C++ (GDB/LLDB)**.
  - VS Code creates a launch.json file, opens it in the editor, and builds and runs <name_application>.

<br><br>

# Start a debugging session

1. Go back to your code.cpp so that it is the active file.
2. Press F5 or from the main menu choose **Run > Start Debugging**.
