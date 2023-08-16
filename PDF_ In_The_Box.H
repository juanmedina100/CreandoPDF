*!* Common between PDF In-The-Box and All In-The-Box
#Define Box_Author  15
#Define Box_FileName  10
#Define Box_FontName  11
#Define Box_Keywords  16
#Define Box_NonEmbeddedFonts  12
#Define Box_PaperSizeName  13
#Define Box_Producer  19
#Define Box_Style  18
#Define Box_Subject  17
#Define Box_Title  14
#Define Box_TempDir  57

*!*----------- Numerical property identifier (to be used in GetNumProp and SetNumProp functions)

*!* Common between PDF In-The-Box and All In-The-Box
#Define Box_Aborted  20
#Define Box_Active  42
#Define Box_BrushColor  21
#Define Box_BrushStyle  22
#Define Box_ChapterNumber  57
#Define Box_CharacterSpacing  47
#Define Box_EmbedFonts  23
#Define Box_EnableOutput  56
#Define Box_FontBold  24
#Define Box_FontCharset  49
#Define Box_FontColor  25
#Define Box_FontDegreeAngle  26
#Define Box_FontItalic  27
#Define Box_FontSize  28
#Define Box_FontStrikeOut  29
#Define Box_FontUnderline  30
#Define Box_ImageCompressMode  31
#Define Box_JpegQuality  45
#Define Box_LengthUnit  32
#Define Box_LineSpacing  48
#Define Box_MetafileRes  50
#Define Box_Orientation  33
#Define Box_PageCount  58
#Define Box_PageHeight  34
#Define Box_PageNumber  35
#Define Box_PageNumberInChapter  59
#Define Box_PageWidth  36
#Define Box_ParaNumber  53
#Define Box_PenColor  37
#Define Box_PenStyle  38
#Define Box_PenWidth  39
#Define Box_PenX  40
#Define Box_PenY  41
#Define Box_Printing  42
#Define Box_SmartHorzAlignment  51
#Define Box_SmartStretchDraw  46
#Define Box_SmartVertAlignment  52
#Define Box_StoreRepeatedImages  55
#Define Box_TextX  54
#Define Box_TextY  43
#Define Box_WantPageCount  60
#Define Box_WantShow  44

*!*------------------------------------------  Event identifiers ----------------------------------
*!* Symbols to be used in the TrapEvent function

*!* Common between PDF In-The-Box and All In-The-Box
#Define Box_OnAbort  1
#Define Box_OnEnd  2
#Define Box_OnNewPage  3
#Define Box_OnStart  4

*!*------------------------------------------  Other constants ----------------------------------

*!* ---------- Brush styles (values of the BrushStyle property)

#Define bsSolid  0
#Define bsClear  1

*!* ---------- Pen style (values of the PenStyle property)

#Define psSolid  0
#Define psDash  1
#Define psClear  5

*!*----------- Image Compress Mode (values of the ImageCompressMode property)

#Define cpNone  0
#Define cpZlib  1
#Define cpJpeg  2

*!*----------- Length Units (values of the LengthUnit property)

#Define luTenth  0
#Define luPoint  1

*!*----------- Paper Orientation (values of the Orientation property)

#Define poPortrait  0
#Define poLandscape  1

*!*----------- Horizontal Alignment (to be used in DefineCol, DefineGrid and DrawText methods)

#Define taLeftJustify  0
#Define taRightJustify  1
#Define taCenter  2

*!*----------- Vertical Alignment (to be used in DefineCol and DrawText methods)
#Define vaTop  0
#Define vaBottom  1
#Define vaCenter  2

*!*----------- Field types (to be used in DefineField)
#Define ftPushButton  0
#Define ftEditBox  1
#Define ftMemoBox  2
#Define ftListBox  3
#Define ftComboBox  4
#Define ftCheckBox  5
#Define ftRadioButton  6

