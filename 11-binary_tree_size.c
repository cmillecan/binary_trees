#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_s, right_s;

	if (!tree)
		return (0);

	left_s = binary_tree_size(tree->left);
	right_s = binary_tree_size(tree->right);

	return (left_s + right_s + 1);
}
