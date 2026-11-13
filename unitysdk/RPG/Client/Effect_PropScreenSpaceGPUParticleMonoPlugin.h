#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CLIENT_EFFECT_PROPSCREENSPACEGPUPARTICLEMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0x189A1270)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_PropScreenSpaceGPUParticleMonoPlugin_TypeDefinitionIndex = 72519;

	class Effect_PropScreenSpaceGPUParticleMonoPlugin
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PROPSCREENSPACEGPUPARTICLEMONOPLUGIN_CTOR_OFFSET))(this);
		}

	};
}
