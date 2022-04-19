/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    vector<int> val;
public:
    
    void traverse(TreeNode* root){
        if(root==NULL) return;
        traverse(root->left);
        val.push_back(root->val);
        traverse(root->right);
        return;
    }
    
    
    int kthSmallest(TreeNode* root, int k) {
        
        traverse(root);
        return val[k-1];
        
        
    }
};