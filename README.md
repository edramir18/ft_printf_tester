# ft_printf_tester
Es un programa para verificar el proyecto *libftprintf*, y constatar como funciona
la funcion *printf*. Se debe ajustar la variable *FTPRINT* del archivo makefile
para indicar la ruta donde se encuentra el proyecto que deseamos probar.

Por medio del archivo Makefile, se crean 2 archivos, uno con las pruebas de la 
funcion *printf* (main.c) y otro con las pruebas de *ftprintf* (ft_main.c). Al final
se crearan dos archivos de extension txt: src.txt y dst txt, los cuales tendran el
resultado de la ejecucion de cada prueba.

Al realizar una diferencia de los archivos con el comando *diff*, podemos observar
las discrepancias entre nuestra funcion y la funcion estandar. De no haber ninguna
diferencia eso indicaria que nuestra funcion esta acorde a los parametros esperados.

```
diff src.txt dst.txt
```

## Parte Principal
Para probar la parte principal debemos ejecutar el comando **make** y ajustar la
variable *RUN* en el makefile, en caso de desear cambiar cuales parametros de
conversion deseamos evaluar.
```
make
```

## Bonus
Para probar la parte bonus es recomendable limpiar todos los archivos compilados
y luego ejecutar la regla **bonus** para trabajar con un ambiente limpio.

```
make fclean
make bonus
```

### Bonus contemplados
* Flags
    * ' '
    * '+'
    * '#'
* Types
    * l
    * ll
    * h
    * hh
* Converter
    * n

## NOTA
El comportamiento de la funcion printf en **Mac** difiere de manera significativa
a la version de **Linux**, por tanto los resultados pueden variar en caso de verificar
en un ambiente fuera de los proporcionados en la academia.
### Adicional
Al realizar la comprobacion de los *flags* del bonus, en mi proyecto de **libftprintf**
no considere el *flag* ' por lo tanto la comprobacion realizada de ese bonus, el sistema
de evaluacion lo considera incompleto.
