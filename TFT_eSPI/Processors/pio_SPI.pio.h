// -------------------------------------------------- //
// This file is autogenerated by pioasm; do not edit! //
// 8 + 16 bit SPI - no auto colour conversion         //
// -------------------------------------------------- //

#pragma once

#if !PICO_NO_HARDWARE
#include "hardware/pio.h"
#endif

// ------ //
// tft_io //
// ------ //

#define tft_io_wrap_target 27
#define tft_io_wrap 31

#define tft_io_offset_start_8 0u
#define tft_io_offset_set_addr_window 3u
#define tft_io_offset_block_fill 17u
#define tft_io_offset_start_tx 27u

static const uint16_t tft_io_program_instructions[] = {
    0x90a0, //  0: pull   block           side 0     
    0x6019, //  1: out    pins, 25                   
    0x181e, //  2: jmp    30              side 1     
    0xf022, //  3: set    x, 2            side 0     
    0xe000, //  4: set    pins, 0                    
    0x90a0, //  5: pull   block           side 0     
    0x6019, //  6: out    pins, 25                   
    0xb842, //  7: nop                    side 1     
    0x7001, //  8: out    pins, 1         side 0     
    0x18e8, //  9: jmp    !osre, 8        side 1     
    0xf001, // 10: set    pins, 1         side 0     
    0x003b, // 11: jmp    !x, 27                     
    0x80a0, // 12: pull   block                      
    0x7001, // 13: out    pins, 1         side 0     
    0x18ed, // 14: jmp    !osre, 13       side 1     
    0x1044, // 15: jmp    x--, 4          side 0     
    0x001b, // 16: jmp    27                         
    0x90a0, // 17: pull   block           side 0     
    0xa027, // 18: mov    x, osr                     
    0x80a0, // 19: pull   block                      
    0xa047, // 20: mov    y, osr                     
    0xb0e1, // 21: mov    osr, x          side 0     
    0x7011, // 22: out    pins, 17        side 0     
    0xb842, // 23: nop                    side 1     
    0x7001, // 24: out    pins, 1         side 0     
    0x18f8, // 25: jmp    !osre, 24       side 1     
    0x1095, // 26: jmp    y--, 21         side 0     
            //     .wrap_target
    0x90a0, // 27: pull   block           side 0     
    0x7011, // 28: out    pins, 17        side 0     
    0xb842, // 29: nop                    side 1     
    0x7001, // 30: out    pins, 1         side 0     
    0x18fe, // 31: jmp    !osre, 30       side 1     
            //     .wrap
};

#if !PICO_NO_HARDWARE
static const struct pio_program tft_io_program = {
    .instructions = tft_io_program_instructions,
    .length = 32,
    .origin = -1,
};

static inline pio_sm_config tft_io_program_get_default_config(uint offset) {
    pio_sm_config c = pio_get_default_sm_config();
    sm_config_set_wrap(&c, offset + tft_io_wrap_target, offset + tft_io_wrap);
    sm_config_set_sideset(&c, 2, true, false);
    return c;
}
#endif
