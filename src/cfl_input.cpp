#include "cfl_input.h"

#include <FL/Fl.H>
#include <FL/Fl_File_Input.H>
#include <FL/Fl_Float_Input.H>
#include <FL/Fl_Image.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Int_Input.H>
#include <FL/Fl_Multiline_Input.H>
#include <FL/Fl_Secret_Input.H>
#include <FL/Fl_Spinner.H>

WIDGET_CLASS(Fl_Input)

WIDGET_DEFINE(Fl_Input)

INPUT_DEFINE(Fl_Input)

WIDGET_CLASS(Fl_Int_Input)

WIDGET_DEFINE(Fl_Int_Input)

INPUT_DEFINE(Fl_Int_Input)

WIDGET_CLASS(Fl_Float_Input)

WIDGET_DEFINE(Fl_Float_Input)

INPUT_DEFINE(Fl_Float_Input)

WIDGET_CLASS(Fl_Multiline_Input)

WIDGET_DEFINE(Fl_Multiline_Input)

INPUT_DEFINE(Fl_Multiline_Input)

WIDGET_CLASS(Fl_Secret_Input)

WIDGET_DEFINE(Fl_Secret_Input)

INPUT_DEFINE(Fl_Secret_Input)

WIDGET_CLASS(Fl_File_Input)

WIDGET_DEFINE(Fl_File_Input)

void Fl_File_Input_set_down_box(Fl_File_Input *self, int box) {
    LOCK(self->down_box(static_cast<Fl_Boxtype>(box)));
}
int Fl_File_Input_down_box(const Fl_File_Input *self) {
    return self->down_box();
}

INPUT_DEFINE(Fl_File_Input)
