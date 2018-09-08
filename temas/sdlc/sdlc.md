Volver al [índice](../../README.md)

#

# Desarrollo Seguro

Las siglas SDLC (Software Development Life Cycle) significan Ciclo de Vida de Desarrollo de Software. Existen varios proyectos o marcos de trabajo que dan una guía para asegurar el proceso de desarrollo de software, entre ellas están:

- Microsoft SDL
- OWASP
- BSIMM
- NIST 800-64
- openSAMM
- SAFECode

Cada una tiene pilares de base y actividades que sugieren para lograr, a continuación una lista de las actividades y pilares mas utilizadas en los marcos de trabajo para hacer desarrollo seguro.

## Actividades de seguridad sugeridas.

- **Formación de seguridad** de los grupos implicados en el desarrollo.
- Mejora continua de los procesos.
- Responsabilidad.
- Identificación y definición de **riesgos de negocio** del cliente.
- Obtención y validación de los **requisitos de seguridad**.
- Análisis y **modelado de amenazas** que proteja la superficie de ataques.
- **Revision del diseño**.
- **Revisión de código**.
- **Testing de seguridad**.
- **Validación de salidas** garantizando la seguridad del código liberado.
- **Evaluación y metricas** confirmando el seguimiento de la seguridad.
- Implantación de un **plan de respuestas a incidentes**
- Observatorio de Seguridad
- Repositorio de Seguridad y gestión del conocimiento
- Visibilidad del estado de los proyectos

## Referencias
Microsoft - [Implementación simplificada del proceso SDL en español](https://github.com/qnelo/security/blob/master/temas/sdlc/Spanish_Simplified%20Implementation%20of%20the%20SDL.docx)

Microsoft - [Sitio de de referencia de SDL](https://www.microsoft.com/en-us/sdl)

Microsoft - Libro - [The Security Development Lifecycle](https://blogs.msdn.microsoft.com/microsoft_press/2016/04/19/free-ebook-the-security-development-lifecycle/)

Microsoft - [Proceso Ágil SDL](https://www.microsoft.com/en-us/SDL/Discover/sdlagile.aspx)

OWASP - [Anexo para Contrato de Software Seguro](https://www.owasp.org/index.php/Anexo_para_Contrato_de_Software_Seguro_de_OWASP)

OWASP - [Una Guía para Construir Aplicaciones y Servicios Web Seguros](https://www.owasp.org/images/b/b2/OWASP_Development_Guide_2.0.1_Spanish.pdf)

OWASP - [Testing Guide](https://www.owasp.org/index.php/OWASP_Testing_Project)

NIST - [Special Publication 800-64 Revision 2](https://nvlpubs.nist.gov/nistpubs/legacy/sp/nistspecialpublication800-64r2.pdf)

SAFECode - [SAFECode official page](https://safecode.org/)

BSIMM - [Framework](https://www.bsimm.com/framework.html)

## Agile Secure SDLC

Manifiesto Ágil [Manifesto for Agile Software Development](http://agilemanifesto.org/)

Synopsys [Agile Secure Manifesto](https://github.com/qnelo/security/blob/master/temas/sdlc/agile-security-manifesto.pdf)

Synopsys [Delivering Security in an Agile World](https://github.com/qnelo/security/blob/master/temas/sdlc/delivering-security-in-an-agile-world.pdf)

Artículo de hack2secure [Adopting Secure SDLC In Agile](https://www.hack2secure.com/blogs/adopting-secure-sdlc-in-agile)

SAFECode [Practical Security Stories and Security Task for Agile Development Environments](https://github.com/qnelo/security/blob/master/temas/sdlc/SAFECode_Agile_Dev_Security0712.pdf)

## Formación

-  Diseño seguro
   - Reducción de la superficie de ataques
     - [¿Conoces tu superficie de ataque?](https://medium.com/@marvin.soto/conoces-tu-superficie-de-ataque-a2b3fd8c382e)
     - [Infosec 101: Superficie de ataque](https://delfinabzueta.wordpress.com/2015/02/04/infosec-101-superficie-de-ataque/)
     - [La importancia de reducir la superficie de ataque](http://tecnologiasweb.blogspot.com/2010/11/la-importancia-de-reducir-la-superficie.html)
   - Defensa en profundidad
     - [Explicando la Defensa en Profundidad en la Seguridad de Sitios Web](https://blog.sucuri.net/espanol/2016/10/explicando-la-defensa-en-profundidad-en-la-seguridad-de-sitios-web.html)
     - [Principio de defensa en profundidad](https://smr2rubenblanco.wordpress.com/2017/11/10/principio-de-defensa-en-profundidad/)
     - [Video - #11PathsTalks: Defensa en profundidad](https://www.youtube.com/watch?v=ZggRDJqcMQM)
   - Principio de privilegios mínimos
     - [Principio del menor privilegio: la estrategia de limitar el acceso a lo que es imprescindible](https://www.welivesecurity.com/la-es/2018/06/08/principio-menor-privilegio-limitar-acceso-imprescindible/)
     - [¿Qué es el Principio de Mínimo Privilegio?](https://blog.sucuri.net/espanol/2017/04/el-principio-de-minimo-privilegio.html)
     - [El principio del mínimo privilegio, clave para minimizar el impacto de fugas de información](https://www.audea.com/es/principio-del-minimo-privilegio-clave-minimizar-impacto-fugas-informacion/)
   - Configuraciones predeterminadas seguras
     - []()
-  Modelos de riesgos
   - Información general sobre los modelos de riesgos
   - Implicaciones de diseño de un modelo de riesgos
   - Restricciones de codificación basadas en un modelo de riesgos
-  Codificación segura
   - Saturaciones de búfer (para aplicaciones que usen C y C++)
     - [Desbordamiento de búfer](https://www.ecured.cu/Desbordamiento_de_b%C3%BAfer)
     - De culto -> [Smashing The Stack For Fun And Profit](http://www-inst.eecs.berkeley.edu/~cs161/fa08/papers/stack_smashing.pdf)
     - [Explotación - Buffers OverFlows y exploits (Parte I)](https://elbauldelprogramador.com/explotacion-buffers-overflows-y-exploits-parte-i/)
   - Errores aritméticos de enteros (para aplicaciones que usen C y C++)
   - XSS (para código administrado y aplicaciones web)
   - Inyección de código SQL (para código administrado y aplicaciones web)
   - Criptografía débil
     - [Criptografía 101: Fundamentos matemáticos (I) - Aritmética modular](https://elbauldelprogramador.com/criptografia-101-fundamentos-matematicos-i/)
     - [Criptografía 101 - Fundamentos Matemáticos (II) - Cálculo de Potencias](https://elbauldelprogramador.com/criptografia-101-fundamentos-matematicos-ii/)
-  Pruebas de seguridad
   - Diferencias entre pruebas de seguridad y pruebas funcionales
   - Evaluación de riesgos
   - Métodos para poner a prueba la seguridad
-  Privacidad
   - Tipos de datos confidenciales
   - Procedimientos recomendados de diseño de privacidad
   - Evaluación de riesgos
   - Procedimientos recomendados de desarrollo de privacidad
   - Procedimientos recomendados de pruebas de privacidad



#

Volver al [índice](../../README.md)