#ifndef C8_H
#define C8_H

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define WIDTH 64
#define HEIGHT 32
#define MEMORY 4096 /* 4 * 1024 = 4096 bytes */
#define INDEX


typedef struct C8
{
  uint8_t *memory;
  uint16_t I; /* index register called “I” which is used to point at locations in memory */
  uint16_t stack;
  uint8_t delay_timer;
  uint8_t sound_timer;
  unsigned char v_registers[16];


}c8;

void init_font(uint8_t *memory);

#endif // !C8_H
