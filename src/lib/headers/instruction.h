//
// Created by hrs on 24/01/24.
//

#ifndef INSTRUCTION_H
#define INSTRUCTION_H

typedef enum {
    HALT,
    PUSH,
    ADD
} InstructionCode; // Opcode
    ADD,
    OPCODE_ENUM_LENGTH  // This isn't a value opcode instruction.
} Opcode;

typedef struct {
    InstructionCode code;
    int argument_count;
} Instruction;

InstructionCode* BytecodeToOpcode(char*);
char* OpcodeToBytecode(InstructionCode);



#endif //INSTRUCTION_H