*!*----------- Field properties (to be used in SetStrFieldProp and SetNumFieldProp)
#Define fpVisible  0
#Define fpReadOnly  1
#Define fpRequired  2
#Define fpPassword  3
#Define fpCanExport  4
#Define fpCanPrint  5
#Define fpAllowOutOfList  6
#Define fpMaxLength  7
#Define fpAlignment  8
#Define fpBorderStyle  9
#Define fpBorderColor  10
#Define fpBorderWidth  11
#Define fpCheckMark  12
#Define fpLabelFontName  13
#Define fpLabelFontSize  14
#Define fpLabelFontColor  15
#Define fpLabelFontBold  16
#Define fpLabelFontItalic  17
#Define fpLabelFontCharset  18
#Define fpItems  19
#Define fpDefault  20

*!*----------- Field events (to be used in SetAction)
#Define evOnChange  0
#Define evOnMouseMove  1
#Define evOnMouseExit  2
#Define evOnFormatting  3
#Define evOnGotFocus  4
#Define evOnKeyPress  5
#Define evOnLostFocus  6
#Define evOnMouseDown  7
#Define evOnMouseUp  8

*!*----------- Field action types (to be used in SetAction)
#Define acLink  0
#Define acHide  1
#Define acShow  2
#Define acSubmitForm  3
#Define acResetForm  4
#Define acImportData  5
#Define acJavaScript  6

*!*----------- Field border styles (to be used in SetNumFieldProp)
#Define boSolid  0
#Define boDashed  1
#Define boBeveled  2
#Define boInset  3
#Define boUnderline  4

*!*----------- Page Counters (to be used in DrawPageCounter)
#Define pgNone  0
#Define pgPageNumber  1
#Define pgPageCount  2
#Define pgPageNumberInChapter  3
#Define pgPageCountInChapter  4
#Define pgChapterNumber  5
#Define pgChapterCount  6
#Define pgFrontNumber  7
#Define pgFrontCount  8
#Define pgFrontNumberInChapter  9
#Define pgFrontCountInChapter  10

*!*----------- Page number formats (to be used in SetPageNumberFormat)
#Define pf1  0
#Define pf01  1
#Define pf001  2
#Define pf0001  3
#Define pfUpcaseLetters  4
#Define pfLowcaseLetters  5
#Define pfUpcaseRoman  6
#Define pfLowcaseRoman  7

*!*----------- Color kinds (to be used in SetColorEx)
#Define ckBrush  0
#Define ckPen  1
#Define ckFont  2

*!*----------- Color systems (to be used in SetColorEx)
#Define coColor  0
#Define coRGB  1
#Define coHSL  2
#Define coCMYK  3
#Define coGrayScale  4

Do Declare

*!*    
hBox = CreateBox(_Screen.HWnd, 0)
=SetNum(hBox, Box_WantShow, 1)

SetStr(hBox, Box_Title, "Minimal Example")              && 
CallBox(BeginDoc(hBox))                                 && 
SetNum(hBox, Box_FontBold, 1)                           && 
SetStr(hBox, Box_FontName, "Verdana")                   && 

CallBox(TextOut(hBox, 200, 300, "Hello, VFP"))          && 
SetNum(hBox, Box_FontBold, 2)                           && 
SetStr(hBox, Box_FontName, "Calibri")                   && 
CallBox(TextOut(hBox, 300, 400, "123,563"))             && 
CallBox(TextOut(hBox, 400, 500, "Link： www.mzvfp.com")) &&
CallBox(TextOut(hBox, 500, 600, "Demo"))                &&
CallBox(EndDoc(hBox))                                   &&


*!* Common between PDF In-The-Box and All In-The-Box
#Define Box_Author  15
#Define Box_FileName  10
#Define Box_FontName  11
#Define Box_Keywords  16
#Define Box_NonEmbeddedFonts  12
#Define Box_PaperSizeName  13
#Define Box_Producer  19
#Define Box_Style  18
#Define Box_Subject  17
#Define Box_Title  14
#Define Box_TempDir  57

*!*----------- Numerical property identifier (to be used in GetNumProp and SetNumProp functions)

