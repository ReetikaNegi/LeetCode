/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool checkBST(struct TreeNode* root,long long low,long long high) {
    if(root==NULL)
        return true;
        
    if(root->val<=low || root->val>=high)
        return false;
    
    return checkBST(root->left,low,root->val)&&checkBST(root->right,root->val,high);
    
}
bool isValidBST(struct TreeNode* root){
    return checkBST(root,LLONG_MIN,LLONG_MAX);
}
