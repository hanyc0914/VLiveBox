#include "vlivebox.h"
#include "ui_vlivebox.h"

VLiveBox::VLiveBox(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::VLiveBox)
{
    ui->setupUi(this);
}

VLiveBox::~VLiveBox()
{
    delete ui;
}