*!* Common between PDF In-The-Box and All In-The-Box
#Define Box_Aborted  20
#Define Box_Active  42
#Define Box_BrushColor  21
#Define Box_BrushStyle  22
#Define Box_ChapterNumber  57
#Define Box_CharacterSpacing  47
#Define Box_EmbedFonts  23
#Define Box_EnableOutput  56
#Define Box_FontBold  24
#Define Box_FontCharset  49
#Define Box_FontColor  25
#Define Box_FontDegreeAngle  26
#Define Box_FontItalic  27
#Define Box_FontSize  28
#Define Box_FontStrikeOut  29
#Define Box_FontUnderline  30
#Define Box_ImageCompressMode  31
#Define Box_JpegQuality  45
#Define Box_LengthUnit  32
#Define Box_LineSpacing  48
#Define Box_MetafileRes  50
#Define Box_Orientation  33
#Define Box_PageCount  58
#Define Box_PageHeight  34
#Define Box_PageNumber  35
#Define Box_PageNumberInChapter  59
#Define Box_PageWidth  36
#Define Box_ParaNumber  53
#Define Box_PenColor  37
#Define Box_PenStyle  38
#Define Box_PenWidth  39
#Define Box_PenX  40
#Define Box_PenY  41
#Define Box_Printing  42
#Define Box_SmartHorzAlignment  51
#Define Box_SmartStretchDraw  46
#Define Box_SmartVertAlignment  52
#Define Box_StoreRepeatedImages  55
#Define Box_TextX  54
#Define Box_TextY  43
#Define Box_WantPageCount  60
#Define Box_WantShow  44

*!*------------------------------------------  Event identifiers ----------------------------------
*!* Symbols to be used in the TrapEvent function

*!* Common between PDF In-The-Box and All In-The-Box
#Define Box_OnAbort  1
#Define Box_OnEnd  2
#Define Box_OnNewPage  3
#Define Box_OnStart  4

*!*------------------------------------------  Other constants ----------------------------------

*!* ---------- Brush styles (values of the BrushStyle property)

#Define bsSolid  0
#Define bsClear  1

*!* ---------- Pen style (values of the PenStyle property)

#Define psSolid  0
#Define psDash  1
#Define psClear  5

*!*----------- Image Compress Mode (values of the ImageCompressMode property)

#Define cpNone  0
#Define cpZlib  1
#Define cpJpeg  2

*!*----------- Length Units (values of the LengthUnit property)

#Define luTenth  0
#Define luPoint  1

*!*----------- Paper Orientation (values of the Orientation property)

#Define poPortrait  0
#Define poLandscape  1

*!*----------- Horizontal Alignment (to be used in DefineCol, DefineGrid and DrawText methods)

#Define taLeftJustify  0
#Define taRightJustify  1
#Define taCenter  2

*!*----------- Vertical Alignment (to be used in DefineCol and DrawText methods)
#Define vaTop  0
#Define vaBottom  1
#Define vaCenter  2

*!*----------- Field types (to be used in DefineField)
#Define ftPushButton  0
#Define ftEditBox  1
#Define ftMemoBox  2
#Define ftListBox  3
#Define ftComboBox  4
#Define ftCheckBox  5
#Define ftRadioButton  6

*!*----------- Field properties (to be used in SetStrFieldProp and SetNumFieldProp)
#Define fpVisible  0
#Define fpReadOnly  1
#Define fpRequired  2
#Define fpPassword  3
#Define fpCanExport  4
#Define fpCanPrint  5
#Define fpAllowOutOfList  6
#Define fpMaxLength  7
#Define fpAlignment  8
#Define fpBorderStyle  9
#Define fpBorderColor  10
#Define fpBorderWidth  11
#Define fpCheckMark  12
#Define fpLabelFontName  13
#Define fpLabelFontSize  14
#Define fpLabelFontColor  15
#Define fpLabelFontBold  16
#Define fpLabelFontItalic  17
#Define fpLabelFontCharset  18
#Define fpItems  19
#Define fpDefault  20

