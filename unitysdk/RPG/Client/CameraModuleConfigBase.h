#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

#define RPG_CLIENT_CAMERAMODULECONFIGBASE_CTOR_OFFSET UNITYSDK_OFFSET(0xC9312B0)

namespace RPG::Client
{
	inline static constexpr unsigned int CameraModuleConfigBase_TypeDefinitionIndex = 69669;

	class CameraModuleConfigBase : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAMODULECONFIGBASE_CTOR_OFFSET))(this);
		}

	};
}
