#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define SCENEPROPCOLLIDERSKIPSIGN_REMOVE_OFFSET UNITYSDK_OFFSET(0x1C1F0680)
#define SCENEPROPCOLLIDERSKIPSIGN__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1F0700)

inline static constexpr unsigned int ScenePropColliderSkipSign_TypeDefinitionIndex = 43805;

class ScenePropColliderSkipSign : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEPROPCOLLIDERSKIPSIGN__CTOR_OFFSET))(this);
	}

	::System::Void Remove()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEPROPCOLLIDERSKIPSIGN_REMOVE_OFFSET))(this);
	}
};
