#include "Ejercicio02.h"


using namespace std;

vector<string>* Ejercicio02::findRepeatedDnaSequences(Node<char>* head)
{
    unordered_map<string, int> sequenceCount;
    vector<string>* repeatedSequences = new vector<string>();

    Node<char>* current = head;
    string sequence = "";

    while (current != nullptr)
    {
        sequence.push_back(current->value);

        if (sequence.length() == 10)
        {
            sequenceCount[sequence]++;
            sequence.erase(0, 1);
        }

        current = current->next;
    }

    for (const auto& pair : sequenceCount)
    {
        if (pair.second > 1)
        {
            repeatedSequences->push_back(pair.first);
        }
    }

    return repeatedSequences;
}
