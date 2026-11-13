#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_TRIGGERINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC10460)

namespace RPG::Client::ParkourGame
{
	inline static constexpr unsigned int MonoParkourRoad_TriggerInfo_TypeDefinitionIndex = 76305;

	class MonoParkourRoad_TriggerInfo : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_TRIGGERINFO_CTOR_OFFSET))(this);
		}

	};
}
