#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
namespace RPG::GameCore { class AbilityPreAddModifier; }
namespace RPG::GameCore { class BaseModifierInstance; }

#define RPG_GAMECORE_ABILITYPREADDMODIFIER_CLEAR_OFFSET UNITYSDK_OFFSET(0xE4BB030)
#define RPG_GAMECORE_ABILITYPREADDMODIFIER_CTOR_OFFSET UNITYSDK_OFFSET(0xE4BB1B0)
#define RPG_GAMECORE_ABILITYPREADDMODIFIER_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE4BB160)
#define RPG_GAMECORE_ABILITYPREADDMODIFIER_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE4BB080)
#define RPG_GAMECORE_ABILITYPREADDMODIFIER_INIT_OFFSET UNITYSDK_OFFSET(0xE4BAFE0)

namespace RPG::GameCore
{
	class AbilityPreAddModifier : public ::CMPGEAFHHDC
	{
	public:
		::RPG::GameCore::BaseModifierInstance* ModifierInstance; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYPREADDMODIFIER_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AbilityPreAddModifier* Init(::RPG::GameCore::BaseModifierInstance* a1)
		{
			return ((::RPG::GameCore::AbilityPreAddModifier*(*)(::PVOID, ::RPG::GameCore::BaseModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYPREADDMODIFIER_INIT_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYPREADDMODIFIER_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYPREADDMODIFIER_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYPREADDMODIFIER_GETEVENTTYPE_OFFSET))(this);
		}

	};
}
