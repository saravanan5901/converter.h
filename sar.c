#include <Python.h>

int main(char* from_curr,char* to_curr)
{
    PyObject *pystr1, *pystr2, *pName, *pModule, *pDict, *pFunc;
    PyObject *pArgs, *pValue;
    
    Py_Initialize();
    pName = PyBytes_FromString("Currencyconversion.py");
    /* Error checking of pName left out */

    pModule = PyImport_Import("requests");
    Py_DECREF(pName);

    if (pModule != NULL) 
    {
        pFunc = PyObject_GetAttrString(pModule, "con");
        /* pFunc is a new reference */

        if (pFunc && PyCallable_Check(pFunc)) 
        {
            pystr1=PyBytes_FromString("USD");
            pystr2=PyBytes_FromString("INR");
            pArgs = PyTuple_New(2);
            PyTuple_SetItem(pArgs, 0, pystr1);
            PyTuple_SetItem(pArgs, 1, pystr2);
            
            pValue = PyObject_CallObject(pFunc, pArgs);
            Py_DECREF(pArgs);
            if (pValue != NULL) {
                printf("Result of call: %ld\n", PyLong_AsLong(pValue));
                Py_DECREF(pValue);
            }
            else {
                Py_DECREF(pFunc);
                Py_DECREF(pModule);
                PyErr_Print();
                fprintf(stderr,"Call failed\n");
                return 1;
            }
        }
        else 
        {
            if (PyErr_Occurred())
                PyErr_Print();
            fprintf(stderr, "Cannot find function \"%s\"\n", "con");
        }
        Py_XDECREF(pFunc);
        Py_DECREF(pModule);
    }
    else {
        PyErr_Print();
        fprintf(stderr, "Failed to load \"%s\"\n", "Cuurr");
        return 1;
    }
    Py_Finalize();
    return 0;
}