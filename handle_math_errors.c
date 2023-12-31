#include "monty.h"
#include "utility.h"

/**
 * sub_error - Handle error for sub opcode
 *
 * @memory: Stores memory address that was allocated
 * @line_number: Current line in the file
 *
 * Return: void (Nothing)
 */
void sub_error(memory_record *memory, u_int line_number)
{
	/* number of node is less than 2, so can't subtract */
	if (getMin() != MIN_NODE)
	{
		dprintf(STDERR_FILENO, "L%d: can't sub, stack too short\n", line_number);
		free_records(memory), deleteTokens();
		exit(EXIT_FAILURE);
	}
}

/**
 * div_error - Handle error for div opcode
 *
 * @memory: Stores memory address that was allocated
 * @line_number: Current line in the file
 *
 * Return: void (Nothing)
 */
void div_error(memory_record *memory, u_int line_number)
{
	/* number of node is less than 2, so can't divide */
	if (getMin() != MIN_NODE)
	{
		dprintf(STDERR_FILENO, "L%d: can't div, stack too short\n", line_number);
		free_records(memory), deleteTokens();
		exit(EXIT_FAILURE);
	}

	if (!reference.tail->n)
	{
		dprintf(STDERR_FILENO, "L%d: division by zero\n", line_number);
		free_records(memory), deleteTokens();
		exit(EXIT_FAILURE);
	}
}

/**
 * mul_error - Handle error for mul opcode
 *
 * @memory: Stores memory address that was allocated
 * @line_number: Current line in the file
 *
 * Return: void (Nothing)
 */
void mul_error(memory_record *memory, u_int line_number)
{
	/* number of node is less than 2, so can't multiply */
	if (getMin() != MIN_NODE)
	{
		dprintf(STDERR_FILENO, "L%d: can't mul, stack too short\n", line_number);
		free_records(memory), deleteTokens();
		exit(EXIT_FAILURE);
	}
}

/**
 * mod_error - Handle error for mod opcode
 *
 * @memory: Stores memory address that was allocated
 * @line_number: Current line in the file
 *
 * Return: void (Nothing)
 */
void mod_error(memory_record *memory, u_int line_number)
{
	/* number of node is less than 2, so can't divide */
	if (getMin() != MIN_NODE)
	{
		dprintf(STDERR_FILENO, "L%d: can't mod, stack too short\n", line_number);
		free_records(memory), deleteTokens();
		exit(EXIT_FAILURE);
	}

	if (!reference.tail->n)
	{
		dprintf(STDERR_FILENO, "L%d: division by zero\n", line_number);
		free_records(memory), deleteTokens();
		exit(EXIT_FAILURE);
	}
}

/**
 * add_error - Handle error for add opcode
 *
 * @memory: Stores memory address that was allocated
 * @line_number: Current line in the file
 *
 * Return: void (Nothing)
 */
void add_error(memory_record *memory, u_int line_number)
{
	/* number of node is less than 2, so can't swap */
	if (getMin() != MIN_NODE)
	{
		dprintf(STDERR_FILENO, "L%d: can't add, stack too short\n", line_number);
		free_records(memory), deleteTokens();
		exit(EXIT_FAILURE);
	}
}
