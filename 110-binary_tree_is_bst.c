#include "binary_trees.h"

/**
 * isBST - It compares nodes in order to check if a given
 * @tree: A pointer to the root node of the tree to check
 * @min: The min value
 * @max: The max value
 * Return: 1 if success, 0 otherwise
 */
int isBST(const binary_tree_t *tree, int min, int max)
{
	if (tree == NULL)
		return (1);

	if (tree->n < min || tree->n > max)
		return (0);

	return (
		isBST(tree->left, min, tree->n - 1) &&
		isBST(tree->right, tree->n + 1, max)
	);
}

/**
 * binary_tree_is_bst-It checks if a binary tree is a valid Binary Search tree
 * @tree: A pointer to the root node of the tree to check
 * Return: 1 if success, 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (isBST(tree, INT_MIN, INT_MAX));
}
