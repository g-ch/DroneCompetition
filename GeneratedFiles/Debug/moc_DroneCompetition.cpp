/****************************************************************************
** Meta object code from reading C++ file 'DroneCompetition.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../DroneCompetition.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DroneCompetition.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DroneCompetition_t {
    QByteArrayData data[7];
    char stringdata0[167];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DroneCompetition_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DroneCompetition_t qt_meta_stringdata_DroneCompetition = {
    {
QT_MOC_LITERAL(0, 0, 16), // "DroneCompetition"
QT_MOC_LITERAL(1, 17, 12), // "timer_update"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 34), // "pushButton_FrontImgRGB_Cap_Cl..."
QT_MOC_LITERAL(4, 66, 34), // "pushButton_FrontImgDep_Cap_Cl..."
QT_MOC_LITERAL(5, 101, 33), // "pushButton_DownImgRGB_Cap_Cli..."
QT_MOC_LITERAL(6, 135, 31) // "pushButton_FrontImg_Cap_Clicked"

    },
    "DroneCompetition\0timer_update\0\0"
    "pushButton_FrontImgRGB_Cap_Clicked\0"
    "pushButton_FrontImgDep_Cap_Clicked\0"
    "pushButton_DownImgRGB_Cap_Clicked\0"
    "pushButton_FrontImg_Cap_Clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DroneCompetition[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DroneCompetition::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DroneCompetition *_t = static_cast<DroneCompetition *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->timer_update(); break;
        case 1: _t->pushButton_FrontImgRGB_Cap_Clicked(); break;
        case 2: _t->pushButton_FrontImgDep_Cap_Clicked(); break;
        case 3: _t->pushButton_DownImgRGB_Cap_Clicked(); break;
        case 4: _t->pushButton_FrontImg_Cap_Clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject DroneCompetition::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_DroneCompetition.data,
      qt_meta_data_DroneCompetition,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DroneCompetition::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DroneCompetition::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DroneCompetition.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int DroneCompetition::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
