/*
 * FILE : contrib/glcanvas/mac/glcanvas.cpp
 * 
 * This file was automatically generated by :
 * Simplified Wrapper and Interface Generator (SWIG)
 * Version 1.1 (Build 883)
 * 
 * Portions Copyright (c) 1995-1998
 * The University of Utah and The Regents of the University of California.
 * Permission is granted to distribute this file in any manner provided
 * this notice remains intact.
 * 
 * Do not make changes to this file--changes will be lost!
 *
 */


#define SWIGCODE
/* Implementation : PYTHON */

#define SWIGPYTHON
#include "Python.h"

#include <string.h>
#include <stdlib.h>
/* Definitions for Windows/Unix exporting */
#if defined(__WIN32__)
#   if defined(_MSC_VER)
#	define SWIGEXPORT(a) __declspec(dllexport) a
#   else
#	if defined(__BORLANDC__)
#	    define SWIGEXPORT(a) a _export
#	else
#	    define SWIGEXPORT(a) a
#	endif
#   endif
#else
#   define SWIGEXPORT(a) a
#endif

#ifdef __cplusplus
extern "C" {
#endif
extern void SWIG_MakePtr(char *, void *, char *);
extern void SWIG_RegisterMapping(char *, char *, void *(*)(void *));
extern char *SWIG_GetPtr(char *, void **, char *);
extern char *SWIG_GetPtrObj(PyObject *, void **, char *);
extern void SWIG_addvarlink(PyObject *, char *, PyObject *(*)(void), int (*)(PyObject *));
extern PyObject *SWIG_newvarlink(void);
#ifdef __cplusplus
}
#endif
#define SWIG_init    initglcanvasc

#define SWIG_name    "glcanvasc"

#include "wxPython.h"
#ifdef __WXMSW__
#include "myglcanvas.h"
#else
#include <wx/glcanvas.h>
#endif



static PyObject* t_output_helper(PyObject* target, PyObject* o) {
    PyObject*   o2;
    PyObject*   o3;

    if (!target) {
        target = o;
    } else if (target == Py_None) {
        Py_DECREF(Py_None);
        target = o;
    } else {
        if (!PyTuple_Check(target)) {
            o2 = target;
            target = PyTuple_New(1);
            PyTuple_SetItem(target, 0, o2);
        }
        o3 = PyTuple_New(1);
        PyTuple_SetItem(o3, 0, o);

        o2 = target;
        target = PySequence_Concat(o2, o3);
        Py_DECREF(o2);
        Py_DECREF(o3);
    }
    return target;
}

    // Put some wx default wxChar* values into wxStrings.
    static const wxString wxPyGLCanvasNameStr(wxT("GLCanvas"));
    static const wxString wxPyEmptyString(wxT(""));
