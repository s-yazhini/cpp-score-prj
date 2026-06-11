#include <iostream>
using namespace std;

int main()
{
    int scores[10];
    int count = 0;
    int choice, score, pos;

    do
    {
        cout << "\n1. Add Score";
        cout << "\n2. Remove Score";
        cout << "\n3. Display Scores";
        cout << "\n4. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                if(count < 10)
                {
                    cout << "Enter score: ";
                    cin >> scores[count];
                    count++;
                }
                else
                {
                    cout << "Score list is full!\n";
                }
                break;

            case 2:
                if(count == 0)
                {
                    cout << "No scores to remove!\n";
                }
                else
                {
                    cout << "Enter position to remove (1-" << count << "): ";
                    cin >> pos;

                    if(pos >= 1 && pos <= count)
                    {
                        for(int i = pos - 1; i < count - 1; i++)
                        {
                            scores[i] = scores[i + 1];
                        }
                        count--;
                        cout << "Score removed.\n";
                    }
                    else
                    {
                        cout << "Invalid position!\n";
                    }
                }
                break;

            case 3:
                cout << "Scores: ";
                for(int i = 0; i < count; i++)
                {
                    cout << scores[i] << " ";
                }
                cout << endl;
                break;

            case 4:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while(choice != 4);

    return 0;
}
