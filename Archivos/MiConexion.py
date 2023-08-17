import tkinter as tk
from tkinter import messagebox

root = tk.Tk()
root.withdraw()  # Oculta la ventana principal

# Mostrar un MessageBox
messagebox.showinfo("Título del MessageBox", "Este es un mensaje de ejemplo.")

# Mostrar un MessageBox con opciones
result = messagebox.askyesno("Pregunta", "¿Deseas continuar?")
if result:
    print("Seleccionaste Sí")
else:
    print("Seleccionaste No")

root.destroy()  # Cierra la ventana principal