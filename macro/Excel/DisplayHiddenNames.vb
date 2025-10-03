' Macro for Excel
' It displays hidden names.
' It works then, delete these names manually.
Sub DisplayHiddenNames()

    Dim name As Name
    For Each name In ActiveWorkbook.Names
        If name.Visible = False Then
            name.Visible = True
        End If
    Next

End Sub
