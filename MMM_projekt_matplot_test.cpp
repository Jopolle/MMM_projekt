// MMM_projekt_matplot_test.cpp : Defines the entry point for the application.
//

#include "MMM_projekt_matplot_test.h"
using namespace matplot;

int main()
{
    //auto x = linspace(-4, 4);
    //auto y = transform(x, [](double x) { return pow(x, 3) - 12 * x; });
    //plot(x, y);

    auto e = ellipse(-3.5, 11, 3.5, 8);
    auto r = rectangle(-3.5, 11, 3.5, 8);
    r->color("red");

    show();

	return 0;
}
