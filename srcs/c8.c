#include "c8.h"
#include <stdint.h>
#include <string.h>
#include <sys/types.h>

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

void init_memory(c8 *chip);
void free_mem(c8 *chip);

int main()
{
  c8 *chip = calloc(sizeof(c8),1);
  init_memory(chip);

  free_mem(chip);
}

/* Function to initialize CHIP-8 */

void init_memory(c8 *chip)
{
  /* Memory initialization */
  chip->memory = calloc(MEMORY,1);

  /* Set font bytes at 0x50 address*/
  init_font(chip->memory);

  int  j =1;
  for (int i = 0x50; i < (0x50 + 80); i++)
  {
    printf("%i ",chip->memory[i]);
    if (j % 5 == 0)
      printf("\n");
    j++;
  }

  chip->I = 0x200;
}

void free_mem(c8 *chip)
{
  free(chip->memory);
  free(chip);
}
