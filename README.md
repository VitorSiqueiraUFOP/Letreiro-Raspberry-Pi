# Letreiro do Raspberry Pi

O presente software é um trabalho acadêmico desenvolvido na linguagem C que tem objetivo de simular uma aplicação do Raspberry Pi vulnerável ao Buffer Overflow. O software recebe apenas um parâmetro que é o diretório do arquivo, caso não seja utilizado, é definido como padrão o "DADOS.txt". O Buffer Overflow ocorre quando o arquivo lido exceda a capacidade de 20 caracteres por linha.

Autor: Vitor de Siqueira Cotta

Graduando: Sistemas de Informação

## Instrução causadora do Buffer Overflow

```
strcat(linha, leitor);
```

## Solução segura contra Buffer Overflow

```
strncat(linha, sizeof(linha) - strlen(linha) - 1, leitor);
```

## Equipamento utilizado

O equipamento utilizado para representar os dispositivos de IoT foi Raspberry Pi, um computador desenvolvido pela Raspberry Pi Foundation, que é uma organização de caridade britânica. O propósito do é estimular a educação da Ciência Computação através da acessibilidade de aquisição, com valor estabelecido de $35,00, que apesar de apresentar uma configuração modesta, é uma ferramenta capaz de executar diversas tarefas apta para fins acadêmico. O modelo específico é o Raspberry 3 modelo B+, disponibilizado em 2018.
