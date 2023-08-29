#include "binary_trees.h"

/**
 * binary_tree_postorder-It goes through binary tree using post-order traversal
 *
 * @tree: A pointer to the root node of the tree to traverse
 * @func: A pointer to a function to call for each node.
 * The value in the node must be passed as a parameter to this function.
 * If tree or func is NULL, do nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!(tree) || !(func))
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
