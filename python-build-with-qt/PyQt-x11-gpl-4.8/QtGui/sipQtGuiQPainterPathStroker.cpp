/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:03:17 2012
 *
 * Copyright (c) 2010 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt.
 * 
 * This file may be used under the terms of the GNU General Public
 * License versions 2.0 or 3.0 as published by the Free Software
 * Foundation and appearing in the files LICENSE.GPL2 and LICENSE.GPL3
 * included in the packaging of this file.  Alternatively you may (at
 * your option) use any later version of the GNU General Public
 * License if such license has been publicly approved by Riverbank
 * Computing Limited (or its successors, if any) and the KDE Free Qt
 * Foundation. In addition, as a special exception, Riverbank gives you
 * certain additional rights. These rights are described in the Riverbank
 * GPL Exception version 1.1, which can be found in the file
 * GPL_EXCEPTION.txt in this package.
 * 
 * Please review the following information to ensure GNU General
 * Public Licensing requirements will be met:
 * http://trolltech.com/products/qt/licenses/licensing/opensource/. If
 * you are unsure which license is appropriate for your use, please
 * review the following information:
 * http://trolltech.com/products/qt/licenses/licensing/licensingoverview
 * or contact the sales department at sales@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtGui.h"

#line 233 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qpainterpath.sip"
#include <qpainterpath.h>
#line 39 "sipQtGuiQPainterPathStroker.cpp"

#line 160 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qvector.sip"
#include <qvector.h>
#line 43 "sipQtGuiQPainterPathStroker.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qpainterpath.sip"
#include <qpainterpath.h>
#line 55 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qpainterpath.sip"
#include <qpainterpath.h>
#line 48 "sipQtGuiQPainterPathStroker.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 51 "sipQtGuiQPainterPathStroker.cpp"


extern "C" {static PyObject *meth_QPainterPathStroker_setWidth(PyObject *, PyObject *);}
static PyObject *meth_QPainterPathStroker_setWidth(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QPainterPathStroker *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QPainterPathStroker, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setWidth(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPainterPathStroker, sipName_setWidth, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QPainterPathStroker_width(PyObject *, PyObject *);}
static PyObject *meth_QPainterPathStroker_width(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QPainterPathStroker *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPainterPathStroker, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->width();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPainterPathStroker, sipName_width, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QPainterPathStroker_setCapStyle(PyObject *, PyObject *);}
static PyObject *meth_QPainterPathStroker_setCapStyle(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::PenCapStyle a0;
        QPainterPathStroker *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QPainterPathStroker, &sipCpp, sipType_Qt_PenCapStyle, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setCapStyle(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPainterPathStroker, sipName_setCapStyle, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QPainterPathStroker_capStyle(PyObject *, PyObject *);}
static PyObject *meth_QPainterPathStroker_capStyle(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QPainterPathStroker *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPainterPathStroker, &sipCpp))
        {
            Qt::PenCapStyle sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->capStyle();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_Qt_PenCapStyle);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPainterPathStroker, sipName_capStyle, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QPainterPathStroker_setJoinStyle(PyObject *, PyObject *);}
static PyObject *meth_QPainterPathStroker_setJoinStyle(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::PenJoinStyle a0;
        QPainterPathStroker *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QPainterPathStroker, &sipCpp, sipType_Qt_PenJoinStyle, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setJoinStyle(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPainterPathStroker, sipName_setJoinStyle, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QPainterPathStroker_joinStyle(PyObject *, PyObject *);}
static PyObject *meth_QPainterPathStroker_joinStyle(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QPainterPathStroker *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPainterPathStroker, &sipCpp))
        {
            Qt::PenJoinStyle sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->joinStyle();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_Qt_PenJoinStyle);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPainterPathStroker, sipName_joinStyle, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QPainterPathStroker_setMiterLimit(PyObject *, PyObject *);}
