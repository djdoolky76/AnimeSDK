#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoTimelineControlGameLevelGroup_TriggerActionConfig.h"

#define RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELGROUP_TRIGGERACTIONCONFIG_ACTIVE_CTOR_OFFSET UNITYSDK_OFFSET(0xD86E370)

namespace RPG::Client
{
	class MonoTimelineControlGameLevelGroup_TriggerActionConfig_Active : public ::RPG::Client::MonoTimelineControlGameLevelGroup_TriggerActionConfig
	{
	public:
		::System::Boolean active; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELGROUP_TRIGGERACTIONCONFIG_ACTIVE_CTOR_OFFSET))(this);
		}

	};
}
