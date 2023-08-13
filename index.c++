#include <iostream>
#include <stdio.h>

using namespace std;

class Node
{
public:
    int roll_no;
    string name;
    float marks;
    float per;
    Node *next_add;
};

class linked_list
{
public:

    Node *head = NULL;
    void Insert()
    {
        int r;
        string n;
        float m;
        cout << "\n\n Enter your roll no.";
        cin >> r;
        cout << "\n\n enter your name";
        cin >> n;
        cout << "\n\n enter your marks";
        cin >> m;
        Node *new_node = new Node;
        new_node->roll_no = r;
        new_node->name = n;
        new_node->marks = m;
        new_node->per = m / 100 * 100;
        new_node->next_add = NULL;
        if (head == NULL)
        {
            head = new_node;
        }
        else
        {
            Node *ptr = head;
            while (ptr->next_add != NULL)
            {
                ptr = ptr->next_add;
            }
            ptr->next_add = new_node;
        }
        cout << ("\n\n New Node Inserted Successfully...");
    }

    void Search()
    {
        if (head == NULL)
        {
            cout << ("\n\n Linked List is Empty...");
        }
        else
        {
            int r, found = 0;
            cout << ("\n\n Enter Roll No. for search");
            cin >> r;
            Node *ptr = head;
            while (ptr != NULL)
            {
                if (r == ptr->roll_no)
                {
                    cout << "\n\n Roll No. : " << ptr->roll_no;
                    cout << "\n\n name : " << ptr->name;
                    cout << "\n\n marks : " << ptr->marks;
                    cout << "\n\n per :" << ptr->per;
                    found++;
                }
                ptr = ptr->next_add;
            }
            if (found == 0)
            {
                cout << "\n\n Search Roll No. <<r<<can't found... ";
            }
        }
    }

    void count()
    {
        if (head == NULL)
        {
            cout << "\n\n Linked List is non empty...";
        }
        else
        {
            int c = 0;

            Node *ptr = head;
            while (ptr != NULL)
            {
                // int c=0;
                c++;
                ptr = ptr->next_add;
            }
            cout << "\n\n Total No.of Nodes :" << c;
        }
    }

    void update()
    {

        if (head == NULL)
        {
            cout << ("\n\n Linked List is Empty...");
        }
        else
        {
            int r, found = 0;
            
            cout << ("\n\n Enter Roll No. for updation");
            cin >> r;
            Node *ptr = head;
            while (ptr != NULL)
            {
                if (r == ptr->roll_no)
                {
                    // float marks;
                    cout << "\n\n Enter your new roll no.";
                    cin >> ptr->roll_no;
                    cout << "\n\n enter your name";
                    cin >> ptr->name;
                    cout << "\n\n enter your marks";
                     cin >> ptr->marks;
                    ptr->per = marks/100 * 100;
                    cout << "Record update successfully";
                    found++;
                }
                ptr = ptr->next_add;
            }
            if (found == 0)
            {
                cout << "\n\n Update Roll No. <<r<<can't found... ";
            }
        }
    }

    void Del()
    {
        if (head == NULL)
        {
            cout << ("\n\n Linked List is Empty...");
        }
        else
        {
            int r, found = 0;
            cout << ("\n\n Enter Roll no. for deletion");
            cin >> r;

            if (r == head->roll_no)
            {
                Node *ptr = head;
                head = head->next_add;
                cout << "\n\n Record deleted successfully";
                found++;
                delete ptr;
            }
            else
            {
                Node *pre = head;
                Node *ptr = head->next_add;
                while (ptr != NULL)
                {
                    if((r=ptr->roll_no))
                    {
                        pre->next_add = ptr->next_add;
                        cout << "\n\n Record deleted successfully";
                        found++;
                        delete ptr;
                        break;
                    }
                    pre = ptr;
                    ptr = ptr->next_add;
                }
            }
            if (found == 0)
            {
                cout << "\n\n Delete Roll no. " << r << "can't found...";
            }
        }
    }

    void show()
    {

        if (head == NULL)
        {
            cout << ("\n\n Linked List is Empty...");
        }
        else
        {

            Node *ptr = head;
            while (ptr != NULL)
            {

                cout << "\n\n Roll No. : " << ptr->roll_no;
                cout << "\n\n name : " << ptr->name;
                cout << "\n\n marks : " << ptr->marks;
                cout << "\n\n per :" << ptr->per;
                ptr = ptr->next_add;
            }
        }
    }
};

int main()
{
    linked_list obj;
p:
    system("cls");
    int choice;
    cout << "\n\n 1. Insert Record";
    cout << "\n\n 2. Search Record";
    cout << "\n\n 3. count Nodes";
    cout << "\n\n 4. Update Record";
    cout << "\n\n 5. Delete Record";
    cout << "\n\n 6. Show All Record";
    cout << "\n\n 7. Exit";
    cout << "\n\n\n Your choice : ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        system("cls");
        obj.Insert();
        break;
    case 2:
        system("cls");
        obj.Search();
        break;

    case 3:
        system("cls");
        obj.count();
        break;
    case 4:
        system("cls");
        obj.update();
        break;
    case 5:
        system("cls");
        obj.Del();
        break;
    case 6:
        system("cls");
        break;
        obj.show();

    case 7:
        exit(0);

    default:
        cout << "\n\n\n Invalid Choice...Please Try Again...";
    }
    return 0;
    goto p;
}
