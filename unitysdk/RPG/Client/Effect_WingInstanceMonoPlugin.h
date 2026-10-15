#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CLIENT_EFFECT_WINGINSTANCEMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xCD78920)

namespace RPG::Client
{
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
