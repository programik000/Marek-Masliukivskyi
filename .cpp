#include

using namespace std;

char h[9] = { '-','-', '-', '-', '-', '-', '-', '-', '-' };
void cleanboard()
{
for (int i = 0; i < 50; i++) // i < 50 = ilosc prób
{
cout << "\n";
}
}
void board1() // to jest pomoc dla graczy
{
cout << "-7-|-8-|-9-" << endl;
cout << "-4-|-5-|-6-" << endl;
cout << "-1-|-2-|-3-" << endl;
}
void board()
{
cout << "\n";
cout << "-" << h[6] << "-|-" << h[7] << "-|-" << h[8] << "-" << endl;
cout << "-" << h[3] << "-|-" << h[4] << "-|-" << h[5] << "-" << endl;
cout << "-" << h[0] << "-|-" << h[1] << "-|-" << h[2] << "-" << endl;
}
int get_move()
{
int move;
cin >> move;
while (move > 9 || move < 1 || h[move -1] != '-')
{
cout << "No!" << endl;
cin >> move;
}
return move;
}
int main()
{

for (int i = 0; i < 9; i++)
{
cleanboard();
board1();
board();
int move = get_move();
cout << "Wybrales: " << move << endl;
if (i % 2 == 0)
{
h[move - 1] = 'X';
}
else h[move - 1] = '0';
{

}
}
return 0;
}
