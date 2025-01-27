#include "widget.h"

#include <QApplication>
#include "denglu.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // Widget w;
    // w.show();

    // 测试denglu页面
    denglu b;
    b.show();

    return a.exec();
}
