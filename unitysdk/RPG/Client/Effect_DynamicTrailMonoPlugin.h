#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class DynamicTrailModule; }

#define RPG_CLIENT_EFFECT_DYNAMICTRAILMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0x17BD9D60)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_DynamicTrailMonoPlugin_TypeDefinitionIndex = 72418;

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