*!*----------- Field events (to be used in SetAction)
#Define evOnChange  0
#Define evOnMouseMove  1
#Define evOnMouseExit  2
#Define evOnFormatting  3
#Define evOnGotFocus  4
#Define evOnKeyPress  5
#Define evOnLostFocus  6
#Define evOnMouseDown  7
#Define evOnMouseUp  8

*!*----------- Field action types (to be used in SetAction)
#Define acLink  0
#Define acHide  1
#Define acShow  2
#Define acSubmitForm  3
#Define acResetForm  4
#Define acImportData  5
#Define acJavaScript  6

*!*----------- Field border styles (to be used in SetNumFieldProp)
#Define boSolid  0
#Define boDashed  1
#Define boBeveled  2
#Define boInset  3
#Define boUnderline  4

*!*----------- Page Counters (to be used in DrawPageCounter)
#Define pgNone  0
#Define pgPageNumber  1
#Define pgPageCount  2
#Define pgPageNumberInChapter  3
#Define pgPageCountInChapter  4
#Define pgChapterNumber  5
#Define pgChapterCount  6
#Define pgFrontNumber  7
#Define pgFrontCount  8
#Define pgFrontNumberInChapter  9
#Define pgFrontCountInChapter  10

*!*----------- Page number formats (to be used in SetPageNumberFormat)
#Define pf1  0
#Define pf01  1
#Define pf001  2
#Define pf0001  3
#Define pfUpcaseLetters  4
#Define pfLowcaseLetters  5
#Define pfUpcaseRoman  6
#Define pfLowcaseRoman  7

*!*----------- Color kinds (to be used in SetColorEx)
#Define ckBrush  0
#Define ckPen  1
#Define ckFont  2

*!*----------- Color systems (to be used in SetColorEx)
#Define coColor  0
#Define coRGB  1
#Define coHSL  2
#Define coCMYK  3
#Define coGrayScale  4

Do Declare

*!*    初始化
hBox = CreateBox(_Screen.HWnd, 0)
=SetNum(hBox, Box_WantShow, 1)

SetStr(hBox, Box_Title, "Minimal Example")             && 指定文件标题
CallBox(BeginDoc(hBox))                                && 打开文件
SetNum(hBox, Box_FontBold, 1)                          && 字体粗体
SetStr(hBox, Box_FontName, "宋体")                     && 定义字体

CallBox(TextOut(hBox, 200, 300, "Hello, 欢迎光临 VFP 梅子论坛"))   && 写入文本
SetNum(hBox, Box_FontBold, 2)                          && 字体粗体
SetStr(hBox, Box_FontName, "黑体")                     && 定义字体
CallBox(TextOut(hBox, 300, 400, "您好, 我是陈家驹!"))  && 写入文本
CallBox(TextOut(hBox, 400, 500, "请记住本站网址：www.mzvfp.com"))  && 写入文本
CallBox(TextOut(hBox, 500, 600, "本站会员，免费享受后续更新！"))   && 写入文本
CallBox(EndDoc(hBox))                                  && 关闭文件


