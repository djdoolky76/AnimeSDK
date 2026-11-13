#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_CONNECTIONINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC10470)

namespace RPG::Client::ParkourGame
{
	inline static constexpr unsigned int MonoParkourRoad_ConnectionInfo_TypeDefinitionIndex = 76308;

	class MonoParkourRoad_ConnectionInfo : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_CONNECTIONINFO_CTOR_OFFSET))(this);
		}

	};
}
