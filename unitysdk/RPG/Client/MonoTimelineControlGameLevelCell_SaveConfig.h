#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELCELL_SAVECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xE2BF120)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoTimelineControlGameLevelCell_SaveConfig_TypeDefinitionIndex = 61732;

	class MonoTimelineControlGameLevelCell_SaveConfig : public ::System::Object
	{
	public:
		::System::Single radius; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELCELL_SAVECONFIG_CTOR_OFFSET))(this);
		}

	};
}