Procedure Declare
    Declare Integer Abort In PDF_In_The_Box.Dll  ;
        Integer hBox
    Declare Integer AddPoint In PDF_In_The_Box.Dll  ;
        Integer hBox , ;
        Integer aX , ;
        Integer aY
    Declare Integer Annotation In PDF_In_The_Box.Dll  ;
        Integer hBox , ;
        Integer aX , ;
        Integer aY , ;
        String aText , ;
        Integer aAnnotationType
    Declare Integer AppendLinkPara In PDF_In_The_Box.Dll  ;
        Integer hBox , ;
        String aText , ;
        String aStyleName , ;
        String aLink
    Declare Integer AppendPara In PDF_In_The_Box.Dll  ;
        Integer hBox , ;
        String aTextt , ;
        String aStyleName
    Declare Integer AppendTabPara In PDF_In_The_Box.Dll  ;
        Integer hBox , ;
        String aText , ;
        String aStyleName
    Declare Integer Arc In PDF_In_The_Box.Dll  ;
        Integer hBox , ;
        Integer aX1 , ;
        Integer aY1 , ;
        Integer aX2 , ;
        Integer aY2 , ;
        Integer aX3 , ;
        Integer aY3 , ;
        Integer aX4 , ;
        Integer aY4
    Declare Integer BeginDoc In PDF_In_The_Box.Dll  ;
        Integer hBox
    Declare Integer BeginPara In PDF_In_The_Box.Dll  ;
        Integer hBox , ;
        String aText , ;
        String aStyleName
    Declare Integer CellTextHeight In PDF_In_The_Box.Dll  ;
        Integer hBox , ;
        String aGridName , ;
        Integer aCol , ;
        String aText
    Declare Integer CellX In PDF_In_The_Box.Dll  ;
        Integer hBox , ;
        String aGridName , ;
        Integer aCol , ;
        Integer aRow , ;
        Integer aCorner
    Declare Integer CellY In PDF_In_The_Box.Dll  ;
        Integer hBox , ;
        String aGridName , ;
        Integer aCol , ;
        Integer aRow , ;
        Integer aCorner
    Declare Integer Chord In PDF_In_The_Box.Dll  ;
        Integer hBox , ;
        Integer aX1 , ;
        Integer aY1 , ;
        Integer aX2 , ;
        Integer aY2 , ;
        Integer aX3 , ;
        Integer aY3 , ;
        Integer aX4 , ;
        Integer aY4
    Declare Integer ConnectToSynactis In PDF_In_The_Box.Dll  ;
        Integer hBox , ;
        String aPageRef
    Declare Integer CopyRect In PDF_In_The_Box.Dll  ;
        Integer hBox , ;
        Integer aDestX1 , ;
        Integer aDestY1 , ;
        Integer aDestX2 , ;
        Integer aDestY2 , ;
        Integer hDeviceContext , ;
        Integer aSourceX1 , ;
        Integer aSourceY1 , ;
        Integer aSourceX2 , ;
        Integer aSourceY2
    Declare Integer CreateBox In PDF_In_The_Box.Dll  ;
        Integer hWindow , ;
        Integer aMsgOffset
    Declare Integer CreatePdf In PDF_In_The_Box.Dll  ;
        Integer hWindow , ;
        Integer aMsgOffset
    Declare Integer DeclareSymbolicFont In PDF_In_The_Box.Dll  ;
        Integer hBox , ;
        String aFontName
    Declare Integer DefineCol In PDF_In_The_Box.Dll  ;
        Integer hBox , ;
        String aGridName , ;
        Integer aWidth , ;
        Integer aAlignment , ;
        Integer aVertAlignment , ;
        Integer aMultiLine
    Declare Integer DefineField In PDF_In_The_Box.Dll  ;
        Integer hBox , ;
        String aFieldName , ;
        Integer aFieldType , ;
        String aLabelText , ;
        String aTooltip , ;
        String aStyleName
    Declare Integer DefineGrid In PDF_In_The_Box.Dll  ;
        Integer hBox , ;
        String aGridName , ;
        Integer aAlignment , ;
        Integer aInternalMargin
    Declare Integer DefineName In PDF_In_The_Box.Dll  ;
        Integer hBox , ;
        Integer aX , ;
        Integer aY , ;
        String aName
    Declare Integer DefineStyle In PDF_In_The_Box.Dll  ;
        Integer hBox , ;
        String aStyleName , ;
        String aParameterName , ;
        String aValue
    Declare Integer Draw In PDF_In_The_Box.Dll  ;
        Integer hBox , ;
        Integer aX , ;
        Integer aY , ;
        Integer hBitmap
    Declare Integer DrawFromFile In PDF_In_The_Box.Dll  ;
        Integer hBox , ;
        Integer aX , ;
        Integer aY , ;
        String aFileName
    Declare Integer DrawGrid In PDF_In_The_Box.Dll  ;
        Integer hBox , ;
        String aGridName , ;
        Integer aX , ;
        Integer aY
    Declare Integer DrawPageCounter In PDF_In_The_Box.Dll  ;
        Integer hBox , ;
        Integer aX1 , ;
        Integer aY1 , ;
        Integer aX2 , ;
        Integer aAlignment , ;
        String aLeftTag , ;
        Integer aLeftCounter , ;
        String aMiddleTag , ;
        Integer aRightCounter , ;
        String aRightTag
    Declare Integer DrawRichTextFromFile In PDF_In_The_Box.Dll  ;
        Integer hBox , ;
        Integer aX1 , ;
        Integer aY1 , ;
        Integer aX2 , ;
        Integer aY2 , ;
        String aFileName
    Declare Integer DrawRow In PDF_In_The_Box.Dll  ;
        Integer hBox , ;
        String aGridName , ;
        Integer aRowHeight
    Declare Integer DrawText In PDF_In_The_Box.Dll  ;
        Integer hBox , ;
        Integer aX1 , ;
        Integer aY1 , ;
        Integer aX2 , ;
        Integer aY2 , ;
        Integer aAlignment , ;
        Integer aVertAlignment , ;
        String aText
    Declare Integer Ellipse In PDF_In_The_Box.Dll  ;
        Integer hBox , ;
        Integer aX1 , ;
        Integer aY1 , ;
        Integer aX2 , ;
        Integer aY2
    Declare Integer EmailDoc In PDF_In_The_Box.Dll  ;
        Integer hBox , ;
        String aRecipients , ;
        String aSubject , ;
        String aBody , ;
        Integer DisplayMail
    Declare Integer EndPara In PDF_In_The_Box.Dll  ;
        Integer hBox , ;
        String aText , ;
        String aStyleName
    Declare Integer FillRect In PDF_In_The_Box.Dll  ;
        Integer hBox , ;
        Integer aX1 , ;
        Integer aY1 , ;
        Integer aX2 , ;
        Integer aY2
    Declare Integer FrameRect In PDF_In_The_Box.Dll  ;
        Integer hBox , ;
        Integer aX1 , ;
        Integer aY1 , ;
        Integer aX2 , ;
        Integer aY2
    Declare Integer FreeBox In PDF_In_The_Box.Dll  ;
        Integer hBox
    Declare Integer FreePdf In PDF_In_The_Box.Dll  ;
        Integer hBox
    Declare Integer EndDoc In PDF_In_The_Box.Dll  ;
        Integer hBox
    Declare Integer GetErrorMsg In PDF_In_The_Box.Dll  ;
        String aText
    Declare Integer GetNumProp In PDF_In_The_Box.Dll  ;
        Integer hBox , ;
        Integer aPropID
    Declare Integer GetStrProp In PDF_In_The_Box.Dll  ;
        Integer hBox , ;
        Integer aPropID , ;
        String aValue
    Declare Integer LineTo In PDF_In_The_Box.Dll  ;
        Integer hBox , ;
        Integer aX , ;
        Integer aY
    Declare Integer LoadStyleSheet In PDF_In_The_Box.Dll  ;
        Integer hBox , ;
        String aStyleSheetName
    Declare Integer MoveTo In PDF_In_The_Box.Dll  ;
        Integer hBox , ;
        Integer aX , ;
        Integer aY
    Declare Integer NameNextPara In PDF_In_The_Box.Dll  ;
        Integer hBox , ;
        String aName
    Declare Integer NewPage In PDF_In_The_Box.Dll  ;
        Integer hBox
    Declare Integer NewSection In PDF_In_The_Box.Dll  ;
        Integer hBox , ;
        Integer aOrientation , ;
        Integer NewSection
    Declare Integer ParaHeight In PDF_In_The_Box.Dll  ;
        Integer hBox , ;
        String aText
    Declare Integer Pie In PDF_In_The_Box.Dll  ;
        Integer hBox , ;
        Integer aX1 , ;
        Integer aY1 , ;
        Integer aX2 , ;
        Integer aY2 , ;
        Integer aX3 , ;
        Integer aY3 , ;
        Integer aX4 , ;
        Integer aY4
    Declare Integer Polygon In PDF_In_The_Box.Dll  ;
        Integer hBox
    Declare Integer Polyline In PDF_In_The_Box.Dll  ;
        Integer hBox
    Declare Integer PolyBezier In PDF_In_The_Box.Dll  ;
        Integer hBox
    Declare Integer PolyBezierTo In PDF_In_The_Box.Dll  ;
        Integer hBox
    Declare Integer PrintDoc In PDF_In_The_Box.Dll  ;
        Integer hBox , ;
        String aPrinterName
    Declare Integer PrintBookMark In PDF_In_The_Box.Dll  ;
        Integer hBox , ;
        Integer aX , ;
        Integer aY , ;
        String aText , ;
        Integer aLevel , ;
        Integer WantOpenAtStart
    Declare Integer PutField In PDF_In_The_Box.Dll  ;
        Integer hBox , ;
        String aFieldName , ;
        Integer aX , ;
        Integer aY , ;
        Integer aWidth , ;
        Integer aHeight
    Declare Integer Rectangle In PDF_In_The_Box.Dll  ;
        Integer hBox , ;
        Integer aX1 , ;
        Integer aY1 , ;
        Integer aX2 , ;
        Integer aY2
    Declare Integer RoundRect In PDF_In_The_Box.Dll  ;
        Integer hBox , ;
        Integer aX1 , ;
        Integer aY1 , ;
        Integer aX2 , ;
        Integer aY2 , ;
        Integer aX3 , ;
        Integer aY3
    Declare Integer RubberStamp In PDF_In_The_Box.Dll  ;
        Integer hBox , ;
        Integer aX1 , ;
        Integer aY1 , ;
        Integer aX2 , ;
        Integer aY2 , ;
        String aText , ;
        Integer aStampType
    Declare Integer SetAction In PDF_In_The_Box.Dll  ;
        Integer hBox , ;
        String aFieldName , ;
        Integer Aevent , ;
        Integer aActionType , ;
        String aActionDef
    Declare Integer SetBookmark In PDF_In_The_Box.Dll  ;
        Integer hBox , ;
        Integer aX , ;
        Integer aY , ;
        String aText , ;
        Integer aLevel , ;
        Integer WantOpenAtStart
    Declare Integer SetColorEx In PDF_In_The_Box.Dll  ;
        Integer hBox , ;
        Integer aColorKind , ;
        Integer aColorSystem , ;
        Integer aComponent1 , ;
        Integer aComponent2 , ;
        Integer aComponent3 , ;
        Integer aComponent4
    Declare Integer SetLink In PDF_In_The_Box.Dll  ;
        Integer hBox , ;
        Integer aX1 , ;
        Integer aY1 , ;
        Integer aX2 , ;
        Integer aY2 , ;
        String aLink
    Declare Integer SetNumFieldProp In PDF_In_The_Box.Dll  ;
        Integer hBox , ;
        String aFieldName , ;
        Integer aProp , ;
        Integer aValue
    Declare Integer SetNumProp In PDF_In_The_Box.Dll  ;
        Integer hBox , ;
        Integer aPropID , ;
        Integer aValue
    Declare Integer SetOwnerPassword In PDF_In_The_Box.Dll  ;
        Integer hBox , ;
        String aPassword
    Declare Integer SetPageNumberFormat In PDF_In_The_Box.Dll  ;
        Integer hBox , ;
        Integer aPageFormat , ;
        Integer aChapterFormat
    Declare Integer SetStrFieldProp In PDF_In_The_Box.Dll  ;
        Integer hBox , ;
        String aFieldName , ;
        Integer aProp , ;
        String aValue
    Declare Integer SetStrProp In PDF_In_The_Box.Dll  ;
        Integer hBox , ;
        Integer aPropID , ;
        String aValue
    Declare Integer SetUserPassword In PDF_In_The_Box.Dll  ;
        Integer hBox , ;
        String aPassword , ;
        Integer CanPrint , ;
        Integer CanCopy , ;
        Integer CanAnnotate , ;
        Integer CanEdit
    Declare Integer Show In PDF_In_The_Box.Dll  ;
        Integer hBox
    Declare Integer ShowDoc In PDF_In_The_Box.Dll  ;
        Integer hBox
    Declare Integer StretchDraw In PDF_In_The_Box.Dll  ;
        Integer hBox , ;
        Integer aX1 , ;
        Integer aY1 , ;
        Integer aX2 , ;
        Integer aY2 , ;
        Integer hBitmap
    Declare Integer StretchDrawFromFile In PDF_In_The_Box.Dll  ;
        Integer hBox , ;
        Integer aX1 , ;
        Integer aY1 , ;
        Integer aX2 , ;
        Integer aY2 , ;
        String aFileName
    Declare Integer StyleParameter In PDF_In_The_Box.Dll  ;
        Integer hBox , ;
        String aParameterName , ;
        String aValue
    Declare Integer TextHeight In PDF_In_The_Box.Dll  ;
        Integer hBox , ;
        String aText
    Declare Integer TextOut In PDF_In_The_Box.Dll  ;
        Integer hBox , ;
        Integer aX , ;
        Integer aY , ;
        String aText
    Declare Integer TextToCell In PDF_In_The_Box.Dll  ;
        Integer hBox , ;
        String aGridName , ;
        Integer aCol , ;
        Integer aRow , ;
        String aText
    Declare Integer TextWidth In PDF_In_The_Box.Dll  ;
        Integer hBox , ;
        String aText
    Declare Integer TrapEvent In PDF_In_The_Box.Dll  ;
        Integer hBox , ;
        String aEventName , ;
        Integer aProcAddr
    Declare Integer WriteBookmark In PDF_In_The_Box.Dll  ;
        Integer hBox , ;
        Integer aX , ;
        Integer aY , ;
        String aText , ;
        Integer aLevel , ;
        Integer WantOpenAtStart
    Declare Integer WriteLink In PDF_In_The_Box.Dll  ;
        Integer hBox , ;
        Integer aX , ;
        Integer aY , ;
        String aText , ;
        String aLink
    Declare Integer WritePara In PDF_In_The_Box.Dll  ;
        Integer hBox , ;
        String aText , ;
        String aStyleName
    Declare Integer WriteRichText In PDF_In_The_Box.Dll  ;
        Integer hBox , ;
        String aFileName , ;
        String aBaseStyleName


