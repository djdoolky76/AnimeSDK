#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"

#define UNITYENGINE_MOTION_A3484326C5BAC976_OFFSET UNITYSDK_OFFSET(0x4105140)
#define UNITYENGINE_MOTION__CTOR_OFFSET UNITYSDK_OFFSET(0x41050F0)

namespace UnityEngine
{
	inline static constexpr unsigned int Motion_TypeDefinitionIndex = 21068;

	class Motion : public ::UnityEngine::Object
	{
	public:
		::System::Boolean A52824BE9AED0C97; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MOTION__CTOR_OFFSET))(this);
		}

		::System::Boolean A3484326C5BAC976()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MOTION_A3484326C5BAC976_OFFSET))(this);
		}
	};
}
