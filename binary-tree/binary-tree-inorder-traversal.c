/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
void inorder(struct TreeNode* node, int* result, int* size){
    if(node==NULL){
        return;
    }
    inorder(node->left, result,size);
    result[(*size)++]=node->val;
    inorder(node->right,result,size);
}

int* inorderTraversal(struct TreeNode* root, int* returnsize){
    int* result=(int*)malloc(100 * sizeof(int));
    *returnsize=0;
    
    inorder(root,result,returnsize);
    return result;
}