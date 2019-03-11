#include<wx/wx.h>

class Toolbar : public wxFrame//Toolbar is inharided from wxFrame
{
    public:
        Toolbar(const wxString &title);

        void OnQuit(wxCommandEvent &event);//Prototyping OnQuit Function

};

