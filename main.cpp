#include <QtGlobal>
#include <QDebug>

int main() {
#ifdef Q_OS_WIN
    qDebug() << "Running on Windows";
#elif defined(Q_OS_MACOS)
    qDebug() << "Running on macOS";
#elif defined(Q_OS_LINUX)
    qDebug() << "Running on Linux";
#else
    qDebug() << "Unknown operating system";
#endif

    // Other application code...

    return 0;
}
