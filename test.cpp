#include <string>
using namespace std;

class Item{
    public:
        Item();
        Item(string Name,int Count,string SKU);
        void setName(string Name);
        string GetName();
        string getSKU();
        void setCount(int Count);
        int getCount();

    private:
        string Name;
        string SKU;
    protected:
        int Count;
        void setSKU(string SKU);

};