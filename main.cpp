#include "toolbar.h"
#include "main.h"

IMPLEMENT_APP(MyApp)

bool MyApp::OnInit()
{
    Toolbar *t = new Toolbar("ToolBar");//Creating a new window
    t->Show(true);
    
    return true;
};