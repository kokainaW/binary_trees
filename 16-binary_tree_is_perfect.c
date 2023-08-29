#include "binary_trees.h"

/**
 * compare_depth - It compares size
 *
 * @tree: A pointer to the root
 * Return: The size
 */
int compare_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	else
		return (compare_depth(tree->left) + 1 + compare_depth(tree->right));
}

/**
 * binary_tree_is_perfect - The function that checks if a binary tree is perfect
 *
 * @tree: A pointer to the root node of the tree to check
 * Return: Zero 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int h_left = 0, h_right = 0;

	if (!tree)
		return (0);

	if (tree && (!tree->left && !tree->right))
		return (1);

	h_left = compare_depth(tree->left);
	h_right = compare_depth(tree->right);

	if ((h_left - h_right) == 0)
		return (1);

	return (0);
}
