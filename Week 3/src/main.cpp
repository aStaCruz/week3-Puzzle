#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>  //step2
#include <magic_8_ball.h> //step1

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    QQmlApplicationEngine engine;

    // Call main.qml
    magic_8_ball balls; //step1
    engine.rootContext()->setContextProperty("Cursed_8_ball", &balls); //step2

    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
