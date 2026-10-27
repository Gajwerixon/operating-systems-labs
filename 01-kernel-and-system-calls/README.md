# Task 1 — Kernel Compilation and System Calls

## Objective
The goal of this task is to implement a new system call in MINIX 2.0.3 that calculates the width of a process subtree for a given process ID (PID).

The subtree width is defined as the maximum number of processes at any single level below the specified process.

## Files
- `gettreewidth.c` — A user-space program that calls the implemented system call and displays the result.
- `create_tree.c` — Creates a process tree for testing purposes.
- `demo.sh` — A shell script that starts the process tree, displays the running process table, and allows the user to select a PID.

## Demonstration
The demonstration script performs the following steps:

1. Starts the process tree in the background.
2. Displays the current process table using `ps -al`.
3. Prompts the user to enter a PID.
4. Displays the selected PID.

## Environment
- Operating system: MINIX 2.0.3
- Programming languages: C and Shell

## Status
Implementation and testing in progress.