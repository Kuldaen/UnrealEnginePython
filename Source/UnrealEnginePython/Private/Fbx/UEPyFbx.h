#pragma once
#if ENGINE_MINOR_VERSION > 12
#include "UnrealEnginePython.h"

#if WITH_EDITOR
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wnull-dereference"
#include "UEPyFbxManager.h"
#include "UEPyFbxIOSettings.h"
#include "UEPyFbxImporter.h"
#include "UEPyFbxScene.h"
#include "UEPyFbxNode.h"
#include "UEPyFbxObject.h"
#include "UEPyFbxProperty.h"
#include "UEPyFbxPose.h"
#include "UEPyFbxMesh.h"
#pragma clang diagnostic pop

void ue_python_init_fbx(PyObject *);

#endif
#endif
