/****************************************************************************
** Meta object code from reading C++ file 'datawindow2.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "datawindow2.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'datawindow2.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_datawindow2[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x0a,
      28,   26,   12,   12, 0x0a,
      47,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_datawindow2[] = {
    "datawindow2\0\0SaveButton()\0n\0"
    "displayplayer(int)\0confirmpressed()\0"
};

void datawindow2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        datawindow2 *_t = static_cast<datawindow2 *>(_o);
        switch (_id) {
        case 0: _t->SaveButton(); break;
        case 1: _t->displayplayer((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->confirmpressed(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData datawindow2::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject datawindow2::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_datawindow2,
      qt_meta_data_datawindow2, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &datawindow2::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *datawindow2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *datawindow2::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_datawindow2))
        return static_cast<void*>(const_cast< datawindow2*>(this));
    return QWidget::qt_metacast(_clname);
}

int datawindow2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
