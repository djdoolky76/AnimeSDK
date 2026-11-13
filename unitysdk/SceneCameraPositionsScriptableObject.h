#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
class CameraPostion;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SCENECAMERAPOSITIONSSCRIPTABLEOBJECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA405B0)

inline static constexpr unsigned int SceneCameraPositionsScriptableObject_TypeDefinitionIndex = 48127;

	class SceneCameraPositionsScriptableObject : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::CameraPostion*>* CamPositions; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENECAMERAPOSITIONSSCRIPTABLEOBJECT_CTOR_OFFSET))(this);
		}

	};
