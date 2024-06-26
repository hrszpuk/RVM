//
// Created by hrs on 26/01/24.
//

#ifndef BUFFER_H
#define BUFFER_H

typedef struct {
    unsigned char instruction;
    unsigned char type;
    char* arg;
} Instruction;

typedef struct {
    int count;
    int capacity;
    Instruction* instructions;
} InstructionBuffer;

InstructionBuffer* CreateBuffer(int capacity); // Create a new buffer with the specified capacity.
void DestroyBuffer(InstructionBuffer* buffer); // Destroy the buffer and free all memory associated with it.

Instruction GetBufferData(const InstructionBuffer* buffer, int index); // Get the data at the specified index.
void SetBufferData(const InstructionBuffer* buffer, int index, Instruction element); // Set the data at the specified index.
void AddBufferData(InstructionBuffer* buffer, Instruction element); // Add data to the end of the buffer.
void RemoveBufferData(const InstructionBuffer* buffer, int index); // Remove data from the buffer at the specified index.
void RemoveAllBufferData(InstructionBuffer* buffer); // Remove all data from the buffer.
void ClearBufferData(InstructionBuffer* buffer); // Clear the buffer and free the memory associated with it's data.

Instruction CreateInstruction(unsigned char opcode, char* arg, unsigned char type);
void DestroyInstruction(Instruction instruction);

#endif //BUFFER_H
