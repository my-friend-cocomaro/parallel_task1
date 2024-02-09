## cmake и make:
### make:
после **make** пишем точку входа: *float* или *double*  
*examples*:
- `make double`
- `make float`
### cmake:
добавляем флаг *-DUSE_DOUBLE=ON* при сборке **cmake**  
*examples*:
- `cmake ../ -DUSE_DOUBLE=ON`
- `cmake ../`

## вывод:  
 *float*: -0.0278693  
 *double*: -0.000779279  
