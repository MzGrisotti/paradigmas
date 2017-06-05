// generated by Fast Light User Interface Designer (fluid) version 1.0304

#include "window.h"

UserInterface::UserInterface() {
  { w = new Fl_Double_Window(500, 600, "Sorteio");
    w->box(FL_BORDER_BOX);
    w->color(FL_LIGHT3);
    w->labelcolor((Fl_Color)48);
    w->user_data((void*)(this));
     { myimage = new Fl_PNG_Image("logo.png");
  	  boxImg = new Fl_Box(0, 0, 500, 600);
  	  boxImg->image(myimage);
  	  boxImg->redraw();
	}
    { inputValue1 = new Fl_Int_Input(150, 255, 200, 30);
      inputValue1->type(2);
      inputValue1->labeltype(FL_NO_LABEL);
      inputValue1->labelsize(20);
      inputValue1->align(Fl_Align(FL_ALIGN_TOP));
    } // Fl_Int_Input* inputValue1
    { boxResult = new Fl_Box(75, 365, 350, 125);
      boxResult->box(FL_RSHADOW_BOX);
      boxResult->color(FL_LIGHT3);
      boxResult->labelsize(28);
    } // Fl_Box* boxResult
    { btnSorteio = new Fl_Button(100, 520, 300, 40, "Sortear");
      btnSorteio->box(FL_ROUND_UP_BOX);
      btnSorteio->down_box(FL_ROUND_DOWN_BOX);
      btnSorteio->color((Fl_Color)40);
      btnSorteio->selection_color((Fl_Color)40);
      btnSorteio->labelfont(8);
      btnSorteio->labelsize(32);
      btnSorteio->labelcolor((Fl_Color)55);
    } // Fl_Button* btnSorteio
    { btnReset = new Fl_Button(375, 255, 100, 28, "Reset");
      btnReset->box(FL_GTK_UP_BOX);
      btnReset->down_box(FL_GTK_DOWN_BOX);
      btnReset->color((Fl_Color)40);
      btnReset->selection_color((Fl_Color)40);
      btnReset->labelfont(1);
      btnReset->labelcolor((Fl_Color)55);
    } // Fl_Button* btnReset
    { boxGanhador = new Fl_Box(165, 313, 174, 35);
      boxGanhador->box(FL_DOWN_BOX);
      boxGanhador->color((Fl_Color)51);
      boxGanhador->selection_color((Fl_Color)48);
    } // Fl_Box* boxGanhador
    { Fl_Box* o = new Fl_Box(60, 262, 30, 16, "Participantes");
      o->labelfont(8);
      o->labelsize(26);
    } // Fl_Box* o

    w->end();
  } // Fl_Double_Window* w
}
