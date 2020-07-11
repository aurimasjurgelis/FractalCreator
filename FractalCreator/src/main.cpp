#include <iostream>
#include "FractalCreator.h"
#include "RGB.h"
#include "Zoom.h"

using namespace std;

int main()
{
	FractalCreator fractalCreator(8000*2, 6000 * 2);

	fractalCreator.addRange(0.0, RGB(0, 0, 255));
	fractalCreator.addRange(0.05, RGB(255, 99, 71));
	fractalCreator.addRange(0.08, RGB(255, 215, 0));
	fractalCreator.addRange(1.0, RGB(255, 255, 255));

	fractalCreator.addZoom(Zoom(2950 * 2, 2020 * 2, 0.1));
	fractalCreator.addZoom(Zoom(3120 * 2, 3040 * 2, 0.1));

	fractalCreator.run("test.bmp");


	cout << "Finished." << endl;
	return EXIT_SUCCESS;
}