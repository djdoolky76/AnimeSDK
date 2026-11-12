#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define CRPSUPERFAROBJPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xE8F3480)
#define CRPSUPERFAROBJPLUGIN_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE8F3360)

inline static constexpr unsigned int CRPSuperFarObjPlugin_TypeDefinitionIndex = 48356;

	class CRPSuperFarObjPlugin : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRPSUPERFAROBJPLUGIN_CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRPSUPERFAROBJPLUGIN_ONENABLE_OFFSET))(this);
		}

	};
