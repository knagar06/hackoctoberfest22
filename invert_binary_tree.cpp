TreeNode* invertTree(TreeNode* root) {
  if(root == NULL)
    return NULL;
  
  TreeNode *left = root->left;
  
  root->left = root->right;
  root->right = left;
  
  invertTree(root->left);
  invertTree(root->right);
  
  return root;
}
