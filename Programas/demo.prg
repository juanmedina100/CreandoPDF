*-------------------------------------------------------------------------------------
* OBJETIVO   : Crear documentos PDF desde Visual Foxpro utilizando la librería [ PDF_In_The_Box.dll ]
*              Utilizando sólo código.
*
* REFERENCIA : http://www.mzvfp.com/simple/?t97218.html
*
* COMENTARIO : Deseo compartir este material ya que me parece muy útil para quienes seguimos utilizando
*              Visual FoxPro, he tratado de hacer un reporte sencillo, espero sirva de ayuda para quienes lo utilicen.
*              Para ello me permito enviar este material al gran amigo Luis María Guayán para que por su intermedio
*              se pueda publicar.
*
*              Para más información buscar en la página de la referencia.
*
* AUTOR      : Valdemar Ramírez Moncada - Lima Perú - Enero - 2016.
*-------------------------------------------------------------------------------------
PROCEDURE CorrerPDF(miTabla)

#INCLUDE "../PDF_ In_The_Box.H"
SET PROCEDURE TO PDF_DLL
=DeclarePDF()

SET DEFAULT TO FULLPATH("")

#define CRTLF CHR(13)+ CHR(10)

* Creación el Cursos TABLE_DATA

*!*	CREATE CURSOR TABLE_DATA (tmp_id c(4), tmp_name c(50), tmp_city c(50), tmp_phone c(20), ;
*!*	       tmp_zipcode c(4), tmp_e_mail c(50), tmp_birth_date d, tmp_salary n(15,2))

*!*	* Se inserta los datos
*!*	INSERT INTO TABLE_DATA (tmp_id, tmp_name, tmp_city, tmp_phone, tmp_zipcode, tmp_e_mail, tmp_birth_date, tmp_salary) ;
*!*	       VALUES ("0001", "OCTAVIO PAZ", "MEXICO", "1234567", "052", "demo@mail.com.mx", CTOD("31/03/1914"), 1000000.00)

*!*	INSERT INTO TABLE_DATA (tmp_id, tmp_name, tmp_city, tmp_phone, tmp_zipcode, tmp_e_mail, tmp_birth_date, tmp_salary) ;
*!*	       VALUES ("0002", "ERNEST HEMINGWAY", "ESTADOS UNIDOS", "1234567", "001", "demo@mail.com.us", CTOD("21/07/1899"), 2000000.00)

*!*	INSERT INTO TABLE_DATA (tmp_id, tmp_name, tmp_city, tmp_phone, tmp_zipcode, tmp_e_mail, tmp_birth_date, tmp_salary) ;
*!*	       VALUES ("0003", "GABRIEL GARCIA MARQUEZ", "COLOMBIA", "1234567", "057", "demo@mail.com.co", CTOD("06/03/1927"), 3000000.00)

*!*	INSERT INTO TABLE_DATA (tmp_id, tmp_name, tmp_city, tmp_phone, tmp_zipcode, tmp_e_mail, tmp_birth_date, tmp_salary) ;
*!*	       VALUES ("0004", "MARIO VARGAS LLOSA", "PERU", "1234567", "051", "demo@mail.com.pe", CTOD("28/03/1936"), 4000000.00)

*!*	INSERT INTO TABLE_DATA (tmp_id, tmp_name, tmp_city, tmp_phone, tmp_zipcode, tmp_e_mail, tmp_birth_date, tmp_salary) ;
*!*	       VALUES ("0005", "JORGE LUIS BORGES", "ARGENTINA", "1234567", "054", "demo@mail.com.ar", CTOD("24/08/1899"), 5000000.00)

*!*	INSERT INTO TABLE_DATA (tmp_id, tmp_name, tmp_city, tmp_phone, tmp_zipcode, tmp_e_mail, tmp_birth_date, tmp_salary) ;
*!*	       VALUES ("0006", "JUAN RAMON JIMENEZ", "ESPAÑA", "1234567", "034", "demo@mail.com.es", CTOD("23/12/1881"), 6000000.00)

*!*	INSERT INTO TABLE_DATA (tmp_id, tmp_name, tmp_city, tmp_phone, tmp_zipcode, tmp_e_mail, tmp_birth_date, tmp_salary) ;
*!*	       VALUES ("0007", "GABRIELA MISTRAL", "CHILE", "1234567", "056", "demo@mail.com.cl", CTOD("07/04/1889"), 7000000.00)

*!*	INSERT INTO TABLE_DATA (tmp_id, tmp_name, tmp_city, tmp_phone, tmp_zipcode, tmp_e_mail, tmp_birth_date, tmp_salary) ;
*!*	       VALUES ("0008", "MIGUEL ANGEL ASTURIAS", "GUATEMALA", "1234567", "502", "demo@mail.com.gt", CTOD("19/10/1899"), 8000000.00)

*!*	GO TOP

*-----------------------------
NOTE tmp_id
NOTE tmp_name
NOTE tmp_city
NOTE tmp_phone
NOTE tmp_zipcode
NOTE tmp_e_mail
NOTE tmp_birth_date
NOTE tmp_salary
*-----------------------------


* Inicio del Reporte

hBox = CreateBox(_Screen.HWnd, 0)
=SetNum(hBox, Box_WantShow, 1)
=SetNum(hBox, Box_WantPageCount, 1)  ' Activates pre-calculation

SetStr(hBox, Box_FileName, FULLPATH("") + "PDF/PDF_Demo")

