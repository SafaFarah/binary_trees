#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child of another node.
 * @parent: a pointer to the parent node of the node to create.
 * @value: the value to put in the new node.
 * Return: a pointer to the new node, or NULL on failure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *prenode;

	if (parent == NULL)
		return (NULL);
	if (parent->left == NULL)
	{
		parent->left = binary_tree_node(parent, value);
		return (parent->left);
	}
	prenode = parent->left;
	parent->left = binary_tree_node(parent, value);
	parent->left->left = prenode;
	prenode->parent = parent->left;
	return (parent->left);
}
