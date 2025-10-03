' Macro for Excel
' It deletes Styles without built in.
Sub DeleteUserStyles()

    Dim style As Style
    For Each style In ActiveWorkbook.Styles
        If style.BuiltIn = False Then
            style.Delete
        End If
    Next

End Sub
