#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELTURNMODIFIERPHASE2BEGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xE6F73A0)
#define RPG_GAMECORE_LEVELTURNMODIFIERPHASE2BEGIN_GETACTIVEENTITY_OFFSET UNITYSDK_OFFSET(0xE6F7450)
#define RPG_GAMECORE_LEVELTURNMODIFIERPHASE2BEGIN_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE6F7400)
#define RPG_GAMECORE_LEVELTURNMODIFIERPHASE2BEGIN_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE6F73B0)
#define RPG_GAMECORE_LEVELTURNMODIFIERPHASE2BEGIN_GETTURNCOUNTER_OFFSET UNITYSDK_OFFSET(0xE6F7490)

namespace RPG::GameCore
{
	class LevelTurnModifierPhase2Begin : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* _ActiveEntity; // 0x10
		::System::UInt32 _TurnCounter; // 0x18
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNMODIFIERPHASE2BEGIN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNMODIFIERPHASE2BEGIN_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNMODIFIERPHASE2BEGIN_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* GetActiveEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNMODIFIERPHASE2BEGIN_GETACTIVEENTITY_OFFSET))(this);
		}

		::System::UInt32 GetTurnCounter()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNMODIFIERPHASE2BEGIN_GETTURNCOUNTER_OFFSET))(this);
		}

	};
}
