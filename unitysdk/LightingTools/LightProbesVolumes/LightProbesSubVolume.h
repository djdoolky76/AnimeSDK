#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define LIGHTINGTOOLS_LIGHTPROBESVOLUMES_LIGHTPROBESSUBVOLUME_ONENABLE_OFFSET UNITYSDK_OFFSET(0x200726D0)
#define LIGHTINGTOOLS_LIGHTPROBESVOLUMES_LIGHTPROBESSUBVOLUME__CTOR_OFFSET UNITYSDK_OFFSET(0x20072770)

namespace LightingTools::LightProbesVolumes
{
	inline static constexpr unsigned int LightProbesSubVolume_TypeDefinitionIndex = 96132;

	class LightProbesSubVolume : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIGHTINGTOOLS_LIGHTPROBESVOLUMES_LIGHTPROBESSUBVOLUME__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIGHTINGTOOLS_LIGHTPROBESVOLUMES_LIGHTPROBESSUBVOLUME_ONENABLE_OFFSET))(this);
		}
	};
}
