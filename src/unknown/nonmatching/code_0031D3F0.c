#include <sys/types.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

struct unk_000645C0 {
    int32_t unk0;
    uint8_t unk4;
};

int func_0031D3F0(int32_t);


// NON-MATCHING:

// TARGET                                                   CURRENT (430)                              
// 0:    mflr    r0                                         0:    mflr    r0                           
// 4:    stw     r29,-0xc(r1)                        |      4:    stmw    r29,-0xc(r1)                 
// 8:    mr      r29,r3                                     8:    mr      r29,r3                       
// c:    stw     r0,8(r1)                                   c:    stw     r0,8(r1)                     
// 10:    stwu    r1,-0x50(r1)                              10:    stwu    r1,-0x50(r1)                
// 14:    nop                                               14:    nop                                 
// 18:    nop                                               18:    nop                                 
// 1c:    lwz     r3,0(r3)                                  1c:    lwz     r3,0(r3)                    
// 20:    bl      func_0031D3F0                      i      20:    bl      _func_0031D3F0              
// 24:    li      r0,0                                      24:    li      r0,0                        
// 28:    addi    r1,r1,0x50                                28:    addi    r1,r1,0x50                  
// 2c:    stb     r0,4(r29)                                 2c:    stb     r0,4(r29)                   
// 30:    stw     r0,0(r29)                                 30:    stw     r0,0(r29)                   
// 34:    lwz     r0,8(r1)                           |      34:    lmw     r29,-0xc(r1)                
// 38:    lwz     r29,-0xc(r1)                       r      38:    lwz     r0,8(r1)                    
// 3c:    mtlr    r0                                        3c:    mtlr    r0                          
// 40:    blr                                               40:    blr                                 

// ...so close!

int func_000645C0(struct unk_000645C0* arg0) {
    int var0 = func_0031D3F0(arg0->unk0);
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    return var0;
}