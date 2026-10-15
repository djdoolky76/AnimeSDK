#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
namespace RPG::GameCore { class LevelTurnPrepareStart; }

#define RPG_GAMECORE_LEVELTURNPREPARESTART_CLEAR_OFFSET UNITYSDK_OFFSET(0xE6F7640)
#define RPG_GAMECORE_LEVELTURNPREPARESTART_CTOR_OFFSET UNITYSDK_OFFSET(0xE6F7720)
#define RPG_GAMECORE_LEVELTURNPREPARESTART_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE6F76D0)
#define RPG_GAMECORE_LEVELTURNPREPARESTART_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE6F7680)
#define RPG_GAMECORE_LEVELTURNPREPARESTART_INIT_OFFSET UNITYSDK_OFFSET(0xE6F7600)

namespace RPG::GameCore
{
	class LevelTurnPrepareStart : public ::CMPGEAFHHDC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNPREPARESTART_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelTurnPrepareStart* Init()
		{
			return ((::RPG::GameCore::LevelTurnPrepareStart*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNPREPARESTART_INIT_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNPREPARESTART_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNPREPARESTART_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNPREPARESTART_GETEVENTTYPE_OFFSET))(this);
		}

	};
}
