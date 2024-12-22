#ifndef GRAPHFUNCTIONS_GLOBAL_H
#define GRAPHFUNCTIONS_GLOBAL_H

#include <QtCore/qglobal.h>
#include <vector>
#include <cmath>

#if defined(GRAPHFUNCTIONS_LIBRARY)
#define GRAPHFUNCTIONS_EXPORT Q_DECL_EXPORT
#else
#define GRAPHFUNCTIONS_EXPORT Q_DECL_IMPORT
#endif

#endif // GRAPHFUNCTIONS_GLOBAL_H