#ifdef __cplusplus
extern "C" {
#endif
static void *SwigwxGLContextTowxObject(void *ptr) {
    wxGLContext *src;
    wxObject *dest;
    src = (wxGLContext *) ptr;
    dest = (wxObject *) src;
    return (void *) dest;
}

#define delete_wxGLContext(_swigobj) (delete _swigobj)
static PyObject *_wrap_delete_wxGLContext(PyObject *self, PyObject *args, PyObject *kwargs) {
    PyObject * _resultobj;
    wxGLContext * _arg0;
    PyObject * _argo0 = 0;
    char *_kwnames[] = { "self", NULL };

    self = self;
    if(!PyArg_ParseTupleAndKeywords(args,kwargs,"O:delete_wxGLContext",_kwnames,&_argo0)) 
        return NULL;
    if (_argo0) {
        if (_argo0 == Py_None) { _arg0 = NULL; }
        else if (SWIG_GetPtrObj(_argo0,(void **) &_arg0,"_wxGLContext_p")) {
            PyErr_SetString(PyExc_TypeError,"Type error in argument 1 of delete_wxGLContext. Expected _wxGLContext_p.");
        return NULL;
        }
    }
{
    PyThreadState* __tstate = wxPyBeginAllowThreads();
    delete_wxGLContext(_arg0);

    wxPyEndAllowThreads(__tstate);
    if (PyErr_Occurred()) return NULL;
}    Py_INCREF(Py_None);
    _resultobj = Py_None;
    return _resultobj;
}

#define wxGLContext_SetCurrent(_swigobj)  (_swigobj->SetCurrent())
static PyObject *_wrap_wxGLContext_SetCurrent(PyObject *self, PyObject *args, PyObject *kwargs) {
    PyObject * _resultobj;
    wxGLContext * _arg0;
    PyObject * _argo0 = 0;
    char *_kwnames[] = { "self", NULL };

    self = self;
    if(!PyArg_ParseTupleAndKeywords(args,kwargs,"O:wxGLContext_SetCurrent",_kwnames,&_argo0)) 
        return NULL;
    if (_argo0) {
        if (_argo0 == Py_None) { _arg0 = NULL; }
        else if (SWIG_GetPtrObj(_argo0,(void **) &_arg0,"_wxGLContext_p")) {
            PyErr_SetString(PyExc_TypeError,"Type error in argument 1 of wxGLContext_SetCurrent. Expected _wxGLContext_p.");
        return NULL;
        }
    }
{
    PyThreadState* __tstate = wxPyBeginAllowThreads();
    wxGLContext_SetCurrent(_arg0);

    wxPyEndAllowThreads(__tstate);
    if (PyErr_Occurred()) return NULL;
}    Py_INCREF(Py_None);
    _resultobj = Py_None;
    return _resultobj;
}

#define wxGLContext_SetColour(_swigobj,_swigarg0)  (_swigobj->SetColour(_swigarg0))
static PyObject *_wrap_wxGLContext_SetColour(PyObject *self, PyObject *args, PyObject *kwargs) {
    PyObject * _resultobj;
    wxGLContext * _arg0;
    wxString * _arg1;
    PyObject * _argo0 = 0;
    PyObject * _obj1 = 0;
    char *_kwnames[] = { "self","colour", NULL };

    self = self;
    if(!PyArg_ParseTupleAndKeywords(args,kwargs,"OO:wxGLContext_SetColour",_kwnames,&_argo0,&_obj1)) 
        return NULL;
    if (_argo0) {
        if (_argo0 == Py_None) { _arg0 = NULL; }
        else if (SWIG_GetPtrObj(_argo0,(void **) &_arg0,"_wxGLContext_p")) {
            PyErr_SetString(PyExc_TypeError,"Type error in argument 1 of wxGLContext_SetColour. Expected _wxGLContext_p.");
        return NULL;
        }
    }
{
    _arg1 = wxString_in_helper(_obj1);
    if (_arg1 == NULL)
        return NULL;
}
{
    PyThreadState* __tstate = wxPyBeginAllowThreads();
    wxGLContext_SetColour(_arg0,*_arg1);

    wxPyEndAllowThreads(__tstate);
    if (PyErr_Occurred()) return NULL;
}    Py_INCREF(Py_None);
    _resultobj = Py_None;
{
    if (_obj1)
        delete _arg1;
}
    return _resultobj;
}

#define wxGLContext_SwapBuffers(_swigobj)  (_swigobj->SwapBuffers())
static PyObject *_wrap_wxGLContext_SwapBuffers(PyObject *self, PyObject *args, PyObject *kwargs) {
    PyObject * _resultobj;
    wxGLContext * _arg0;
    PyObject * _argo0 = 0;
    char *_kwnames[] = { "self", NULL };

    self = self;
    if(!PyArg_ParseTupleAndKeywords(args,kwargs,"O:wxGLContext_SwapBuffers",_kwnames,&_argo0)) 
        return NULL;
    if (_argo0) {
        if (_argo0 == Py_None) { _arg0 = NULL; }
        else if (SWIG_GetPtrObj(_argo0,(void **) &_arg0,"_wxGLContext_p")) {
            PyErr_SetString(PyExc_TypeError,"Type error in argument 1 of wxGLContext_SwapBuffers. Expected _wxGLContext_p.");
        return NULL;
        }
    }
{
    PyThreadState* __tstate = wxPyBeginAllowThreads();
    wxGLContext_SwapBuffers(_arg0);

    wxPyEndAllowThreads(__tstate);
    if (PyErr_Occurred()) return NULL;
}    Py_INCREF(Py_None);
    _resultobj = Py_None;
    return _resultobj;
}

#define wxGLContext_GetWindow(_swigobj)  (_swigobj->GetWindow())
static PyObject *_wrap_wxGLContext_GetWindow(PyObject *self, PyObject *args, PyObject *kwargs) {
    PyObject * _resultobj;
    wxWindow * _result;
    wxGLContext * _arg0;
    PyObject * _argo0 = 0;
    char *_kwnames[] = { "self", NULL };

    self = self;
    if(!PyArg_ParseTupleAndKeywords(args,kwargs,"O:wxGLContext_GetWindow",_kwnames,&_argo0)) 
        return NULL;
    if (_argo0) {
        if (_argo0 == Py_None) { _arg0 = NULL; }
        else if (SWIG_GetPtrObj(_argo0,(void **) &_arg0,"_wxGLContext_p")) {
            PyErr_SetString(PyExc_TypeError,"Type error in argument 1 of wxGLContext_GetWindow. Expected _wxGLContext_p.");
        return NULL;
        }
    }
{
    PyThreadState* __tstate = wxPyBeginAllowThreads();
    _result = (wxWindow *)wxGLContext_GetWindow(_arg0);

    wxPyEndAllowThreads(__tstate);
    if (PyErr_Occurred()) return NULL;
}{ _resultobj = wxPyMake_wxObject(_result); }
    return _resultobj;
}

static void *SwigwxGLCanvasTowxWindow(void *ptr) {
    wxGLCanvas *src;
    wxWindow *dest;
    src = (wxGLCanvas *) ptr;
    dest = (wxWindow *) src;
    return (void *) dest;
}

static void *SwigwxGLCanvasTowxEvtHandler(void *ptr) {
    wxGLCanvas *src;
    wxEvtHandler *dest;
    src = (wxGLCanvas *) ptr;
    dest = (wxEvtHandler *) src;
    return (void *) dest;
}

static void *SwigwxGLCanvasTowxObject(void *ptr) {
    wxGLCanvas *src;
    wxObject *dest;
    src = (wxGLCanvas *) ptr;
    dest = (wxObject *) src;
    return (void *) dest;
}

#define new_wxGLCanvas(_swigarg0,_swigarg1,_swigarg2,_swigarg3,_swigarg4,_swigarg5,_swigarg6,_swigarg7) (new wxGLCanvas(_swigarg0,_swigarg1,_swigarg2,_swigarg3,_swigarg4,_swigarg5,_swigarg6,_swigarg7))
static PyObject *_wrap_new_wxGLCanvas(PyObject *self, PyObject *args, PyObject *kwargs) {
    PyObject * _resultobj;
    wxGLCanvas * _result;
    wxWindow * _arg0;
    wxWindowID  _arg1 = (wxWindowID ) -1;
    wxPoint * _arg2 = (wxPoint *) &wxDefaultPosition;
    wxSize * _arg3 = (wxSize *) &wxDefaultSize;
    long  _arg4 = (long ) 0;
    wxString * _arg5 = (wxString *) &wxPyGLCanvasNameStr;
    int * _arg6 = (int *) NULL;
    wxPalette * _arg7 = (wxPalette *) &wxNullPalette;
    PyObject * _argo0 = 0;
    wxPoint  temp;
    PyObject * _obj2 = 0;
    wxSize  temp0;
    PyObject * _obj3 = 0;
    PyObject * _obj5 = 0;
    int * temp1;
    PyObject * _obj6 = 0;
    PyObject * _argo7 = 0;
    char *_kwnames[] = { "parent","id","pos","size","style","name","attribList","palette", NULL };
    char _ptemp[128];

    self = self;
    if(!PyArg_ParseTupleAndKeywords(args,kwargs,"O|iOOlOOO:new_wxGLCanvas",_kwnames,&_argo0,&_arg1,&_obj2,&_obj3,&_arg4,&_obj5,&_obj6,&_argo7)) 
        return NULL;
    if (_argo0) {
        if (_argo0 == Py_None) { _arg0 = NULL; }
        else if (SWIG_GetPtrObj(_argo0,(void **) &_arg0,"_wxWindow_p")) {
            PyErr_SetString(PyExc_TypeError,"Type error in argument 1 of new_wxGLCanvas. Expected _wxWindow_p.");
        return NULL;
        }
    }
    if (_obj2)
{
    _arg2 = &temp;
    if (! wxPoint_helper(_obj2, &_arg2))
        return NULL;
}
    if (_obj3)
{
    _arg3 = &temp0;
    if (! wxSize_helper(_obj3, &_arg3))
        return NULL;
}
    if (_obj5)
{
    _arg5 = wxString_in_helper(_obj5);
    if (_arg5 == NULL)
        return NULL;
}
    if (_obj6)
{
    int i;
    if (PySequence_Check(_obj6)) {
        int size = PyObject_Length(_obj6);
        temp1 = new int[size+1]; // (int*)malloc((size + 1) * sizeof(int));
        for (i = 0; i < size; i++) {
            temp1[i] = PyInt_AsLong(PySequence_GetItem(_obj6, i));
        }
        temp1[size] = 0;
        _arg6 = temp1;
    }
}
    if (_argo7) {
        if (SWIG_GetPtrObj(_argo7,(void **) &_arg7,"_wxPalette_p")) {
            PyErr_SetString(PyExc_TypeError,"Type error in argument 8 of new_wxGLCanvas. Expected _wxPalette_p.");
        return NULL;
        }
    }
{
    PyThreadState* __tstate = wxPyBeginAllowThreads();
    _result = (wxGLCanvas *)new_wxGLCanvas(_arg0,_arg1,*_arg2,*_arg3,_arg4,*_arg5,_arg6,*_arg7);

    wxPyEndAllowThreads(__tstate);
    if (PyErr_Occurred()) return NULL;
}    if (_result) {
        SWIG_MakePtr(_ptemp, (char *) _result,"_wxGLCanvas_p");
        _resultobj = Py_BuildValue("s",_ptemp);
    } else {
        Py_INCREF(Py_None);
        _resultobj = Py_None;
    }
{
    if (_obj5)
        delete _arg5;
}
{
    delete [] _arg6;
}
    return _resultobj;
}

#define new_wxGLCanvasWithContext(_swigarg0,_swigarg1,_swigarg2,_swigarg3,_swigarg4,_swigarg5,_swigarg6,_swigarg7,_swigarg8) (new wxGLCanvas(_swigarg0,_swigarg1,_swigarg2,_swigarg3,_swigarg4,_swigarg5,_swigarg6,_swigarg7,_swigarg8))
static PyObject *_wrap_new_wxGLCanvasWithContext(PyObject *self, PyObject *args, PyObject *kwargs) {
    PyObject * _resultobj;
    wxGLCanvas * _result;
    wxWindow * _arg0;
    wxGLContext * _arg1 = (wxGLContext *) NULL;
    wxWindowID  _arg2 = (wxWindowID ) -1;
    wxPoint * _arg3 = (wxPoint *) &wxDefaultPosition;
    wxSize * _arg4 = (wxSize *) &wxDefaultSize;
    long  _arg5 = (long ) 0;
    wxString * _arg6 = (wxString *) &wxPyGLCanvasNameStr;
    int * _arg7 = (int *) NULL;
    wxPalette * _arg8 = (wxPalette *) &wxNullPalette;
    PyObject * _argo0 = 0;
    PyObject * _argo1 = 0;
    wxPoint  temp;
    PyObject * _obj3 = 0;
    wxSize  temp0;
    PyObject * _obj4 = 0;
    PyObject * _obj6 = 0;
    int * temp1;
    PyObject * _obj7 = 0;
    PyObject * _argo8 = 0;
    char *_kwnames[] = { "parent","shared","id","pos","size","style","name","attribList","palette", NULL };
    char _ptemp[128];

    self = self;
    if(!PyArg_ParseTupleAndKeywords(args,kwargs,"O|OiOOlOOO:new_wxGLCanvasWithContext",_kwnames,&_argo0,&_argo1,&_arg2,&_obj3,&_obj4,&_arg5,&_obj6,&_obj7,&_argo8)) 
        return NULL;
    if (_argo0) {
        if (_argo0 == Py_None) { _arg0 = NULL; }
        else if (SWIG_GetPtrObj(_argo0,(void **) &_arg0,"_wxWindow_p")) {
            PyErr_SetString(PyExc_TypeError,"Type error in argument 1 of new_wxGLCanvasWithContext. Expected _wxWindow_p.");
        return NULL;
        }
    }
    if (_argo1) {
        if (_argo1 == Py_None) { _arg1 = NULL; }
        else if (SWIG_GetPtrObj(_argo1,(void **) &_arg1,"_wxGLContext_p")) {
            PyErr_SetString(PyExc_TypeError,"Type error in argument 2 of new_wxGLCanvasWithContext. Expected _wxGLContext_p.");
        return NULL;
        }
    }
    if (_obj3)
{
    _arg3 = &temp;
    if (! wxPoint_helper(_obj3, &_arg3))
        return NULL;
}
    if (_obj4)
{
    _arg4 = &temp0;
    if (! wxSize_helper(_obj4, &_arg4))
        return NULL;
}
    if (_obj6)
{
    _arg6 = wxString_in_helper(_obj6);
    if (_arg6 == NULL)
        return NULL;
}
    if (_obj7)
{
    int i;
    if (PySequence_Check(_obj7)) {
        int size = PyObject_Length(_obj7);
        temp1 = new int[size+1]; // (int*)malloc((size + 1) * sizeof(int));
        for (i = 0; i < size; i++) {
            temp1[i] = PyInt_AsLong(PySequence_GetItem(_obj7, i));
        }
        temp1[size] = 0;
        _arg7 = temp1;
    }
}
    if (_argo8) {
        if (SWIG_GetPtrObj(_argo8,(void **) &_arg8,"_wxPalette_p")) {
            PyErr_SetString(PyExc_TypeError,"Type error in argument 9 of new_wxGLCanvasWithContext. Expected _wxPalette_p.");
        return NULL;
        }
    }
{
    PyThreadState* __tstate = wxPyBeginAllowThreads();
    _result = (wxGLCanvas *)new_wxGLCanvasWithContext(_arg0,_arg1,_arg2,*_arg3,*_arg4,_arg5,*_arg6,_arg7,*_arg8);

    wxPyEndAllowThreads(__tstate);
    if (PyErr_Occurred()) return NULL;
}    if (_result) {
        SWIG_MakePtr(_ptemp, (char *) _result,"_wxGLCanvas_p");
        _resultobj = Py_BuildValue("s",_ptemp);
    } else {
        Py_INCREF(Py_None);
        _resultobj = Py_None;
    }
{
    if (_obj6)
        delete _arg6;
}
{
    delete [] _arg7;
}
    return _resultobj;
}

#define wxGLCanvas_SetCurrent(_swigobj)  (_swigobj->SetCurrent())
static PyObject *_wrap_wxGLCanvas_SetCurrent(PyObject *self, PyObject *args, PyObject *kwargs) {
    PyObject * _resultobj;
    wxGLCanvas * _arg0;
    PyObject * _argo0 = 0;
    char *_kwnames[] = { "self", NULL };

    self = self;
    if(!PyArg_ParseTupleAndKeywords(args,kwargs,"O:wxGLCanvas_SetCurrent",_kwnames,&_argo0)) 
        return NULL;
    if (_argo0) {
        if (_argo0 == Py_None) { _arg0 = NULL; }
        else if (SWIG_GetPtrObj(_argo0,(void **) &_arg0,"_wxGLCanvas_p")) {
            PyErr_SetString(PyExc_TypeError,"Type error in argument 1 of wxGLCanvas_SetCurrent. Expected _wxGLCanvas_p.");
        return NULL;
        }
    }
{
    PyThreadState* __tstate = wxPyBeginAllowThreads();
    wxGLCanvas_SetCurrent(_arg0);

    wxPyEndAllowThreads(__tstate);
    if (PyErr_Occurred()) return NULL;
}    Py_INCREF(Py_None);
    _resultobj = Py_None;
    return _resultobj;
}

#define wxGLCanvas_SetColour(_swigobj,_swigarg0)  (_swigobj->SetColour(_swigarg0))
static PyObject *_wrap_wxGLCanvas_SetColour(PyObject *self, PyObject *args, PyObject *kwargs) {
    PyObject * _resultobj;
    wxGLCanvas * _arg0;
    wxString * _arg1;
    PyObject * _argo0 = 0;
    PyObject * _obj1 = 0;
    char *_kwnames[] = { "self","colour", NULL };

    self = self;
    if(!PyArg_ParseTupleAndKeywords(args,kwargs,"OO:wxGLCanvas_SetColour",_kwnames,&_argo0,&_obj1)) 
        return NULL;
    if (_argo0) {
        if (_argo0 == Py_None) { _arg0 = NULL; }
        else if (SWIG_GetPtrObj(_argo0,(void **) &_arg0,"_wxGLCanvas_p")) {
            PyErr_SetString(PyExc_TypeError,"Type error in argument 1 of wxGLCanvas_SetColour. Expected _wxGLCanvas_p.");
        return NULL;
        }
    }
{
    _arg1 = wxString_in_helper(_obj1);
    if (_arg1 == NULL)
        return NULL;
}
{
    PyThreadState* __tstate = wxPyBeginAllowThreads();
    wxGLCanvas_SetColour(_arg0,*_arg1);

    wxPyEndAllowThreads(__tstate);
    if (PyErr_Occurred()) return NULL;
}    Py_INCREF(Py_None);
    _resultobj = Py_None;
{
    if (_obj1)
        delete _arg1;
}
    return _resultobj;
}

#define wxGLCanvas_SwapBuffers(_swigobj)  (_swigobj->SwapBuffers())
static PyObject *_wrap_wxGLCanvas_SwapBuffers(PyObject *self, PyObject *args, PyObject *kwargs) {
    PyObject * _resultobj;
    wxGLCanvas * _arg0;
    PyObject * _argo0 = 0;
    char *_kwnames[] = { "self", NULL };

    self = self;
    if(!PyArg_ParseTupleAndKeywords(args,kwargs,"O:wxGLCanvas_SwapBuffers",_kwnames,&_argo0)) 
        return NULL;
    if (_argo0) {
        if (_argo0 == Py_None) { _arg0 = NULL; }
        else if (SWIG_GetPtrObj(_argo0,(void **) &_arg0,"_wxGLCanvas_p")) {
            PyErr_SetString(PyExc_TypeError,"Type error in argument 1 of wxGLCanvas_SwapBuffers. Expected _wxGLCanvas_p.");
        return NULL;
        }
    }
{
    PyThreadState* __tstate = wxPyBeginAllowThreads();
    wxGLCanvas_SwapBuffers(_arg0);

    wxPyEndAllowThreads(__tstate);
    if (PyErr_Occurred()) return NULL;
}    Py_INCREF(Py_None);
    _resultobj = Py_None;
    return _resultobj;
}

#define wxGLCanvas_GetContext(_swigobj)  (_swigobj->GetContext())
static PyObject *_wrap_wxGLCanvas_GetContext(PyObject *self, PyObject *args, PyObject *kwargs) {
    PyObject * _resultobj;
    wxGLContext * _result;
    wxGLCanvas * _arg0;
    PyObject * _argo0 = 0;
    char *_kwnames[] = { "self", NULL };
    char _ptemp[128];

    self = self;
    if(!PyArg_ParseTupleAndKeywords(args,kwargs,"O:wxGLCanvas_GetContext",_kwnames,&_argo0)) 
        return NULL;
    if (_argo0) {
        if (_argo0 == Py_None) { _arg0 = NULL; }
        else if (SWIG_GetPtrObj(_argo0,(void **) &_arg0,"_wxGLCanvas_p")) {
            PyErr_SetString(PyExc_TypeError,"Type error in argument 1 of wxGLCanvas_GetContext. Expected _wxGLCanvas_p.");
        return NULL;
        }
    }
{
    PyThreadState* __tstate = wxPyBeginAllowThreads();
    _result = (wxGLContext *)wxGLCanvas_GetContext(_arg0);

    wxPyEndAllowThreads(__tstate);
    if (PyErr_Occurred()) return NULL;
}    if (_result) {
        SWIG_MakePtr(_ptemp, (char *) _result,"_wxGLContext_p");
        _resultobj = Py_BuildValue("s",_ptemp);
    } else {
        Py_INCREF(Py_None);
        _resultobj = Py_None;
    }
    return _resultobj;
}

static PyMethodDef glcanvascMethods[] = {
	 { "wxGLCanvas_GetContext", (PyCFunction) _wrap_wxGLCanvas_GetContext, METH_VARARGS | METH_KEYWORDS },
	 { "wxGLCanvas_SwapBuffers", (PyCFunction) _wrap_wxGLCanvas_SwapBuffers, METH_VARARGS | METH_KEYWORDS },
	 { "wxGLCanvas_SetColour", (PyCFunction) _wrap_wxGLCanvas_SetColour, METH_VARARGS | METH_KEYWORDS },
	 { "wxGLCanvas_SetCurrent", (PyCFunction) _wrap_wxGLCanvas_SetCurrent, METH_VARARGS | METH_KEYWORDS },
	 { "new_wxGLCanvasWithContext", (PyCFunction) _wrap_new_wxGLCanvasWithContext, METH_VARARGS | METH_KEYWORDS },
	 { "new_wxGLCanvas", (PyCFunction) _wrap_new_wxGLCanvas, METH_VARARGS | METH_KEYWORDS },
	 { "wxGLContext_GetWindow", (PyCFunction) _wrap_wxGLContext_GetWindow, METH_VARARGS | METH_KEYWORDS },
	 { "wxGLContext_SwapBuffers", (PyCFunction) _wrap_wxGLContext_SwapBuffers, METH_VARARGS | METH_KEYWORDS },
	 { "wxGLContext_SetColour", (PyCFunction) _wrap_wxGLContext_SetColour, METH_VARARGS | METH_KEYWORDS },
	 { "wxGLContext_SetCurrent", (PyCFunction) _wrap_wxGLContext_SetCurrent, METH_VARARGS | METH_KEYWORDS },
	 { "delete_wxGLContext", (PyCFunction) _wrap_delete_wxGLContext, METH_VARARGS | METH_KEYWORDS },
	 { NULL, NULL }
};
#ifdef __cplusplus
}
#endif
/*
 * This table is used by the pointer type-checker
 */
