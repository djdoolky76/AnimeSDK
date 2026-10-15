#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTRENDERERMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xCD6D350)

namespace RPG::Client
{
	class Effect_SphereVolumetricLightRendererMonoPlugin
	{
	public:
		::System::Int32 ExampleProperty; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTRENDERERMONOPLUGIN_CTOR_OFFSET))(this);
		}

	};
}
