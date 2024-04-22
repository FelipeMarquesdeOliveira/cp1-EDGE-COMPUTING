# Projeto Vinheria Agnelo

## Descrição
O Projeto Vinheria Agnelo é um sistema embarcado desenvolvido para uma adega de vinhos. Ele utiliza um Arduino Uno e um sensor de luminosidade (LDR) para monitorar a intensidade da luz e garantir que os vinhos sejam armazenados adequadamente, evitando danos causados pela exposição à luz.

## Componentes
O sistema é composto por:
- 01 Arduino Uno
- 01 Sensor de Luminosidade (LDR)
- 01 Buzzer
- 03 LEDs
- 05 Resistores

### Tecnologias Utilizadas
- ARDUINO UNO R3  
- ![C++](https://img.shields.io/badge/-C++-blue?logo=cplusplus)

## Imagem do Tinkercad
![Copy of Medidor de Intensidade da Luz (3)](https://github.com/FelipeMarquesdeOliveira/cp1-edge-computing/assets/162123528/8c41c0c3-fdd0-4089-8fc7-7ec0f3d66bbd)


## Resumo das Funcionalidades
O sistema utiliza um sensor de luminosidade (LDR) para monitorar a intensidade da luz e controlar LEDs e uma buzina de acordo com os seguintes critérios:

- **LED Vermelho:**  
  - Acionado quando a intensidade da luz medida é maior ou igual a 60.
  - A buzina emite um som de 1000 Hz por 1 segundo quando este LED é ativado.

- **LED Amarelo:**  
  - Acionado quando a intensidade da luz medida é maior que 30, mas menor que 60.
  - A buzina emite um som de 450 Hz por 1 segundo quando este LED é ativado.

- **LED Verde:**  
  - Acionado quando a intensidade da luz medida é menor ou igual a 30.

## Instalação
Para usar o sistema, monte o circuito conforme descrito no vídeo explicativo [aqui](https://www.youtube.com/watch?v=YJiCkREUxpk). Além disso, você pode visualizar e editar o circuito no Tinkercad [aqui](https://www.tinkercad.com/things/hE9zkYgcWnW-copy-of-medidor-de-intensidade-da-luz/editel).

## Uso
Após montar o circuito, o sistema começará a monitorar a intensidade da luz automaticamente. Os LEDs e a buzina fornecerão feedback visual e sonoro de acordo com a intensidade da luz medida.

## Licença
Este projeto está licenciado sob a Licença MIT. Consulte o arquivo [LICENSE](LICENSE) para obter mais detalhes.
