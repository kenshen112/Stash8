#pragma once
#include <iostream>
#include <cstdint>

class Chip8
{

    private:
        uint8_t stack[4096];
        uint8_t romBuff[4096];
        uint8_t display[2048];
        uint8_t vRegs[16];
        uint8_t opcode;
        uint16_t I;
        uint16_t PC;

    public:
        Chip8();
        void init();
        void execute(uint8_t opcode);
        ~Chip8();
    


};