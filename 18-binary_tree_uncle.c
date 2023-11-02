#include "binary_trees.h"

/**
 * binary_tree_uncle -  a function that finds the uncle of a node
 * @node: a pointer to the node to find the uncle.
 * Return: pointer to the uncle node or NULL if node is NULL or no uncle.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grandpa = NULL;

	if (!node || !(node->parent) || !(node->parent->parent))
		return (NULL);
	grandpa = node->parent->parent;
	if (grandpa->left && (grandpa->left != node->parent))
		return (grandpa->left);
	else if (grandpa->right && (grandpa->right != node->parent))
		return (grandpa->right);
	return (NULL);
}
