#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CLIENT_EFFECT_FIVEDIMPROPSCREENSPACEGPUPARTICLEMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xD6F1E30)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_FiveDimPropScreenSpaceGPUParticleMonoPlugin_TypeDefinitionIndex = 72448;

	class Effect_FiveDimPropScreenSpaceGPUParticleMonoPlugin
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FIVEDIMPROPSCREENSPACEGPUPARTICLEMONOPLUGIN_CTOR_OFFSET))(this);
		}

	};
}
