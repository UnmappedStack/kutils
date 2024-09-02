/* Header for string.c (kernel space-only string utilities)
 * Copyright (C) 2024 Jake Steinburger under the MIT license. See the GitHub repo for more information.
 */


#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifndef STRING_H
#define STRING_H

void ku_memcpy(char* dest, char* from, size_t n);
void ku_uint64_to_binary_string(uint64_t num, char *buf);
size_t ku_strlen(const char* str);
void ku_addCharToString(char *str, char c);
void ku_removeLastChar(char *str);
void ku_reverse(char str[], int length);
void ku_uint8_to_str(uint8_t num, char* buffer);
void ku_strcpy(char* dest, const char* src);
int ku_compareDifferentLengths(const char *longer, const char *shorter); 
char* ku_charToStr(char character);
void ku_uint16_to_string(uint16_t num, char *str);
void ku_uint32_to_string(uint32_t num, char *str);
void ku_uint64_to_string(uint64_t num, char *str);
void ku_memset(uint8_t *array, uint8_t value, size_t size);
void ku_uint32_to_hex_string(uint32_t num, char *str);
void ku_uint64_to_hex_string(uint64_t num, char *str);
bool ku_strcmp(const char* str1, const char* str2); 

#endif

