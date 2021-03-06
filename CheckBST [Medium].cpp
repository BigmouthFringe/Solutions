struct Node {
    int data;
    Node* left;
    Node* right;
}

bool checkBST(Node* root) {
    static struct Node *prev = NULL;

    if (root != NULL) {
        if (!checkBST(root->left)) { return false; }
        if (prev != NULL && root->data <= prev->data) {
            return false;
        }
        prev = root;
        return checkBST(root->right);
    }      
    return true;
}