static struct { char *n1; char *n2; void *(*pcnv)(void *); } _swig_mapping[] = {
    { "_signed_long","_long",0},
    { "_wxPrintQuality","_wxCoord",0},
    { "_wxPrintQuality","_int",0},
    { "_wxPrintQuality","_signed_int",0},
    { "_wxPrintQuality","_unsigned_int",0},
    { "_wxPrintQuality","_wxWindowID",0},
    { "_wxPrintQuality","_uint",0},
    { "_wxPrintQuality","_EBool",0},
    { "_wxPrintQuality","_size_t",0},
    { "_wxPrintQuality","_time_t",0},
    { "_byte","_unsigned_char",0},
    { "_long","_unsigned_long",0},
    { "_long","_signed_long",0},
    { "_size_t","_wxCoord",0},
    { "_size_t","_wxPrintQuality",0},
    { "_size_t","_time_t",0},
    { "_size_t","_unsigned_int",0},
    { "_size_t","_int",0},
    { "_size_t","_wxWindowID",0},
    { "_size_t","_uint",0},
    { "_uint","_wxCoord",0},
    { "_uint","_wxPrintQuality",0},
    { "_uint","_time_t",0},
    { "_uint","_size_t",0},
    { "_uint","_unsigned_int",0},
    { "_uint","_int",0},
    { "_uint","_wxWindowID",0},
    { "_wxChar","_char",0},
    { "_char","_wxChar",0},
    { "_struct_wxNativeFontInfo","_wxNativeFontInfo",0},
    { "_EBool","_wxCoord",0},
    { "_EBool","_wxPrintQuality",0},
    { "_EBool","_signed_int",0},
    { "_EBool","_int",0},
    { "_EBool","_wxWindowID",0},
    { "_unsigned_long","_long",0},
    { "_wxNativeFontInfo","_struct_wxNativeFontInfo",0},
    { "_signed_int","_wxCoord",0},
    { "_signed_int","_wxPrintQuality",0},
    { "_signed_int","_EBool",0},
    { "_signed_int","_wxWindowID",0},
    { "_signed_int","_int",0},
    { "_WXTYPE","_wxDateTime_t",0},
    { "_WXTYPE","_short",0},
    { "_WXTYPE","_signed_short",0},
    { "_WXTYPE","_unsigned_short",0},
    { "_unsigned_short","_wxDateTime_t",0},
    { "_unsigned_short","_WXTYPE",0},
    { "_unsigned_short","_short",0},
    { "_wxObject","_wxGLCanvas",SwigwxGLCanvasTowxObject},
    { "_wxObject","_wxGLContext",SwigwxGLContextTowxObject},
    { "_signed_short","_WXTYPE",0},
    { "_signed_short","_short",0},
    { "_unsigned_char","_byte",0},
    { "_unsigned_int","_wxCoord",0},
    { "_unsigned_int","_wxPrintQuality",0},
    { "_unsigned_int","_time_t",0},
    { "_unsigned_int","_size_t",0},
    { "_unsigned_int","_uint",0},
    { "_unsigned_int","_wxWindowID",0},
    { "_unsigned_int","_int",0},
    { "_short","_wxDateTime_t",0},
    { "_short","_WXTYPE",0},
    { "_short","_unsigned_short",0},
    { "_short","_signed_short",0},
    { "_wxWindowID","_wxCoord",0},
    { "_wxWindowID","_wxPrintQuality",0},
    { "_wxWindowID","_time_t",0},
    { "_wxWindowID","_size_t",0},
    { "_wxWindowID","_EBool",0},
    { "_wxWindowID","_uint",0},
    { "_wxWindowID","_int",0},
    { "_wxWindowID","_signed_int",0},
    { "_wxWindowID","_unsigned_int",0},
    { "_int","_wxCoord",0},
    { "_int","_wxPrintQuality",0},
    { "_int","_time_t",0},
    { "_int","_size_t",0},
    { "_int","_EBool",0},
    { "_int","_uint",0},
    { "_int","_wxWindowID",0},
    { "_int","_unsigned_int",0},
    { "_int","_signed_int",0},
    { "_wxDateTime_t","_unsigned_short",0},
    { "_wxDateTime_t","_short",0},
    { "_wxDateTime_t","_WXTYPE",0},
    { "_time_t","_wxCoord",0},
    { "_time_t","_wxPrintQuality",0},
    { "_time_t","_unsigned_int",0},
    { "_time_t","_int",0},
    { "_time_t","_wxWindowID",0},
    { "_time_t","_uint",0},
    { "_time_t","_size_t",0},
    { "_wxCoord","_int",0},
    { "_wxCoord","_signed_int",0},
    { "_wxCoord","_unsigned_int",0},
    { "_wxCoord","_wxWindowID",0},
    { "_wxCoord","_uint",0},
    { "_wxCoord","_EBool",0},
    { "_wxCoord","_size_t",0},
    { "_wxCoord","_time_t",0},
    { "_wxCoord","_wxPrintQuality",0},
    { "_wxEvtHandler","_wxGLCanvas",SwigwxGLCanvasTowxEvtHandler},
    { "_wxWindow","_wxGLCanvas",SwigwxGLCanvasTowxWindow},
{0,0,0}};

