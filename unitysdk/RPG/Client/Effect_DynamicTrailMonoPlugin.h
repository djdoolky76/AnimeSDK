#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class DynamicTrailModule; }

#define RPG_CLIENT_EFFECT_DYNAMICTRAILMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xCD257D0)

namespace RPG::Client
{
	class Effect_DynamicTrailMonoPlugin
	{
	public:
		::RPG::Client::DynamicTrailModule* DynamicTrail; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_DYNAMICTRAILMONOPLUGIN_CTOR_OFFSET))(this);
		}

	};
}
