
#include <iostream>
#include "clsMyString.h"

using namespace std;

int main()
{
    cout << "\n\n\t\t\t\t\t\t Undo/Redo Project\n\n";

    clsMyString S1;
    cout << "\nS1 = " << S1.Value << "\n";

    S1.SetValue("Mohammed");
    cout << "\nS1 = " << S1.Value << "\n";

    S1.SetValue("Mohammed2");
    cout << "\nS1 = " << S1.Value << "\n";


    S1.SetValue("Mohammed3");
    cout << "\nS1 = " << S1.Value << "\n";

    cout << "\n\nUndo: ";
    cout << "\n_________\n";

    S1.Undo();
    cout << "\nS1 after undo = " << S1.Value << "\n";

    S1.Undo();
    cout << "\nS1 after undo = " << S1.Value << "\n";

    S1.Undo();
    cout << "\nS1 after undo = " << S1.Value << "\n";

    cout << "\n\nRedo: ";
    cout << "\n_________\n";

    S1.Redo();
    cout << "\nS1 after redo = " << S1.Value << "\n";

    S1.Redo();
    cout << "\nS1 after redo = " << S1.Value << "\n";

    S1.Redo();
    cout << "\nS1 after redo = " << S1.Value << "\n";
}

