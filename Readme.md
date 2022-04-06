# Benchmark report

Simples teste de desempenho para as diferentes formas de divisão em C:

```c
x = x/2;
// => ou
x = x >> 1;
```
## Resultado:

- Clocks por segundo no sistema utilizado: 1000000
- Iterações utilizadas para o teste: 250000000

  ### Teste para `x = x/2`

  - **Inicio**: `530` clock pulses
  - **Fim**: `420744` clock pulses
  - **Diferença**: `420214` clock pulses
  - **Tempo** total gasto pela CPU: `0s`

  ### Teste para `x = x >> 1;`

  - **Inicio**: `420756` clock pulses
  - **Fim**: `833994` clock pulses
  - **Diferença**: `413238` clock pulses
  - **Tempo** total gasto pela CPU: `0s`