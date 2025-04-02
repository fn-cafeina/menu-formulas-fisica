#include <ncurses.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

void mostrarFormula(const char *nombre)
{
    attron(COLOR_PAIR(1));

    printw("%s\n\n", nombre);

    if (strcmp(nombre, "Ley de gravitación universal") == 0)
    {
        printw("Fórmula: F = G * (m1 * m2) / r^2\n\n");
        printw("Donde:\n");
        attroff(COLOR_PAIR(1));
        attron(COLOR_PAIR(2));
        printw("G = Constante de gravitación universal\n");
        printw("m1, m2 = Masas de los cuerpos\n");
        printw("r = Distancia entre los cuerpos\n");
        attroff(COLOR_PAIR(2));
    }
    else if (strcmp(nombre, "Energía cinética") == 0)
    {
        printw("Fórmula: Ek = 1/2 * m * v^2\n\n");
        printw("Donde:\n");
        attroff(COLOR_PAIR(1));
        attron(COLOR_PAIR(2));
        printw("m = Masa del objeto\n");
        printw("v = Velocidad del objeto\n");
        attroff(COLOR_PAIR(2));
    }
    else if (strcmp(nombre, "Ley de Ohm") == 0)
    {
        printw("Fórmula: V = I * R\n\n");
        printw("Donde:\n");
        attroff(COLOR_PAIR(1));
        attron(COLOR_PAIR(2));
        printw("V = Voltaje (en voltios)\n");
        printw("I = Corriente (en amperios)\n");
        printw("R = Resistencia (en ohmios)\n");
        attroff(COLOR_PAIR(2));
    }
    else if (strcmp(nombre, "Fuerza centrípeta") == 0)
    {
        printw("Fórmula: Fc = m * v^2 / r\n\n");
        printw("Donde:\n");
        attroff(COLOR_PAIR(1));
        attron(COLOR_PAIR(2));
        printw("m = Masa del objeto\n");
        printw("v = Velocidad del objeto\n");
        printw("r = Radio de la trayectoria circular\n");
        attroff(COLOR_PAIR(2));
    }
    else if (strcmp(nombre, "Trabajo") == 0)
    {
        printw("Fórmula: W = F * d * cos(θ)\n\n");
        printw("Donde:\n");
        attroff(COLOR_PAIR(1));
        attron(COLOR_PAIR(2));
        printw("F = Fuerza aplicada\n");
        printw("d = Desplazamiento realizado\n");
        printw("θ = Ángulo entre la fuerza y el desplazamiento\n");
        attroff(COLOR_PAIR(2));
    }
    else if (strcmp(nombre, "Velocidad promedio") == 0)
    {
        printw("Fórmula: v_prom = Δx / Δt\n\n");
        printw("Donde:\n");
        attroff(COLOR_PAIR(1));
        attron(COLOR_PAIR(2));
        printw("Δx = Desplazamiento\n");
        printw("Δt = Tiempo transcurrido\n");
        attroff(COLOR_PAIR(2));
    }
    else if (strcmp(nombre, "Aceleración") == 0)
    {
        printw("Fórmula: a = Δv / Δt\n\n");
        printw("Donde:\n");
        attroff(COLOR_PAIR(1));
        attron(COLOR_PAIR(2));
        printw("Δv = Cambio de velocidad\n");
        printw("Δt = Tiempo transcurrido\n");
        attroff(COLOR_PAIR(2));
    }
    else if (strcmp(nombre, "Trabajo de energía cinética") == 0)
    {
        printw("Fórmula: W = ΔEk\n\n");
        printw("Donde:\n");
        attroff(COLOR_PAIR(1));
        attron(COLOR_PAIR(2));
        printw("ΔEk = Cambio en la energía cinética\n");
        attroff(COLOR_PAIR(2));
    }
    else if (strcmp(nombre, "Fuerza de fricción") == 0)
    {
        printw("Fórmula: F_f = μ * N\n\n");
        printw("Donde:\n");
        attroff(COLOR_PAIR(1));
        attron(COLOR_PAIR(2));
        printw("μ = Coeficiente de fricción\n");
        printw("N = Fuerza normal\n");
        attroff(COLOR_PAIR(2));
    }
    else if (strcmp(nombre, "Momento de inercia") == 0)
    {
        printw("Fórmula: I = Σ(m * r^2)\n\n");
        printw("Donde:\n");
        attroff(COLOR_PAIR(1));
        attron(COLOR_PAIR(2));
        printw("m = Masa de los puntos\n");
        printw("r = Distancia del eje de rotación\n");
        attroff(COLOR_PAIR(2));
    }
    else if (strcmp(nombre, "Impulso") == 0)
    {
        printw("Fórmula: J = F * Δt\n\n");
        printw("Donde:\n");
        attroff(COLOR_PAIR(1));
        attron(COLOR_PAIR(2));
        printw("F = Fuerza aplicada\n");
        printw("Δt = Tiempo durante el cual se aplica la fuerza\n");
        attroff(COLOR_PAIR(2));
    }
    else if (strcmp(nombre, "Ley de la conservación de la energía") == 0)
    {
        printw("Fórmula: E_total = E_cinética + E_potencial\n\n");
        printw("Donde:\n");
        attroff(COLOR_PAIR(1));
        attron(COLOR_PAIR(2));
        printw("E_total = Energía total del sistema\n");
        printw("E_cinética = Energía cinética\n");
        printw("E_potencial = Energía potencial\n");
        attroff(COLOR_PAIR(2));
    }
    else if (strcmp(nombre, "Presión") == 0)
    {
        printw("Fórmula: P = F / A\n\n");
        printw("Donde:\n");
        attroff(COLOR_PAIR(1));
        attron(COLOR_PAIR(2));
        printw("F = Fuerza aplicada\n");
        printw("A = Área sobre la que se aplica la fuerza\n");
        attroff(COLOR_PAIR(2));
    }
    else if (strcmp(nombre, "Volumen") == 0)
    {
        printw("Fórmula: V = l * w * h\n\n");
        printw("Donde:\n");
        attroff(COLOR_PAIR(1));
        attron(COLOR_PAIR(2));
        printw("l = Longitud\n");
        printw("w = Ancho\n");
        printw("h = Altura\n");
        attroff(COLOR_PAIR(2));
    }
    else if (strcmp(nombre, "Frecuencia") == 0)
    {
        printw("Fórmula: f = 1 / T\n\n");
        printw("Donde:\n");
        attroff(COLOR_PAIR(1));
        attron(COLOR_PAIR(2));
        printw("f = Frecuencia\n");
        printw("T = Periodo\n");
        attroff(COLOR_PAIR(2));
    }
    else
    {
        attron(COLOR_PAIR(3));
        printw("Fórmula no encontrada.\n");
        attroff(COLOR_PAIR(3));
    }
}

