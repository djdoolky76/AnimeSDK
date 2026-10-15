#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoTimelineControlGameLevelCell_FloorConfig.h"

#define RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELCELL_PLANEFLOOR_CTOR_OFFSET UNITYSDK_OFFSET(0xD86CB80)

namespace RPG::Client
{
	class MonoTimelineControlGameLevelCell_PlaneFloor : public ::RPG::Client::MonoTimelineControlGameLevelCell_FloorConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELCELL_PLANEFLOOR_CTOR_OFFSET))(this);
		}

	};
}
