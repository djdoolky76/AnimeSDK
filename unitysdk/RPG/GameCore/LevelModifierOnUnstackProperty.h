#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
namespace RPG::GameCore { class LevelModifierOnUnstackProperty; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define RPG_GAMECORE_LEVELMODIFIERONUNSTACKPROPERTY_CLEAR_OFFSET UNITYSDK_OFFSET(0xE6F4190)
#define RPG_GAMECORE_LEVELMODIFIERONUNSTACKPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0xE6F4280)
#define RPG_GAMECORE_LEVELMODIFIERONUNSTACKPROPERTY_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE6F4230)
#define RPG_GAMECORE_LEVELMODIFIERONUNSTACKPROPERTY_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE6F41E0)
#define RPG_GAMECORE_LEVELMODIFIERONUNSTACKPROPERTY_INIT_OFFSET UNITYSDK_OFFSET(0xE6F4140)

namespace RPG::GameCore
{
	class LevelModifierOnUnstackProperty : public ::CMPGEAFHHDC
	{
	public:
		::RPG::GameCore::TurnBasedModifierInstance* ModifierInstance; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMODIFIERONUNSTACKPROPERTY_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelModifierOnUnstackProperty* Init(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::RPG::GameCore::LevelModifierOnUnstackProperty*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMODIFIERONUNSTACKPROPERTY_INIT_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMODIFIERONUNSTACKPROPERTY_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMODIFIERONUNSTACKPROPERTY_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMODIFIERONUNSTACKPROPERTY_GETEVENTTYPE_OFFSET))(this);
		}

	};
}
