#include <Python.h>

void print_python_list(PyObject *p)
{
    Py_ssize_t size, i;
    PyObject *item;

    size = PyList_Size(p);
    printf("[*] Python list info\n");
    printf("[*] Size of the Python List = %zd\n", size);
    printf("[*] Allocated = %zd\n", ((PyListObject *)p)->allocated);

    for (i = 0; i < size; i++)
    {
        item = PyList_GetItem(p, i);
        printf("Element %zd: %s\n", i, Py_TYPE(item)->tp_name);
        if (PyBytes_Check(item))
        {
            printf("[.] bytes object info\n");
            printf("  size: %zd\n", (size_t)PyBytes_Size(item));
            printf("  trying string: %s\n", PyBytes_AsString(item));
            printf("  first 10 bytes: ");
            for (size_t j = 0; j < (size_t)PyBytes_Size(item) && j < 10; j++)
                printf("%02x ", (unsigned char)PyBytes_AsString(item)[j]);
            printf("\n");
        }
    }
}

void print_python_bytes(PyObject *p)
{
    if (!PyBytes_Check(p))
    {
        printf("[.] bytes object info\n");
        printf("  [ERROR] Invalid Bytes Object\n");
        return;
    }

    printf("[.] bytes object info\n");
    printf("  size: %zd\n", (size_t)PyBytes_Size(p));
    printf("  trying string: %s\n", PyBytes_AsString(p));
    printf("  first 10 bytes: ");
    for (size_t i = 0; i < (size_t)PyBytes_Size(p) && i < 10; i++)
        printf("%02x ", (unsigned char)PyBytes_AsString(p)[i]);
    printf("\n");
}

