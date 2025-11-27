#pragma gnu
__asm ("pmovmskb %1, %0" : ["r00" (__m)] : ["r50" (__x)]);

/*===
Statement
    AsmStatement
        GnuExtendedAsmStatement
            StringLiteral ["\"pmovmskb %1, %0\""]
            GnuAsmOperand
            GnuAsmOperand
===*/
