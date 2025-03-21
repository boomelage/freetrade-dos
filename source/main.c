#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

double generate_gbm_price(double S0, double mu, double sigma, double dt) {
    double Z = ((double)rand() / RAND_MAX);  // Uniform random number
    double dW = sqrt(dt) * Z;               // Standard Brownian motion increment
    double new_price = S0 * exp((mu - 0.5 * sigma * sigma) * dt + sigma * dW);
    return new_price;
}

int main() {
    srand(time(NULL)); // Seed the random number generator
    double S0 = 100.0; // Initial price
    double mu = 0.05;  // Drift (5% return)
    double sigma = 0.2; // Volatility (20% standard deviation)
    double dt = 1.0 / 252.0; // Daily step size for stock prices

    double current_price = S0;
    int days = 252; // Number of trading days in a year

    for (int i = 0; i < days; ++i) {
        current_price = generate_gbm_price(current_price, mu, sigma, dt);
        printf("Day %d: Price = %.2f\n", i + 1, current_price);
    }

    return 0;
}