CallBox(BeginDoc(hBox))
SetNum(hBox, Box_FontBold, 1)
SetNum(hBox, Box_FontSize, 12)
SetNum(hBox, Box_FontColor, RGB(255,0,0))
SetStr(hBox, Box_FontName, "Verdana")

* Rectángulo
=SetNum(hBox, Box_BrushColor, RGB(255, 234, 153))
CallBox(Rectangle(hBox, 100, 230, 2000, 300))


* Insertar una imagen
CallBox(StretchDrawFromFile(hBox, 100, 0, 230, 250, FULLPATH("") + "IMAGENES/pict_pdf.PNG"))

* Título del Reporte

CallBox( DrawText(hBox, 100, 150, GetNumProp(hBox, Box_PageWidth) - 100, 1, taCenter, vaCenter, "Escritores Famosos"))

* Datos de la Cabecera
SetNum(hBox, Box_FontColor, RGB(0,0,0))
SetStr(hBox, Box_FontName, "Book Antiqua")
SetNum(hBox, Box_FontSize, 10)

* Establecer las columnas
LOCAL c01, c02, c03, c04, c05, c06, c07, c08
c01 = 150
C02 = 280
c03 = 620
c04 = 900
c05 = 1100
c06 = 1300
c07 = 1600
c08 = 1800

* Escribir cabecera
CallBox( TextOut(hBox, c01, 240, "Id"))
CallBox( TextOut(hBox, c02, 240, "Name"))
CallBox( TextOut(hBox, c03, 240, "City"))
CallBox( TextOut(hBox, c04, 240, "Phone"))
CallBox( TextOut(hBox, c05, 240, "ZipCode"))
CallBox( TextOut(hBox, c06, 240, "E_mail"))
CallBox( TextOut(hBox, c07, 240, "Birth_Date"))
CallBox( DrawText(hBox, c08, 240, c08 + 180, 1, taRightJustify, vaCenter, "Salary"))

*' Datos Detalle
SetNum(hBox, Box_FontBold, 0)
SetNum(hBox, Box_FontSize, 8)
SetStr(hBox, Box_FontName, "Calibri")

LOCAL xLine, Num
xLin = 310
Num = 0
DO WHILE !EOF()
   Num = Num + 1
   
   * Establecer color de fondo para las líneas impares
   IF MOD( Num, 2) <> 0
      SetNum(hBox, Box_BrushColor, RGB(230, 245, 255))
      CallBox(FillRect(hBox, 100, xlin, 2000, xlin + 40))   
   ENDIF
   
   CallBox( TextOut(hBox, c01, xLin, Tmp_Id) )
   CallBox( TextOut(hBox, c02, xLin, Tmp_Name) )
   CallBox( TextOut(hBox, c03, xLin, Tmp_City) )
   CallBox( TextOut(hBox, c04, xLin, Tmp_Phone) )
   CallBox( TextOut(hBox, c05, xLin, Tmp_ZipCode) )
   SetNum(hBox, Box_FontColor, RGB(0,0,204))
   CallBox( TextOut(hBox, c06, xLin, Tmp_E_mail) )
   SetNum(hBox, Box_FontColor, RGB(0,0,0))
   CallBox( TextOut(hBox, c07, xLin, DTOC(Tmp_birth_date)) )
   CallBox( DrawText(hBox, c08, xLin, c08 + 180, 1, taRightJustify, vaCenter, TRANSFORM(Tmp_Salary,"999,999,999.99")))
   xLin = xLin + 40
   SKIP
ENDDO
xLin = xLin + 40
SetNum(hBox, Box_FontColor, RGB(0,0,204))
SetStr(hBox, Box_FontName, "Comic Sans MS")

CallBox( DrawText(hBox, 100, xLin, GetNumProp(hBox, Box_PageWidth) - 100, 1, taCenter, vaCenter, "Texto Centrado"))
xLin = xLin + 40
CallBox( DrawText(hBox, 100, xLin, GetNumProp(hBox, Box_PageWidth) - 100, 1, taCenter, vaCenter, "http://www.mzvfp.com/simple/?t97218.html"))

SetStr(hBox, Box_FontName, "Verdana")
SetNum(hBox, Box_FontColor, RGB(0,0,0))


* Rectángulo Redondeado
xLin = xLin + 80
SetNum(hBox, Box_BrushColor, RGB(204, 255, 204))
CallBox(RoundRect(hBox, 100, xlin, 2000, xlin + 80, 20, 20))   


* Elipse
xLin = xLin + 100
SetNum(hBox, Box_BrushColor, RGB(204, 204, 255))
CallBox(Ellipse(hBox, 700, xlin, 1300, xlin + 500))   


* Número de Página
CallBox( MoveTo(hBox, 100, GetNumProp(hBox, Box_PageHeight) - 100))
CallBox( LineTo(hBox, GetNumProp(hBox, Box_PageWidth) - 100, GetNumProp(hBox, Box_PageHeight) - 100))
SetNum( hBox, Box_FontSize, 8)
CallBox( DrawPageCounter(hBox, 0, GetNumProp(hBox, Box_PageHeight) - 85, GetNumProp(hBox, Box_PageWidth) - 100, taRightJustify, "Page ", pgPageNumber, " of ", pgPageCount, ""))

SetNum(hBox, Box_WantShow, 0)
CallBox(EndDoc(hBox))
CallBox(ShowDoc(hBox))
SetNum(hBox, Box_WantPageCount, 0)

* Fin del Reporte

ENDPROC 