# Null Pointer Dereference Bug in C++

This repository demonstrates a common C++ bug: dereferencing a null pointer.  The `bug.cpp` file contains the problematic code, which attempts to write to memory pointed to by a null pointer.  This will result in undefined behavior, often a segmentation fault or program crash.

The `bugSolution.cpp` file provides a corrected version that handles null pointer checks before dereferencing.

This example highlights the importance of robust null pointer checks in C++ to prevent runtime errors and ensure program stability.