static PyObject *meth_QPainterPathStroker_setMiterLimit(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QPainterPathStroker *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QPainterPathStroker, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setMiterLimit(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPainterPathStroker, sipName_setMiterLimit, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QPainterPathStroker_miterLimit(PyObject *, PyObject *);}
static PyObject *meth_QPainterPathStroker_miterLimit(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QPainterPathStroker *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPainterPathStroker, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->miterLimit();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPainterPathStroker, sipName_miterLimit, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QPainterPathStroker_setCurveThreshold(PyObject *, PyObject *);}
static PyObject *meth_QPainterPathStroker_setCurveThreshold(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QPainterPathStroker *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QPainterPathStroker, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setCurveThreshold(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPainterPathStroker, sipName_setCurveThreshold, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QPainterPathStroker_curveThreshold(PyObject *, PyObject *);}
static PyObject *meth_QPainterPathStroker_curveThreshold(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QPainterPathStroker *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPainterPathStroker, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->curveThreshold();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPainterPathStroker, sipName_curveThreshold, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QPainterPathStroker_setDashPattern(PyObject *, PyObject *);}
static PyObject *meth_QPainterPathStroker_setDashPattern(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::PenStyle a0;
        QPainterPathStroker *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QPainterPathStroker, &sipCpp, sipType_Qt_PenStyle, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setDashPattern(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const QVector<qreal> * a0;
        int a0State = 0;
        QPainterPathStroker *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QPainterPathStroker, &sipCpp, sipType_QVector_2400,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setDashPattern(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QVector<qreal> *>(a0),sipType_QVector_2400,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPainterPathStroker, sipName_setDashPattern, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QPainterPathStroker_createStroke(PyObject *, PyObject *);}
static PyObject *meth_QPainterPathStroker_createStroke(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPainterPath * a0;
        QPainterPathStroker *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QPainterPathStroker, &sipCpp, sipType_QPainterPath, &a0))
        {
            QPainterPath *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPainterPath(sipCpp->createStroke(*a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPainterPath,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPainterPathStroker, sipName_createStroke, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QPainterPathStroker_setDashOffset(PyObject *, PyObject *);}
static PyObject *meth_QPainterPathStroker_setDashOffset(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QPainterPathStroker *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QPainterPathStroker, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setDashOffset(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPainterPathStroker, sipName_setDashOffset, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QPainterPathStroker_dashOffset(PyObject *, PyObject *);}
static PyObject *meth_QPainterPathStroker_dashOffset(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QPainterPathStroker *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPainterPathStroker, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->dashOffset();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPainterPathStroker, sipName_dashOffset, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QPainterPathStroker_dashPattern(PyObject *, PyObject *);}
static PyObject *meth_QPainterPathStroker_dashPattern(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QPainterPathStroker *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPainterPathStroker, &sipCpp))
        {
            QVector<qreal> *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVector<qreal>(sipCpp->dashPattern());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QVector_2400,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPainterPathStroker, sipName_dashPattern, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QPainterPathStroker(void *, const sipTypeDef *);}
static void *cast_QPainterPathStroker(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QPainterPathStroker)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QPainterPathStroker(void *, int);}
static void release_QPainterPathStroker(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QPainterPathStroker *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QPainterPathStroker(sipSimpleWrapper *);}
static void dealloc_QPainterPathStroker(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QPainterPathStroker(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_QPainterPathStroker(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QPainterPathStroker(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QPainterPathStroker *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QPainterPathStroker();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QPainterPathStroker[] = {
    {SIP_MLNAME_CAST(sipName_capStyle), meth_QPainterPathStroker_capStyle, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_createStroke), meth_QPainterPathStroker_createStroke, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_curveThreshold), meth_QPainterPathStroker_curveThreshold, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_dashOffset), meth_QPainterPathStroker_dashOffset, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_dashPattern), meth_QPainterPathStroker_dashPattern, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_joinStyle), meth_QPainterPathStroker_joinStyle, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_miterLimit), meth_QPainterPathStroker_miterLimit, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setCapStyle), meth_QPainterPathStroker_setCapStyle, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setCurveThreshold), meth_QPainterPathStroker_setCurveThreshold, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setDashOffset), meth_QPainterPathStroker_setDashOffset, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setDashPattern), meth_QPainterPathStroker_setDashPattern, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setJoinStyle), meth_QPainterPathStroker_setJoinStyle, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setMiterLimit), meth_QPainterPathStroker_setMiterLimit, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setWidth), meth_QPainterPathStroker_setWidth, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_width), meth_QPainterPathStroker_width, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtGui_QPainterPathStroker = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QPainterPathStroker,
        {0}
    },
    {
        sipNameNr_QPainterPathStroker,
        {0, 0, 1},
        15, methods_QPainterPathStroker,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_QPainterPathStroker,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_QPainterPathStroker,
    0,
    0,
    0,
    release_QPainterPathStroker,
    cast_QPainterPathStroker,
    0,
    0,
    0
},
    0,
    0,
    0
};
