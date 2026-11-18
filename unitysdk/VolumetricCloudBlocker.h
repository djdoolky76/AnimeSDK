#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define VOLUMETRICCLOUDBLOCKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3850A0)

inline static constexpr unsigned int VolumetricCloudBlocker_TypeDefinitionIndex = 26439;

class VolumetricCloudBlocker : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Single falloff; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VOLUMETRICCLOUDBLOCKER__CTOR_OFFSET))(this);
	}
};
