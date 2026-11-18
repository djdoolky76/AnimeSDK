#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Behaviour.h"

#define UNITYENGINE_LIGHTPROBEPROXYVOLUME__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED7F090)

namespace UnityEngine
{
	inline static constexpr unsigned int LightProbeProxyVolume_TypeDefinitionIndex = 5251;

	class LightProbeProxyVolume : public ::UnityEngine::Behaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBEPROXYVOLUME__CTOR_OFFSET))(this);
		}
	};
}
