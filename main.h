//
// BCM283x SMI interface 
// Derived from Documentation
// GVL 15-Oct-2014 
//
#ifndef MAIN__HEADER
#define MAIN__HEADER


#include <stdint.h>

void setup_io();
void restore_io();
int set_pio_timing(int p);
/*
void write16(uint32_t address,uint16_t data);
uint16_t read16(uint32_t address);
void write8(uint32_t address,uint16_t data);
uint16_t read8(uint32_t address);
*/


void cpu_pulse_reset(void);
void m68ki_int_ack(uint8_t int_level);
int cpu_irq_ack(int level);
unsigned int  m68k_read_memory_8(unsigned int address);
unsigned int  m68k_read_memory_16(unsigned int address);
unsigned int  m68k_read_memory_32(unsigned int address);
void m68k_write_memory_8(unsigned int address, unsigned int value);
void m68k_write_memory_16(unsigned int address, unsigned int value);
void m68k_write_memory_32(unsigned int address, unsigned int value);



#endif /* MAIN__HEADER */

