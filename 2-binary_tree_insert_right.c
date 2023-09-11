#include "binary_trees.h"

/**
 * *binary_tree_insert_right - function for create a new node for a tree at
 *  right
 *
 * @parent: pointer on parent's adress
 * @value: value in new node
 *
 * Return: new node or null on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = binary_tree_node(parent, value);

	if (parent == NULL)
		return (NULL);

	if (new_node == NULL)
		return (NULL);

	new_node->left = parent->left;

	if (parent->left != NULL)
		parent->left->parent = new_node;

	parent->left = new_node;
	new_node->parent = parent;

	return (new_node);
}
