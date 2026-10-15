#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelCharacterReviveFromRevivable; }

#define RPG_GAMECORE_LEVELCHARACTERREVIVEFROMREVIVABLE_CLEAR_OFFSET UNITYSDK_OFFSET(0xE6E3990)
#define RPG_GAMECORE_LEVELCHARACTERREVIVEFROMREVIVABLE_CTOR_OFFSET UNITYSDK_OFFSET(0xE6E3A80)
#define RPG_GAMECORE_LEVELCHARACTERREVIVEFROMREVIVABLE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE6E3A30)
#define RPG_GAMECORE_LEVELCHARACTERREVIVEFROMREVIVABLE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE6E39E0)
#define RPG_GAMECORE_LEVELCHARACTERREVIVEFROMREVIVABLE_INIT_OFFSET UNITYSDK_OFFSET(0xE6E3930)

namespace RPG::GameCore
{
	class LevelCharacterReviveFromRevivable : public ::CMPGEAFHHDC
	{
	public:
		::RPG::GameCore::GameEntity* TargetEntity; // 0x18
		::RPG::GameCore::GameEntity* CasterEntity; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERREVIVEFROMREVIVABLE_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelCharacterReviveFromRevivable* Init(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::RPG::GameCore::LevelCharacterReviveFromRevivable*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERREVIVEFROMREVIVABLE_INIT_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERREVIVEFROMREVIVABLE_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERREVIVEFROMREVIVABLE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERREVIVEFROMREVIVABLE_GETEVENTTYPE_OFFSET))(this);
		}

	};
}
