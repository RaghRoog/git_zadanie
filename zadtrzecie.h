void trzecie() {
    float wzrost;
    float waga;
    float BMI;
    printf("Ten program oblicza BMI\n");
    printf("Podaj swoj wzrost [m]\n");
    scanf("%f", &wzrost);
    printf("Podaj swoja wage [kg]\n");
    scanf("%f", &waga);
    BMI = waga / (wzrost * wzrost);
    printf("Twoje BMI wynosi: %.2f\n", BMI);
}
