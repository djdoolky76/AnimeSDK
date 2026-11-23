#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Behaviour.h"

#define UNITYENGINE_LIGHTPROBEPROXYVOLUME__CTOR_OFFSET UNITYSDK_OFFSET(0x40E9D70)

namespace UnityEngine
{
	inline static constexpr unsigned int LightProbeProxyVolume_TypeDefinitionIndex = 17640;

	class LightProbeProxyVolume : public ::UnityEngine::Behaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBEPROXYVOLUME__CTOR_OFFSET))(this);
		}
	};
}
