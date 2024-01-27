//
// Created by hrs on 27/01/24.
//

#ifndef VM_H
#define VM_H

#include "headers/stack.h"
#include "headers/buffer.h"

// The VM is the main data structure of the interpreter.
typedef struct {
    Stack* stack;       // The stack is used to store values and perform operations on them.
    Buffer* buffer;     // The buffer is used to store the instructions.
    int ip;             // The instruction pointer is used to keep track of the current instruction.
    int state;          // States: 0 = Running, 1 = Paused, 2 = Stopped
    int debug;          // Debug mode: 0 = Off, 1 = On
} VM;

VM* CreateVM(const int stackCapacity, const int bufferCapacity);    // Create a new VM with the specified stack and buffer capacity.
void DestroyVM(VM* vm);     // Destroy the VM and free all memory associated with it.
void RunVM(VM* vm);         // Set the VM's state to running. (NOTE: This is the default state)
void PauseVM(VM* vm);       // Pause VM interpretation.
void StopVM(VM* vm);        // Stop VM interpretation. (NOTE: This will also clear the stack and buffer)
void DumpVM(VM* vm);        // Dump the VM's state. (NOTE: This will display the stack, buffer, instruction pointer, state, and debug mode)

#endif //VM_H