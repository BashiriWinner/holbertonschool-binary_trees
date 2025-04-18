#include "binary_trees.h"
#include <stddef.h>
/**
 * binary_tree_delete -  function that deletes an entire binary tree
 * @tree: is a pointer to the root node of the tree to delete
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);
	free(tree);
}