static PyObject *SWIG_globals;
#ifdef __cplusplus
extern "C" 
#endif
SWIGEXPORT(void) initglcanvasc() {
	 PyObject *m, *d;
	 SWIG_globals = SWIG_newvarlink();
	 m = Py_InitModule("glcanvasc", glcanvascMethods);
	 d = PyModule_GetDict(m);
	 PyDict_SetItemString(d,"WX_GL_RGBA", PyInt_FromLong((long) WX_GL_RGBA));
	 PyDict_SetItemString(d,"WX_GL_BUFFER_SIZE", PyInt_FromLong((long) WX_GL_BUFFER_SIZE));
	 PyDict_SetItemString(d,"WX_GL_LEVEL", PyInt_FromLong((long) WX_GL_LEVEL));
	 PyDict_SetItemString(d,"WX_GL_DOUBLEBUFFER", PyInt_FromLong((long) WX_GL_DOUBLEBUFFER));
	 PyDict_SetItemString(d,"WX_GL_STEREO", PyInt_FromLong((long) WX_GL_STEREO));
	 PyDict_SetItemString(d,"WX_GL_AUX_BUFFERS", PyInt_FromLong((long) WX_GL_AUX_BUFFERS));
	 PyDict_SetItemString(d,"WX_GL_MIN_RED", PyInt_FromLong((long) WX_GL_MIN_RED));
	 PyDict_SetItemString(d,"WX_GL_MIN_GREEN", PyInt_FromLong((long) WX_GL_MIN_GREEN));
	 PyDict_SetItemString(d,"WX_GL_MIN_BLUE", PyInt_FromLong((long) WX_GL_MIN_BLUE));
	 PyDict_SetItemString(d,"WX_GL_MIN_ALPHA", PyInt_FromLong((long) WX_GL_MIN_ALPHA));
	 PyDict_SetItemString(d,"WX_GL_DEPTH_SIZE", PyInt_FromLong((long) WX_GL_DEPTH_SIZE));
	 PyDict_SetItemString(d,"WX_GL_STENCIL_SIZE", PyInt_FromLong((long) WX_GL_STENCIL_SIZE));
	 PyDict_SetItemString(d,"WX_GL_MIN_ACCUM_RED", PyInt_FromLong((long) WX_GL_MIN_ACCUM_RED));
	 PyDict_SetItemString(d,"WX_GL_MIN_ACCUM_GREEN", PyInt_FromLong((long) WX_GL_MIN_ACCUM_GREEN));
	 PyDict_SetItemString(d,"WX_GL_MIN_ACCUM_BLUE", PyInt_FromLong((long) WX_GL_MIN_ACCUM_BLUE));
	 PyDict_SetItemString(d,"WX_GL_MIN_ACCUM_ALPHA", PyInt_FromLong((long) WX_GL_MIN_ACCUM_ALPHA));


{
   int i;
   for (i = 0; _swig_mapping[i].n1; i++)
        SWIG_RegisterMapping(_swig_mapping[i].n1,_swig_mapping[i].n2,_swig_mapping[i].pcnv);
}
}
