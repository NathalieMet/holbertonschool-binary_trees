#include "binary_trees.h"

/**
 * binary_tree_insert_left - function for create a new node for a tree at left
 *
 * @parent: pointer on parent's adress
 * @value: value in new node
 *
 * Return: new node or null on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = binary_tree_node(parent, value);

	if (parent == NULL)
		return (NULL);

	if (new_node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		new_node->left->parent = new_node;
	}

	parent->left = new_node;
	new_node->parent = parent;

	return (new_node);
}
