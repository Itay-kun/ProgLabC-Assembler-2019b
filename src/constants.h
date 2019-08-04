/*
 * constants.h
 *
 *  Created on: august, 2019
 */

#ifndef CONSTANTS_H
#define CONSTANTS_H

/* Size constants */
#define MAX_MEMORY_SIZE 4096 //UPDATED
#define MAX_FILE_ZISE 1000
#define MEMORY_START 100 //UPDATED
#define LINE_MAX_LEN 81 /* Extra one for \0 */ //UPDATED
#define MAX_ARG_COUNT ((LINE_MAX_LEN - 3)/2 + 1) /* Max arg count assuming shortest command is 3 letters and shortest args are at least 1 character */
#define DECODE_SIZE 2 //UPDATED
#define OPERAND_SIZE 2 //UPDATED
#define RED_OPERAND_SIZE 6 /*what is red operand?*/
#define OPCODE_SIZE 4 //UPDATED
#define UNUSED_SIZE 4 //UPDATED
#define VALUE_SIZE 13 /*What Is It?*/
#define OPCODES_AMOUNT 16 //UPDATED
#define WORD_SIZE 14 //UPDATED
#define REG_AMOUNT 8 //UPDATED
#define EXT_LEN 4 /* Length of the extension file name. */
#define INPUT_EXT ".as" //UPDATED
#define OBJ_EXT ".ob" //UPDATED
#define EXT_EXT ".ext" //UPDATED
#define ENT_EXT ".ent" //UPDATED

/*
 *	The three types of encode:
 *	absolute, external and relocatable.
 */
enum ENCODE {
	ABS = 0, EXT, RLC
}; //UPDATED

/*
 * The four types of addressing:
 * immediate, direct, random and direct-register.
 */
typedef enum ADDRESSING {
	IMD = 0, DIR, RND, REG
} addressing;
/* Arguments amount enums */
enum NUM_OF_ARGS {
	NO_ARGS = 0, ONE_ARG, TWO_ARGS
}; //UPDATED

/* Registers enum table */
typedef enum {
	r0, r1, r2, r3, r4, r5, r6, r7
} reg; //UPDATED

/* Opcodes enum table */
typedef enum {
	mov,
	cmp,
	add,
	sub,
	not,
	clr,
	lea,
	inc,
	dec,
	jmp,
	bne,
	red,
	prt,
	jsr,
	rts,
	stop
} OPCODE; /* !Retain the current order! see info in inst_type */ //UPDATED

typedef enum {
	EMPTY, COMMENT, INSTUCTION, ACTION, MACRO
} sentence_type; //UPDATED //Added 1 more sentance type
typedef enum {
	DOT_DATA = OPCODES_AMOUNT, DOT_STRING, DOT_EXTERN, DOT_ENTRY
} inst_type; /* The order this enum and the OPCODE must stay identical to the order of the "ops" array in the getLine function so the index will match the enums values*/

/* String constants */
#define NEWLINE '\n'
#define COMMENT_SIGN ';'
#define LABEL_DELIM ':'
#define STR_DELIM '"'
#define REG_FLAG 'r'
#define IMD_FLAG '#'
#define RND_FLAG '*'
#define ARG_SEPERATOR ','
#define SPACE ' '

/* Flag status */
typedef enum {
	ASM_SUCCESS, ASM_FAILURE
} FLAG; /*if i'm correct, this is PSW in our code*/

typedef enum {
	false = 0, true = 1
} bool;

#endif
