#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/WindTriggerType.h"
#include "unitysdk/RPG/Client/EnvWindTriggerMonoPlugin_WindApplyType.h"

#define RPG_CLIENT_ENVWINDTRIGGERMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xCDF1E70)

namespace RPG::Client
{
	inline static constexpr unsigned int EnvWindTriggerMonoPlugin_TypeDefinitionIndex = 71069;

	class EnvWindTriggerMonoPlugin
	{
	public:
		::EnviromentSystem::WindTriggerType TriggerType; // 0x30
		::RPG::Client::EnvWindTriggerMonoPlugin_WindApplyType ApplyType; // 0x34
		::System::Single Intensity; // 0x38
		::System::Single RadiusSoftness; // 0x3C
		::System::Single RangeSofness; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVWINDTRIGGERMONOPLUGIN_CTOR_OFFSET))(this);
		}

	};
}
