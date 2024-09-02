# KUtils Usage

## I/O
Copy `src/io.h` from this repository into your project and include the file wherever you need it, then you can call the following functions.

### Recieve byte (inb)
Use the `inb` function to recieve a byte from a port:
```
uint8_t result = inb(port);
```
Where `port` is the port that you want to read from. Returns the value recieved from that port.

### Recieve word (inw)
Use the `inw` function to recieve a word from a port:
```
uint16_t result = inw(port);
```
Where `port` is the port that you want to read from. Returns the value recieved from that port.

### Send byte (outb)
Use the `outb` function to send a byte to a port:
```
outb(port, val);
```
Where `port` is the port that you want to write to, and `val` is the value that you want to write to the port. No return value.

### Send byte (outb)
Use the `outw` function to send a word to a port:
```
outw(port, val);
```
Where `port` is the port that you want to write to, and `val` is the value that you want to write to the port. No return value.

## String manipulation
You'll need to copy over `src/string.h` and `src/string.c` from this repository into your project and include the file wherever you need it, then you can use these functions.

### ku_strlen
Get the length of a null-terminated string. Syntax:
```
int length = ku_strlen(char* str);
```
Where `str` is a `char*` to get the length of.

### ku_memcpy
Copy data from one address to another. This copies in the form of 8 bit values. If it's larger, you may need to increase `num` accordingly. Syntax:
```
ku_memcpy(dest, from, num);
```
Where `dest` is a pointer to the address to copy to, `from` is the address to copy from, and `num` is the number of bytes to copy. No return value.

### ku_strcmp
Compare two strings to see if they are the same. Syntax:
```
bool isEqual = ku_strcmp(str1, str2);
```
Returns whether or not `str1` and `str2` are the same (operands must both be null terminated `char*`s)

### ku_memset
Sets memory at address to specific value. Syntax:
```
ku_memset(addr, val, num);
```
Where `addr` is the address that you want to set a value of, `val` is the value that you want to set the address's contents to, and `num` is the number of *bytes* that you want to set. No return value.

### ku_addCharToString
Adds a character to the end of a string (possibly dangerous, beware!). Syntax:
```
ku_addCharToString(str, c);
```
Where `str` is a null-terminated `char*` and `c` is the character that you want to append. No return value. This may overwrite data that comes after it and cause UB, so avoid using this. I just added it because it has still proven useful for me.

### ku_removeLastChar
Removes the last character of a null-terminated string. Syntax:
```
ku_removeLastChar(str);
```
Where `str` is a null terminated `char*` which you want to remove the last character from (aka. the character immediately before `\0`).

### ku_reverse
Reverses a string. Syntax:
```
ku_reverse(str, len);
```
Where `str` is the string that you want to reverse the characters of, and `len` is the length of the string (use `strlen`). This doesn't return anything, but rather edit the contents of the buffer passed in.

### ku_uint64ToBinaryString
Converts a `uint64_t` to a string represented in binary. Syntax:
```
uint64ToBinaryString(num, buffer);
```
Where `num` is the number that you want to convert, and `buffer` is the address of a `char[]` large enough to hold the result. No return value.

### Converting numbers to strings
There are multiple variations of this for multiple sizes. Syntaxes:
```
ku_uint8ToString(num, str);
ku_uint16ToString(num, str);
ku_uint32ToString(num, str);
ku_uint64ToString(num, str);
```
Where `num` is the number that you wish to convert, and `str` is the address of a `char[]` large enough to hold the result. No return value.

### ku_uint64ToHexString
Converts a `uint64_t` to a hexadecimal string. Syntax:
```
ku_uint64ToHexString(num, str);
```
Where `num` is the number that you wish to convert, and `str` is the address of a `char[]` large enough to hold the result. No return value.

### ku_strcpy
Copies a string from one address to another. Syntax:
```
ku_strcpy(to, from);
```
Where `to` is the address you want to copy the string to, and `from` is the address that you want to copy from. No return value.

### ku_charToStr
Converts a character to a string. Syntax:
```
char* str = ku_charToStr(char);
```
Where `char` is the character that you want to convert. Returns a null-terminated `char*`.
