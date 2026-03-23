# Gestor de Tareas en C++

Este proyecto implementa un gestor de tareas completamente funcional utilizando C++.  
El programa permite administrar una lista de tareas mediante un menú interactivo en consola, ofreciendo opciones para agregar, visualizar, completar y eliminar tareas.  
El código está organizado de forma clara y modular, ideal para quienes están aprendiendo programación en C++ y desean practicar estructuras dinámicas y orientación a objetos.  

### 1.Características del programa
• Agregar nuevas tareas con un nombre personalizado  
• Mostrar todas las tareas registradas  
• Marcar tareas como completadas  
• Eliminar tareas mediante su número  
• Menú interactivo con opciones numeradas  
• Código orientado a objetos, limpio y fácil de entender  
• Uso de vectores dinámicos para almacenar las tareas  
  
Estas funciones permiten gestionar la información de manera sencilla y eficiente.  

### 2.Funcionamiento  
Al iniciar el programa, el usuario accede a un menú principal que permanece activo hasta que se selecciona la opción de salida.  
El menú ofrece cinco opciones principales:  

1.Agregar una nueva tarea  
2.Mostrar todas las tareas  
3.Completar una tarea existente  
4.Eliminar una tarea  
5.Salir del programa  

Cada opción ejecuta una acción específica dentro del gestor.  
El programa valida las entradas del usuario para evitar errores comunes, como seleccionar números fuera de rango o intentar completar tareas inexistentes.  

El sistema utiliza un vector dinámico para almacenar las tareas, lo que permite añadir y eliminar elementos sin necesidad de estructuras complejas.  

### 3.Estructura del código  
El proyecto está organizado en dos clases principales:  

Clase Tarea  
Representa una tarea individual.  
Incluye:  
• Un nombre descriptivo  
• Un estado booleano que indica si está completada  
Esta clase encapsula la información mínima necesaria para representar una tarea.  

Clase GestorTareas  
Gestiona el conjunto de tareas.  
Incluye:  
• Un vector dinámico de objetos Tarea    
• Métodos para agregar, mostrar, completar y eliminar tareas  
Toda la lógica del programa se concentra en esta clase, manteniendo el código ordenado y fácil de mantener.  

