#include <iostream>
#include "Bitmap.h"

using namespace std;

int main()
{
	const int WIDTH = 800;
	const int HEIGHT = 600;

	Bitmap bitmap(WIDTH, HEIGHT);


	for (int y = 0; y < HEIGHT; y++)
	{
		for (int x = 0; x < WIDTH; x++)
		{
			bitmap.setPixel(x, y, 255, 0, 0);
		}
	}

	bitmap.setPixel(WIDTH / 2, HEIGHT / 2, 255, 255, 255);

	bitmap.write("test.bmp");

	cout << "Finished." << endl;
	return EXIT_SUCCESS;
}