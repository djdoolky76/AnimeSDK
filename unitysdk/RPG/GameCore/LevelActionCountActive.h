#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelActionCountActive; }

#define RPG_GAMECORE_LEVELACTIONCOUNTACTIVE_CTOR_OFFSET UNITYSDK_OFFSET(0xE6DB050)
#define RPG_GAMECORE_LEVELACTIONCOUNTACTIVE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE6DB000)
#define RPG_GAMECORE_LEVELACTIONCOUNTACTIVE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE6DAFB0)
#define RPG_GAMECORE_LEVELACTIONCOUNTACTIVE_INIT_OFFSET UNITYSDK_OFFSET(0xE6DAF60)

namespace RPG::GameCore
{
	class LevelActionCountActive : public ::CMPGEAFHHDC
	{
	public:
		::RPG::GameCore::GameEntity* ActiveEntity; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELACTIONCOUNTACTIVE_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelActionCountActive* Init(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::LevelActionCountActive*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELACTIONCOUNTACTIVE_INIT_OFFSET))(this, a1);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELACTIONCOUNTACTIVE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELACTIONCOUNTACTIVE_GETEVENTTYPE_OFFSET))(this);
		}

	};
}
