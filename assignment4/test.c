# include "stack.h"
# include <stdio.h>

int main(void)
{
	stack *s = newStack(20, true);
	uint16_t num = 32;
	valBits(num);
	/*
	// for each bit (16 bits -> 2 bytes * 8 bits -> 16 bits)
	for (uint32_t i = 0; i < sizeof(uint16_t) * 8; i += 1)
	{
		bool val = (num & (0x1 << (i % 16))) >> (i % 16);
		printf("val, %u: %u\n", i, val);
	}*/
	
	return 0;
}
