#include "deviceview.h"
#include "ui_deviceview.h"

DeviceView::DeviceView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DeviceView)
{
    ui->setupUi(this);
}

DeviceView::~DeviceView()
{
    delete ui;
}
