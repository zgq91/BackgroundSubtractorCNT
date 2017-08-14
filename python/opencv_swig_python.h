#ifndef OPENCV_SWIG_PYTHON_H
#define OPENCV_SWIG_PYTHON_H

#include <opencv2/opencv.hpp>
#include <Python.h>

using namespace cv;

bool pyopencv_to(PyObject* o, Mat& m, const char* name = "<unknown>");
PyObject* pyopencv_from(const Mat& m);
bool isMatType(PyObject *type);

#if PY_MAJOR_VERSION >= 3
void *initOpenCVSwig();
#else
void initOpenCVSwig();
#endif

#endif // OPENCV_SWIG_PYTHON_H
