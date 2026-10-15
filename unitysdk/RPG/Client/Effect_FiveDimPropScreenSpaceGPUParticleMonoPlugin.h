#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CLIENT_EFFECT_FIVEDIMPROPSCREENSPACEGPUPARTICLEMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xCD2AF40)

namespace RPG::Client
{
	class Effect_FiveDimPropScreenSpaceGPUParticleMonoPlugin
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FIVEDIMPROPSCREENSPACEGPUPARTICLEMONOPLUGIN_CTOR_OFFSET))(this);
		}

	};
}