Procedure SetNum(aBoxHandle, aPropID, aValue)
    =CallBox(SetNumProp(aBoxHandle, aPropID, aValue))
Endproc


Procedure SetStr(aBoxHandle , aPropID , aValue )
    =CallBox(SetStrProp(aBoxHandle, aPropID, aValue))
Endproc


Procedure CallBox(aFunctionDO )
    Local Msg
    Local N
    Msg = Space(255)

    If aFunctionDO = -1
        N = GetErrorMsg(@Msg)
        Messagebox(Msg, 16, "PDF In-The-Box")
        Return
    Endif
Endproc


IF THIS.hbox # 0 && Si la manija está presente, el primero cerca
    LnPageW = GetNumProp(THIS.Hbox, 36) && Ancho de Página
    LnPageH = GetNumProp(THIS.Hbox, 34) && Altura de Página
    IF LnPageH = -1 OR LnPageW = -1
        =GetErrorMsg(@LcErrMsg)
        this.Errorstr = m.LcErrMsg && El mensaje de error
    ENDIF
    IF DrawText(this.hBox, 10, 10,LnPageW - 10, LnPageH - 10, 2, 2, m.LcText) = -1
        =GetErrorMsg(@LcErrMsg)
        this.Errorstr = m.LcErrMsg && El mensaje de error
        RETURN .F.        
    ENDIF
    RETURN .T.
ENDIF 