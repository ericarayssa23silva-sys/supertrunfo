# supertrunfo
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

## Observações
- Este projeto foi feito inteiramente no GitHub, sem necessidade de instalação local.  
- O JSON funciona como banco de dados das cartas e pode ser facilmente expandido com novas cidades.

---

## Autor
Érica Raíssa da Silva

