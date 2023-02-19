#include "growth.h"

int main(void)
{

	printf("One of the most important concepts in biology is predicting the population growth of a species.\nWith this program, a scientist can model a species growth based\n of the species growth rate when facing varying growth restrictions");
	// food, water, predators, climate, air quality, disease
	char food = '\0', water = '\0', pred_hunt = '\0', climate = '\0', air_quality = '\0', disease = '\0';
	double growth_rate = 0.0, new_growth = 0.0, growth2 = 0.0, realgrowthrate;
	int initial = 0, time = 0, population = 0.0;

	/*printf("\n We'll being our calculation by asking how many orgamisms are in the initial population currently? (The starting number)");
	scanf("%d", &initial);*/
	printf("\nNow to begin calculating the species restricted growth rate, enter the base annual growth rate for the species\n(Ex: 45%% growth per year would be entered as '.45') : ");
	scanf("%lf", &growth_rate);
	printf("\nHow abundant is the food in the species' environment? ");
	printf("\nExtremely scarce: E, Very scarce: V, Not scarce: N, Very abundant: v, Extemely abundant: e\n");
	scanf(" %c", &food);
	new_growth = food_effect(food, growth_rate);

	printf("\nHow abundant is the water in the species' environment? ");
	printf("\nExtremely scarce: E, Very scarce: V, Not scarce: N, Very abundant: v, Extemely abundant: e\n");
	scanf(" %c", &water);
	new_growth = water_effect(water, new_growth);

	printf("\nHow would you catergorize the affect of predators/hunters on the species: ");
	printf("\nExtremely high: E, Very high: V, Not high: N, Very low: v, Extemely low: e\n");
	scanf(" %c", &pred_hunt);
	new_growth = pred_factor(pred_hunt, new_growth);

	printf("\nHow ideal is the climate for the species? ");
	printf("\nExtremly unideal: E, Very unideal: V, Not ideal: N, Very ideal: v, Extremely ideal: e\n");
	scanf(" %c", &climate);
	new_growth = climate_effect(climate, new_growth);

	printf("\nHow good is the air quality in the species environment?");
	printf("\nExtremely low: E, Very low: V, Not low: N, Very high: v, Extremely high: e ");
	scanf(" %c", &air_quality);
	new_growth = air_quality_effect(air_quality, new_growth);

	printf("\nWhat is the impact of virulence of diseased individuals of a species population?");
	printf("\nExtremely high: E, very high: V, No impact: N, Very low: v, Extremly high: e ");
	scanf(" %c", &disease);
	new_growth = disease_effect(disease, new_growth);

	printf("\nWe're almost there!");
	printf("\nHow many organisms are in the initial population currently? (The starting number)");
	scanf("%d", &initial);

	realgrowthrate = resgrowth(new_growth, initial);
	printf("Based off the information we have, we can expect the population to grow at a rate of %.2lf", realgrowthrate);

	printf("We can actually take this cool biology math even further by using time to find the estimated number of a population over time");
	printf("\nIn order to do this, we're going need an entry for the amount of time passed in years:");
	scanf("%d", &time);
	population = newpop(initial, new_growth, time);

	printf("\nBy using the equation Pe^rt=P1, we can estimate the new population to be %d", population);

	return 0;
}