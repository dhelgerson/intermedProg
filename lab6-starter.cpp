#include <iostream>
#include <string>
#include <vector>

using namespace std;

// function declaration
string buildEq(string eqTemplate, string tab);

int main()
{
    // vector of equation templates to test...
    vector<string> equations{
        "a + a",
        "((b - b)^2 + (b - b)^2)^1/2",
        "a + b",
        "ab + (b - b / a(a + a))",
        "(a ^ a) + (a - a + b)",
        "ab"
    };

    cout << "Welcome to the equation builder!" << endl << endl;

    // iterates through the vector
    // calls function on each vector item
    for(int i = 0; i < equations.size(); i++)
    {
        cout << "Starting equation: " << equations[i] << endl << endl;

        // builds equation
        string eq = buildEq(equations[i], "");

        cout << endl << "Equation built: " << eq << endl << endl;
    }

    return 0;
}

string buildEq(string eqTemplate, string tab)
{
    string a;
    string b;
    string eq;

    for (int i = 0;i < eqTemplate.size();i++){
        if (eqTemplate[i] == 'a'){
            cout << tab << "Enter in a number: ";
            cin >> a;
            eq += a;
        }
        else if (eqTemplate[i] == 'b'){
            cout << tab << "Enter in a variable: ";
            cin >> b;
            eq += b;
        }
        else if (eqTemplate[i] == '(') {
            eq += eqTemplate[i];
            i++;
            int start = i;
            int end;
            int level = -1;
            while (level < 0){
                if (eqTemplate[i] == ')') level += 1;
                if (eqTemplate[i] == '(') level -= 1;
                i++;
            }
            i--;
            end = i;
            string subEq = eqTemplate.substr(start,end - start);
            cout << tab << "Sub-equation: " << subEq << endl;
            eq += buildEq(eqTemplate.substr(start,end - start),tab + "\t") + ')';

            // i++;
            // string substr = buildEq(eqTemplate.substr(i),tab + "\t");
            // eqTemplate.replace(i,substr.size(),substr);
            // i += substr.size() + 1;
        }
        else if (eqTemplate[i] == ')') return eq;
        else eq += eqTemplate[i];
    }
    return eq;
    return eqTemplate;
}
