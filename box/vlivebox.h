#ifndef VLIVEBOX_H
#define VLIVEBOX_H

#include <QMainWindow>

namespace Ui {
class VLiveBox;
}

class VLiveBox : public QMainWindow
{
    Q_OBJECT

public:
    explicit VLiveBox(QWidget *parent = 0);
    ~VLiveBox();

private:
    Ui::VLiveBox *ui;
};

#endif // VLIVEBOX_H
