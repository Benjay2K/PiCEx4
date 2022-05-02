

//Problem 1
/*
 * Types of conversions in arithmetic expressions:
 * Null-extension: in case unsigned to longer type
 * Sign-extension: in case signed to longer type
 * Bit pattern reinterpretation: in case of signed <-> unsigned with same size
 *
 * char -> short (char unsigned, short signed, same length of 2 bytes; Sign-extension)
 * short -> long (signed to longer type; Sign-extension)
 *
 * char -> unsigned char (both consist of an area of 8 bits; Bit pattern reinterpretation)
 * short -> unsigned short (Bit pattern reinterpretation)
 * long -> unsigned long (Bit pattern reinterpretation)
 *
 * unsigned char -> short (Null-extension)
 * unsigned short -> long (Null-extension)
 *
 */