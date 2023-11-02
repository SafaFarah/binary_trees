#include "binary_trees.h"

/**
 * binary_tree_is_perfect - a function that checks if a binary tree is perfect.
 *
 * @tree:  a pointer to the root node of the tree to check
 * Return: 1 if perfect , or 0 if tree is NULL.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	return (binary_tree_height(tree));
}
/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: height or 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0;
	size_t height_right = 0;

	if (!tree)
		return (0);
	if (tree->left)
		height_left = 1 + binary_tree_height(tree->left);
	if (tree->right)
		height_right = 1 + binary_tree_height(tree->right);
	if (height_left == height_right)
		return (1);
	return (0);
}
