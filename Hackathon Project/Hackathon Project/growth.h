#ifndef GROWTH_H
#define GROWTH_H

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>

#define e 2.7182818

double food_effect(char food, double growth_rate);

double water_effect(char water, double growth_rate);

double pred_factor(char predator, double growth_rate);

double climate_effect(char climate, double growth_rate);

double air_quality_effect(char air_quality, double growth_rate);

double disease_effect(char disease, double growth_rate);

double resgrowth(double growth_rate, double growth_factor);

double newpop(double oldpop, double restricted_growth, double generation);

#endif