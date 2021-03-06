// binarySearchTree.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

struct node
{
	int data;
	node* left;
	node* right;
};

struct node* newnode(int Data)
{
	node* newnode = new node();
	newnode->data = Data;
	newnode->left = 0;
	newnode->right = 0;
	return newnode;
}

void printPreorder(node* node)
{
	if (node == 0)
	{
		return;
	}
	else

	cout << node->data ; //print data
	printPreorder(node->left);
	printPreorder(node->right);

}

void deepCopy(node* root)
{
	if (root == 0)
	{
		return;
	}
	else

	cout << root->data;
	deepCopy(root->left);
	deepCopy(root->right);
}


int main()
{
	node* root = newnode(1);
	root->left = newnode(2);
	root->right = newnode(3);
	root->left->left = newnode(4);
	root->left->right = newnode(5);

	printPreorder(root);

	deepCopy(root);

	getchar();

    return 0;
}

