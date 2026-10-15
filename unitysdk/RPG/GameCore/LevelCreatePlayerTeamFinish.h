#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_LEVELCREATEPLAYERTEAMFINISH_CTOR_OFFSET UNITYSDK_OFFSET(0xE6E3EA0)
#define RPG_GAMECORE_LEVELCREATEPLAYERTEAMFINISH_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE6E3E00)
#define RPG_GAMECORE_LEVELCREATEPLAYERTEAMFINISH_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE6E3E50)

namespace RPG::GameCore
{
	class LevelCreatePlayerTeamFinish : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCREATEPLAYERTEAMFINISH_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCREATEPLAYERTEAMFINISH_GETEVENTTYPE_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCREATEPLAYERTEAMFINISH_GETSOURCERUNTIMEID_OFFSET))(this);
		}

	};
}
