#include "binary_trees.h"

/**
 * binary_tree_insert_left - a function that inserts a node as left node.
 * @parent: the parent node.
 * @value: value in the node.
 *
 * Return: a pointer to created node.
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
