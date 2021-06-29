# Integração E-Commerce

A integração e-commerce pode ser feitas de duas formas : 

- Via POS
- Via SOAP 

Estes dois modos de integração serão tratados neste artigo. Cada um deles de modo detalhado a fim de facilitar o entendimento dos gerentes a respeito dos meios de inegração e auxiliar os programadores na compreensão da parte técnica.

# - Via POS

Este método é o mais rápido e consiste basicamente no pagamento da compra na hora da retirada.

- O cliente faz a escolha dos produtos no site
- Seleciona a opção de pagar utilizando o cartão da empresa
- Na hora de retirar o produto o cliente efetua o pagamento na máquina

Ao invés de ser debitada a compra no cartão na hora da compra via e-commerce, ela é debitada na máquina na retirada do produto.

# - Via SOAP

O SOAP é o protocolo utilizado pela BIZ para que sejam efetuadas as transações que são feitas com os cartões da UZE.
```
<Explicação a respeito do pagamento de compra>

<Explicação a respeito de cancelamento de compra>
```
Dúvidas que aparecem com frequência são : 
<ALTERAR ESTE CAMPO>
    <EXTORNO SÓ PODE SER FEITO NO MESMO DIA>
        <JÁ EXISTE A OPÇÃO DE CONFIRMAÇÃO DE COMPRA>
- Lançamento da compra na hora que for feita, mas apenas efetuar a confirmação/cancelamento na hora da retirada do produto ou confirmar valor menor(para o caso de a loja não possuir o produto na hora e o valor da compra ser menor do que o que foi orçado inicialmente no site).
- Realização de extornos parciais.

Para o primeiro caso, o prazo máximo para confirmação/cancelamento é de <X> dias (ou <X> horas).
Para o segundo, o valor total da compra deve ser extornado, e então uma nova compra deverá ser lançada com o novo valor. 
```
Links úteis : 
- Documentação : < Link da documentação >
- Vídeo Explicativo : < Link do google Drive com explicação de alguém que conheça a documentação da BIZ >
```

# Dúvidas

Para o caso de dúvidas entre em contato com : 
- Possibilidades : 
    - < Formulário Google, Pipefy, WhatsApp ou E-mail >

- Sugestão : 
    - < A meu ver, seria interessante pelo pipefy, devido à organização e comunicação através do próprio software >

- Problemas com Forms, Email e WhatsApp : 
    - < No caso de e-mail e whats-app seria ruim para unir todos os emails a respeito do protocolo, pois poderiam vir misturados com outros emails, dificultando a gestão e o controle >
    - < O formulário do google seria ruim pois teríamos que entrar em contato via e-mail e whatsapp, por exemplo, voltando ao problema anterior >
