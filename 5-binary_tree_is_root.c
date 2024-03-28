#include "binary_trees.h"

/**
 * binary_tree_is_root - a function that checks if a node is root.
 * @node: node to be checked
 *
 * Return: returns 1 if node is root, otherwise 0,
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node != NULL)
	{
		if (node->parent == NULL)
			return (1);
	}
	return (0);
}
