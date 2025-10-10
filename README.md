# supertrunfo
# Jogo de Cartas

## Descrição do Projeto
Este projeto tem como objetivo cadastrar cartas de cidades brasileiras para um jogo, armazenando informações como população, área, PIB e pontos turísticos.  
As cartas estão registradas em um arquivo JSON (`cartas.json`) e podem ser testadas através de um programa em C (`cartas.c`).


---

## Como Funciona

1. **Cadastro das Cartas**  
   - Todas as cartas estão no arquivo `cartas.json`.  
   - Cada carta contém os campos: `estado`, `nome_da_cidade`, `codigo_da_carta`, `populacao`, `area_km2`, `PIB` e `pontos_turisticos`.

2. **Código em C para Teste**  
   - O arquivo `cartas.c` contém um programa que cria structs para cada carta e imprime suas informações na tela.

3. **Compilação e Teste Automáticos**  
   - O GitHub Actions compila e executa o programa automaticamente usando o arquivo `.github/workflows/testar.yml`.  

---

## Autor
Érica Raíssa Da Silva.



