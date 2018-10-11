#include <QCoreApplication>
#include <QDebug>

//Pass by value - COPY
void testVal(int x) {
    x = x * 10;
    qInfo() << "x = " << x;
}

//Pass by Ref - NOT A COPY
void testRef(int &y) {
    y = y * 10;
    qInfo() << "y = " << y;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int x = 5;
    int y = 0;

    qInfo() << "Testing val:";
    testVal(x);
    qInfo() << "X = " << x;

    qInfo() << "Testing ref:";
    testRef(y);
    qInfo() << "Y = " << y;

    return a.exec();
}
