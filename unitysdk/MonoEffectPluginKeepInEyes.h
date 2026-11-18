#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MONOEFFECTPLUGINKEEPINEYES_START_OFFSET UNITYSDK_OFFSET(0x110826F0)
#define MONOEFFECTPLUGINKEEPINEYES_UPDATE_OFFSET UNITYSDK_OFFSET(0x110827C0)
#define MONOEFFECTPLUGINKEEPINEYES__CTOR_OFFSET UNITYSDK_OFFSET(0x11082B50)

inline static constexpr unsigned int MonoEffectPluginKeepInEyes_TypeDefinitionIndex = 96777;

class MonoEffectPluginKeepInEyes : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOEFFECTPLUGINKEEPINEYES__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOEFFECTPLUGINKEEPINEYES_START_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOEFFECTPLUGINKEEPINEYES_UPDATE_OFFSET))(this);
	}
};
