DIMENSION arr[1]
 AGETFILEVERSION(arr, "CrearPDF.exe")
*_SCREEN.caption = ALLTRIM("Crear PDF desde VFP 9")+"  "+"Versión"+" "+arr(4)
_screen.Icon= 'imagenes/pdf-crear-ic.ico'
_screen.MaxButton= .T.
_screen.MinButton= .T.
_screen.WindowState= 2
_screen.BackColor= RGB(41,124,244)
ON SHUTDOWN DO limpieza IN p_main.prg
SET DATE FRENCH
SET DELETED ON
SET EXCLUSIVE OFF
SET SYSMENU TO 
SET TALK OFF
SET EXACT ON
SET STATUS BAR OFF
CLEAR
CLEAR ALL
CLEAR ALL
SET PATH TO PROGRAMAS,FORMULARIOS,TABLAS,IMAGENES
DO FORM f_main.scx
READ events
SET SYSMENU TO DEFAULT 
ON SHUTDOWN 

PROCEDURE limpieza
	CLEAR EVENTS
	FOR x=1 TO _screen.FormCount
		_screen.Forms(_screen.FormCount).release()
	ENDFOR 
ENDPROC 