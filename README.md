# Nome do Projeto

> Projeto de AED II | Linguagem C | Valor: 50 pontos

## 1. Equipe

| Nome completo | Matrícula | GitHub |
|---|---|---|
| Integrante 1 | | |
| Integrante 2 | | |
| Integrante 3 | | |

## 2. Contexto do projeto

Descreva o cenário, o problema ou a necessidade que motivou o projeto e justifique a escolha do tema.

## 3. Objetivo

Apresente o objetivo principal do sistema.

## 4. Descrição do sistema

Explique o funcionamento geral, os dados armazenados e a interação com o usuário.

## 5. Estrutura dos dados

Descreva a `struct` principal, seus campos e tipos, e como cada registro será identificado.

## 6. Funcionalidades

Explique o funcionamento de cada operação implementada:

- **Inserir:**
- **Listar:**
- **Editar:**
- **Excluir (remoção física):**
- **Pesquisar:**
- **Resumo/estatísticas:**

## 7. Organização do código

Apresente a estrutura de pastas e arquivos e a responsabilidade de cada módulo `.c` e `.h`.

## 8. Manipulação de arquivos

Informe o formato escolhido (texto ou binário), como os registros são lidos e gravados, como ocorrem edição e exclusão física e como são tratadas falhas.

## 9. Compilação e execução

Requisitos: compilador GCC e Make (opcional).

Com Make:

```bash
make
./programa
```

No Windows, o executável poderá ser `programa.exe`.

Sem Make (Linux/macOS):

```bash
gcc -std=c11 -Wall -Wextra -Iinclude src/*.c -o programa
./programa
```

Atualize estas instruções caso altere a estrutura.

## 10. Testes realizados

| Funcionalidade | Situação testada | Resultado obtido |
|---|---|---|
| Inserir | | |
| Listar | | |
| Editar | | |
| Excluir | | |
| Pesquisar | | |
| Resumo | | |

Inclua testes de arquivo inexistente, registro não encontrado e persistência após reiniciar o programa.

## 11. Considerações finais

Descreva os resultados, dificuldades, limitações e possíveis melhorias.

## 12. Referências e citações

Liste livros, documentação, artigos, tutoriais e demais fontes consultadas. Para fontes online, informe título, autor/instituição, URL e data de acesso. Cite no texto as fontes utilizadas e identifique trechos de código adaptados de terceiros.

Se utilizar ferramentas de IA, informe a ferramenta, a finalidade e quais partes receberam auxílio. Cada integrante deve compreender o código entregue.

---

**Entrega:** repositório com código-fonte e arquivo de dados de demonstração, além do `.zip` solicitado no Canvas. O sistema deve compilar e manter os dados entre execuções.
