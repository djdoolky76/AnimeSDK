#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define VFXVOLUMETRICSHADOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA7FC40)

inline static constexpr unsigned int VfxVolumetricShadow_TypeDefinitionIndex = 27279;

class VfxVolumetricShadow : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VFXVOLUMETRICSHADOW__CTOR_OFFSET))(this);
	}
};
