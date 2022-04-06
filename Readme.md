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

  - **Inicio**: `470` clock pulses
  - **Fim**: `422146` clock pulses
  - **Diferença**: `421676` clock pulses
  - **Tempo** total gasto pela CPU: `0s`

  ### Teste para `x = x >> 1;`

  - **Inicio**: `422158` clock pulses
  - **Fim**: `841372` clock pulses
  - **Diferença**: `419214` clock pulses
  - **Tempo** total gasto pela CPU: `0s`