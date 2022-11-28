#ifndef PROJECT_H_INCLUDED
#define PROJECT_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#define uint8 char
#include"projectt.c"

_Bool SDB_isfull(void);
uint8 SDB_getused(void);
_Bool SDB_addentry(uint8 id,uint8 year , uint8 *subjects , uint8 *grades);
void SDB_deleteentry(uint8 id);
_Bool SDB_readentry(uint8 id, uint8 *year , uint8 *subjects , uint8 *grades);
void SDB_getlist(int *count, uint8* list);
_Bool SDB_isIDexist(uint8 id);
#endif // PROJECT_H_INCLUDED
