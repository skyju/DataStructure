#ifndef _BIN_TREE_
#define _BIN_TREE_

#include <stdio.h>
#include <stdlib.h>

typedef struct BinTreeNodeType
{
	int data;
	int visited;

	struct BinTreeNodeType *pLeftChild;
	struct BinTreeNodeType *pRightChild;
} BinTreeNode;

typedef struct BinTreeType
{
	BinTreeNode *pRootNode;
} BinTree;

BinTree *makeBinTree(BinTreeNode rootNode);
BinTreeNode *getRootNodeBT(BinTree *pBinTree);
BinTreeNode *insertLeftChildNodeBT(BinTreeNode *pParentNode, BinTreeNode element);
BinTreeNode *insertRightChildNodeBT(BinTreeNode *pParentNode, BinTreeNode element);
BinTreeNode *getLeftChildNodeBT(BinTreeNode *pNode);
BinTreeNode *getRightChildNodeBT(BinTreeNode *pNode);
void deleteBinTree(BinTree *pBinTree);
void deleteBinTreeNode(BinTreeNode *pNode);

// 순회 printing
void SearchPreorder(BinTree *pBinTree);
void PreOrderRecursive(BinTreeNode *pNode);
void SearchInorder(BinTree *pBinTree);
void InOrderRecursive(BinTreeNode *pNode);
void SearchPostorder(BinTree *pBinTree);
void PostOrderRecursive(BinTreeNode *pNode);

// 추가
BinTreeNode *getParentNodeBT(BinTreeNode *pRootNode, BinTreeNode element);
BinTreeNode *searchBinaryTree(BinTree *binTree, BinTreeNode element);
int insertBinaryTree(BinTree *binTree, BinTreeNode element);
int deleteBinaryTree(BinTree *binTree, BinTreeNode element);

#endif

#ifndef _COMMON_TREE_DEF_
#define _COMMON_TREE_DEF_

#define TRUE 1
#define FALSE 0

#endif