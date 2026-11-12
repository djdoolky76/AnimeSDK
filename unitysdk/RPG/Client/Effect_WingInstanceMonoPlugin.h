#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CLIENT_EFFECT_WINGINSTANCEMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xD73F0E0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_WingInstanceMonoPlugin_TypeDefinitionIndex = 72510;

	class Effect_WingInstanceMonoPlugin
	{
	public:
		::System::Single TimeLocation; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_WINGINSTANCEMONOPLUGIN_CTOR_OFFSET))(this);
		}

	};
}
