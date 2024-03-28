#include "binary_trees.h"

/**
 * binary_tree_delete - a fuction that deletes an entire tree.
 * @tree: binary tree to be deleted.
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
