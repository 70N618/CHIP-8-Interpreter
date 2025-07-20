#include <stdint.h>
#include <stdio.h>

#define WIDTH 64
#define HEIGHT 32
#define MEMORY 4096 /* 4 * 1024 = 4096 bytes */
#define INDEX


struct C8
{
  uint16_t I; /* index register called “I” which is used to point at locations in memory */
  uint16_t stack;
  uint8_t delay_timer;
  uint8_t sound_timer;
  unsigned char v_registers[16];


} c8;

/*Fetch.
 * Should read the instruction the PC is currently pointing at from memory
 * Since an instruction is two bytes, we'll need to read 2 next bytes.
 * and combine them into a 16-bit instruction.
 *
 * Increment PC by 2.*/

/* Decode
 * CHIP-8 instructions are divided into broad categories by the first “nibble”
 * Based on the first hexa, we decide what to do.
 * */

/*Execute
 * Just directly do what the instruction should do inside each case.*/
