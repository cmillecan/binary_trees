#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree
 * Return: 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf_left, leaf_right;

	if (!tree)
		return (0);

	if (!tree->left || !tree->right)
		return (1);

	leaf_left = binary_tree_leaves(tree->left);
	leaf_right = binary_tree_leaves(tree->right);

	return (leaf_left + leaf_right);
}
