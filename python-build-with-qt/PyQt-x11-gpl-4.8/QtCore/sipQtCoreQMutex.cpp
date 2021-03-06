/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:03:04 2012
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

#include "sipAPIQtCore.h"

#line 36 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qmutex.sip"
#include <qmutex.h>
#line 39 "sipQtCoreQMutex.cpp"



extern "C" {static PyObject *meth_QMutex_lock(PyObject *, PyObject *);}
static PyObject *meth_QMutex_lock(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QMutex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMutex, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->lock();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMutex, sipName_lock, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QMutex_tryLock(PyObject *, PyObject *);}
static PyObject *meth_QMutex_tryLock(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QMutex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMutex, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->tryLock();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    {
        int a0;
        QMutex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QMutex, &sipCpp, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->tryLock(a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMutex, sipName_tryLock, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QMutex_unlock(PyObject *, PyObject *);}
static PyObject *meth_QMutex_unlock(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QMutex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMutex, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->unlock();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMutex, sipName_unlock, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QMutex(void *, const sipTypeDef *);}
static void *cast_QMutex(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QMutex)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QMutex(void *, int);}
static void release_QMutex(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QMutex *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QMutex(sipSimpleWrapper *);}
static void dealloc_QMutex(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QMutex(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_QMutex(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QMutex(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QMutex *sipCpp = 0;

    {
        QMutex::RecursionMode a0 = QMutex::NonRecursive;

        static const char *sipKwdList[] = {
            sipName_mode,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|E", sipType_QMutex_RecursionMode, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QMutex(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QMutex[] = {
    {SIP_MLNAME_CAST(sipName_lock), meth_QMutex_lock, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_tryLock), meth_QMutex_tryLock, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_unlock), meth_QMutex_unlock, METH_VARARGS, NULL}
};

static sipEnumMemberDef enummembers_QMutex[] = {
    {sipName_NonRecursive, QMutex::NonRecursive, 131},
    {sipName_Recursive, QMutex::Recursive, 131},
};


pyqt4ClassTypeDef sipTypeDef_QtCore_QMutex = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QMutex,
        {0}
    },
    {
        sipNameNr_QMutex,
        {0, 0, 1},
        3, methods_QMutex,
        2, enummembers_QMutex,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_QMutex,
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
    dealloc_QMutex,
    0,
    0,
    0,
    release_QMutex,
    cast_QMutex,
    0,
    0,
    0
},
    0,
    0,
    0
};
