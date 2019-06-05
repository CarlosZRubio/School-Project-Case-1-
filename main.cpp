#include <iostream>

using namespace std;

int main() 
{
//Explaining Acronyms Used in the Ajacency Matrix
cout << "\n\n ";
cout << "RS = Riverside\n";
cout << " MV = Moreno Valley\n";
cout << " PE = Perris\n";
cout << " HE = Hemet\n";

//Adjacency Matrix by using cout
cout << "\n\n ";
cout << "Adjacency Matrix for Inland Empire Solar Sales Travel\n\n";
cout << "   |RS|MV|PE|HE|\n";
cout << "|RS|00|16|24|33|\n";
cout << "|MV|16|00|18|26|\n";
cout << "|PE|24|18|00|30|\n";
cout << "|HE|33|26|30|00|\n\n";

//breadth search by using cout as well
cout <<  "Breadth search for Inland Empire Solar Sales Travel\n\n";
cout << "Riverside --> Moreno Valley16,\n";
cout << "Riverside --> Perris24,\n";
cout << "Riverside --> Hemet33,\n";
cout << "Hemet --> Moreno Valley26\n";
cout << "Hemet --> Perris30\n";
cout << "Perris --> Moreno Valley18\n\n";

//All Most Low Cost Paths
cout << "All most low cost paths for Inland Empire Solar Sales Travel\n\n ";
cout << "Riverside --> Moreno Valley16,\n";
cout << "Riverside --> Perris24,\n";
cout << "Riverside --> Hemet33,\n\n";

return 0;
}