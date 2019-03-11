#include "toolbar.h"

Toolbar::Toolbar(const wxString &title)
    :wxFrame(NULL,wxID_ANY,title,wxPoint(500,250),wxSize(300,250))
{
    wxImage::AddHandler(new wxPNGHandler);//Adding Handler for png files

    wxBitmap exit(wxT("Exit.png"),wxBITMAP_TYPE_PNG);//Creating icon tool
    wxBitmap Edit(wxT("Edit.png"),wxBITMAP_TYPE_PNG);//Creating Edit tool 
    wxBitmap Search(wxT("Search.png"),wxBITMAP_TYPE_PNG);//Creating Search tool

    wxToolBar *toolbar =CreateToolBar();//Creating a toolbar
    toolbar->AddTool(wxID_EXIT,"Exit",exit,"Exit");//Adding Exit tool 
    toolbar->AddTool(wxID_ANY,"Edit",Edit,"Edit");//Adding Edit tool
    toolbar->AddTool(wxID_ANY,"Search",Search,"Search");//Adding Search tool
    toolbar->Realize();

    //Connecting wxID_EXIT with QnQuit function

    Connect(wxID_EXIT,wxEVT_COMMAND_TOOL_CLICKED,wxCommandEventHandler(Toolbar::OnQuit));

}

void Toolbar::OnQuit(wxCommandEvent &event)
{
    Close();//This closes the window
}