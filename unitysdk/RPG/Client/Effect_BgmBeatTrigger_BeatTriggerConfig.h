#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_CLIENT_EFFECT_BGMBEATTRIGGER_BEATTRIGGERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x17BD22D0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_BgmBeatTrigger_BeatTriggerConfig_TypeDefinitionIndex = 72403;

	class Effect_BgmBeatTrigger_BeatTriggerConfig : public ::System::Object
	{
	public:
		::System::String* CueName; // 0x10
		::System::Single Delay; // 0x18
		::System::Single Interval; // 0x1C
		::System::Boolean TriggerAtBeatStart; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_BGMBEATTRIGGER_BEATTRIGGERCONFIG_CTOR_OFFSET))(this);
		}

	};
}
