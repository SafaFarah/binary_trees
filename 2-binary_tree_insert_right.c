#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child of another node.
 * @parent: a pointer to the parent node of the node to create.
 * @value: the value to put in the new node.
 * Return: a pointer to the new node, or NULL on failure.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *prenode;

	if (parent == NULL)
		return (NULL);
	if (parent->right == NULL)
	{
		parent->right = binary_tree_node(parent, value);
		return (parent->right);
	}
	prenode = parent->right;
	parent->right = binary_tree_node(parent, value);
	parent->right->right = prenode;
	prenode->parent = parent->right;
	return (parent->right);
}
