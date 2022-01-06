/*********Begin**********  和  **********End**********不可删除
在*********Begin*********  和  ********End********之间作答
要求使用指定的类名、对象名、变量名、函数名等，少写漏写不得分

已知二叉树采用二叉链表存储表示，
请实现递归后序遍历二叉树的算法void postOrder( Node *t ) const;。
提示，求解思想为：若二叉树为空，则算法结束，否则执行：
?	后序遍历左子树
?	后序遍历右子树
?	访问根结点

二叉树的二叉链表的表示如下:
template <class elemType> 
class BinaryLinkList{
private:
    struct Node {  									// 二叉链表结点
        Node  *left , *right ;							// 指向左、右孩子的指针
        elemType data;								// 结点的数据域
        Node() : left(NULL), right(NULL) { }					// 无参构造函数
        Node(elemType value, Node *l = NULL, Node * r =NULL ){
            data=value; left=l; right=r; 
        }
        ~Node() {} 
    };
    Node * root;									// 私有，指向二叉树的根结点
    int size( Node *t ) const; 							// 私有，二叉树的结点总数
    int height( Node *t ) const; 							// 私有，二叉树的高度
    int leafNum(Node *t )const; 							// 私有，二叉树的叶子数
    void preOrder( Node *t ) const;							// 私有，递归前序遍历
    void inOrder( Node *t ) const;							// 私有，递归中序遍历
    void postOrder( Node *t ) const;						// 私有，递归后序遍历
……
public: 
    BinaryLinkList() : root( NULL) {}						// 构造空二叉树
    ~BinaryLinkList(){ clear(); }				
    bool empty () const{ return root == NULL; }					// 公有，判空
    void clear() {if (root) clear(root); root = NULL;}				// 公有，清空
    int size() const { return size(root);}						// 公有，求结点总数
    int height() const { return height(root); }					// 公有，二叉树的高度
    int leafNum()const{ return leafNum(root); }					// 公有，二叉树的叶子数
    void preOrderTraverse() const{ if(root) preOrder(root); }			// 公有，前序遍历 
    void inOrderTraverse() const { if(root) inOrder(root); }			// 公有，中序遍历
    void postOrderTraverse() const{ if(root) postOrder(root);}			// 公有，后序遍历
……
    } 
};
*/
/***************begin***************/

template <class elemType>
void BinaryLinkList<elemType>::postOrder(Node* t) const {
    if (t) {
        postOrder(t->left); 		// 后序遍历左子树
        postOrder(t->right); 		// 后序遍历右子树
        cout << t->data << ' '; 	// 访问当前结点
    }
}

/****************end****************/
