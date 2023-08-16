Procedure DeclarePDF
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


*IF THIS.hbox#0 &&??????,?????
*    LnPageW=GetNumProp(THIS.Hbox,36) &&????
*    LnPageH=GetNumProp(THIS.Hbox,34) &&????
*    IF LnPageH=-1 OR LnPageW=-1
*        =GetErrorMsg(@LcErrMsg)
*        this.Errorstr =m.LcErrMsg&&??????
*    ENDIF
*    IF DrawText(this.hBox,10,10,LnPageW-10,LnPageH-10,2,2,m.LcText)=-1
*        =GetErrorMsg(@LcErrMsg)
*        this.Errorstr =m.LcErrMsg&&??????
*        RETURN .F.        
*    ENDIF
*    RETURN .T.
*ENDIF 