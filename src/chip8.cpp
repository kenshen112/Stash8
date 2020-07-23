#include "chip8.h"

Chip8::Chip8()
{

}

void Chip8::init()
{

    PC = 0x200; // current opcode. Actual Opcodes start at 0x200 and go as far as 0xFFF in memory no lower no higer
    I = 0;
    opcode = 0;

    for (int i = 0; i < 16; i++) // Clear all registers
    {
        vRegs[i] = 0;
    }

    for (int i = 0; i < 4096; i++) // Clear Stack
    {
        stack[i] = 0;
    }

    for (int i = 0; i < 2048; i++)
    {
        display[i] = 0; // Clear screen to black
    }

}


void Chip8::execute(uint8_t opcode)
{

    switch(opcode)
    {

    }

}


Chip8::~Chip8()
{

}