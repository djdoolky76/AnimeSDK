#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CLIENT_EFFECT_PROPSCREENSPACEGPUPARTICLEMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xCD64E90)

namespace RPG::Client
{
	class Effect_PropScreenSpaceGPUParticleMonoPlugin
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PROPSCREENSPACEGPUPARTICLEMONOPLUGIN_CTOR_OFFSET))(this);
		}

	};
}
