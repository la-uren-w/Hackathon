#include "growth.h"



double food_effect(char food, double growth_factor)
{
	if (food == 'E')
	{
		growth_factor = growth_factor / 3;
		printf("\nNew growth rate: %lf", growth_factor);
	}
	if (food == 'V')
	{
		growth_factor = growth_factor / 2;
		printf("\nNew growth rate: %lf", growth_factor);
	}
	if (food == 'N')
	{
		growth_factor = growth_factor;
		printf("\nNew growth rate: %lf", growth_factor);
	}
	if (food == 'v')
	{
		growth_factor = growth_factor * 4;
		printf("\nNew growth rate: %lf", growth_factor);
	}
	if (food == 'e')
	{
		growth_factor = growth_factor * 6;
		printf("\nNew growth rate: %lf", growth_factor);
	}
	return growth_factor;
}

double water_effect(char water, double growth_factor)
{
	if (water == 'E')
	{
		growth_factor = growth_factor / 3;
		printf("\nNew growth rate: %lf", growth_factor);
	}
	if (water == 'V')
	{
		growth_factor = growth_factor / 2;
		printf("\nNew growth rate: %lf", growth_factor);
	}
	if (water == 'N')
	{
		growth_factor = growth_factor;
		printf("\nNew growth rate: %lf", growth_factor);
	}
	if (water == 'v')
	{
		growth_factor = growth_factor * 4;
		printf("\nNew growth rate: %lf", growth_factor);
	}
	if (water == 'e')
	{
		growth_factor = growth_factor * 6;
		printf("\nNew growth rate: %lf", growth_factor);
	}
	return growth_factor;
}

double pred_factor(char predator, double growth_factor)
{
	if (predator == 'E')
	{
		growth_factor = growth_factor / 3;
		printf("\nNew growth rate: %lf", growth_factor);
	}
	if (predator == 'V')
	{
		growth_factor = growth_factor / 2;
		printf("\nNew growth rate: %lf", growth_factor);
	}
	if (predator == 'N')
	{
		growth_factor = growth_factor;
		printf("\nNew growth rate: %lf", growth_factor);
	}
	if (predator == 'v')
	{
		growth_factor = growth_factor * 4;
		printf("\nNew growth rate: %lf", growth_factor);
	}
	if (predator == 'e')
	{
		growth_factor = growth_factor * 6;
		printf("\nNew growth rate: %lf", growth_factor);
	}
	return growth_factor;
}

double climate_effect(char climate, double growth_factor)
{
	if (climate == 'E')
	{
		growth_factor = growth_factor / 3;
		printf("\nNew growth rate: %lf", growth_factor);
	}
	if (climate == 'V')
	{
		growth_factor = growth_factor / 2;
		printf("\nNew growth rate: %lf", growth_factor);
	}
	if (climate == 'N')
	{
		growth_factor = growth_factor;
		printf("\nNew growth rate: %lf", growth_factor);
	}
	if (climate == 'v')
	{
		growth_factor = growth_factor * 4;
		printf("\nNew growth rate: %lf", growth_factor);
	}
	if (climate == 'e')
	{
		growth_factor = growth_factor * 6;
		printf("\nNew growth rate: %lf", growth_factor);
	}
	return growth_factor;
}

double air_quality_effect(char air_quality, double growth_factor)
{
	if (air_quality == 'E')
	{
		growth_factor = growth_factor / 3;
		printf("\nNew growth rate: %lf", growth_factor);
	}
	if (air_quality == 'V')
	{
		growth_factor = growth_factor / 2;
		printf("\nNew growth rate: %lf", growth_factor);
	}
	if (air_quality == 'N')
	{
		growth_factor = growth_factor;
		printf("\nNew growth rate: %lf", growth_factor);
	}
	if (air_quality == 'v')
	{
		growth_factor = growth_factor * 4;
		printf("\nNew growth rate: %lf", growth_factor);
	}
	if (air_quality == 'e')
	{
		growth_factor = growth_factor * 6;
		printf("\nNew growth rate: %lf", growth_factor);
	}
	return growth_factor;
}

double disease_effect(char disease, double growth_factor)
{
	if (disease == 'E')
	{
		growth_factor = growth_factor / 3;
		printf("\nNew growth rate: %lf", growth_factor);
	}
	if (disease == 'V')
	{
		growth_factor = growth_factor / 2;
		printf("\nNew growth rate: %lf", growth_factor);
	}
	if (disease == 'N')
	{
		growth_factor = growth_factor;
		printf("\nNew growth rate: %lf", growth_factor);
	}
	if (disease == 'v')
	{
		growth_factor = growth_factor * 4;
		printf("\nNew growth rate: %lf", growth_factor);
	}
	if (disease == 'e')
	{
		growth_factor = growth_factor * 6;
		printf("\nNew growth rate: %lf", growth_factor);
	}
	return growth_factor;
}

double resgrowth(double growth_rate, double growth_factor)
{
	double restricted_growth = 0.0;
	restricted_growth = growth_rate * growth_factor;
	return restricted_growth;

}

double newpop(double oldpop, double restricted_growth, double generation)
{
	double newpopulation = 0.0;
	newpopulation = oldpop * pow(e, restricted_growth * generation);
	return newpopulation;
}