int main()
{
    setlocale(LC_ALL, "en_US.UTF-8");

    int opcion;

    initscr();
    cbreak();
    echo();
    curs_set(1);

    start_color();
    init_pair(1, COLOR_GREEN, COLOR_BLACK);
    init_pair(2, COLOR_WHITE, COLOR_BLACK);
    init_pair(3, COLOR_RED, COLOR_BLACK);

    while (1)
    {
        clear();
        attron(COLOR_PAIR(1));
        printw("=== MENU DE FÓRMULAS DE FÍSICA ===\n\n");
        printw("1. Ley de gravitación universal\n");
        printw("2. Energía cinética\n");
        printw("3. Ley de Ohm\n");
        printw("4. Fuerza centrípeta\n");
        printw("5. Trabajo\n");
        printw("6. Velocidad promedio\n");
        printw("7. Aceleración\n");
        printw("8. Trabajo de energía cinética\n");
        printw("9. Fuerza de fricción\n");
        printw("10. Momento de inercia\n");
        printw("11. Impulso\n");
        printw("12. Ley de la conservación de la energía\n");
        printw("13. Presión\n");
        printw("14. Volumen\n");
        printw("15. Frecuencia\n");
        printw("16. Salir\n");
        attroff(COLOR_PAIR(1));

        printw("\nSelecciona una opción (1-16): ");
        refresh();

        char input[3];
        getstr(input);
        opcion = atoi(input);

        switch (opcion)
        {
        case 1:
            mostrarFormula("Ley de gravitación universal");
            break;
        case 2:
            mostrarFormula("Energía cinética");
            break;
        case 3:
            mostrarFormula("Ley de Ohm");
            break;
        case 4:
            mostrarFormula("Fuerza centrípeta");
            break;
        case 5:
            mostrarFormula("Trabajo");
            break;
        case 6:
            mostrarFormula("Velocidad promedio");
            break;
        case 7:
            mostrarFormula("Aceleración");
            break;
        case 8:
            mostrarFormula("Trabajo de energía cinética");
            break;
        case 9:
            mostrarFormula("Fuerza de fricción");
            break;
        case 10:
            mostrarFormula("Momento de inercia");
            break;
        case 11:
            mostrarFormula("Impulso");
            break;
        case 12:
            mostrarFormula("Ley de la conservación de la energía");
            break;
        case 13:
            mostrarFormula("Presión");
            break;
        case 14:
            mostrarFormula("Volumen");
            break;
        case 15:
            mostrarFormula("Frecuencia");
            break;
        case 16:
            endwin();
            return 0;
        default:
            attron(COLOR_PAIR(3));
            printw("Opción no válida, Intenta de nuevo.\n");
            attroff(COLOR_PAIR(3));
            break;
        }

        printw("\nPresiona Enter para volver al menú...");
        while (getch() != '\n')
            ;
    }

    endwin();
    return 0;
}