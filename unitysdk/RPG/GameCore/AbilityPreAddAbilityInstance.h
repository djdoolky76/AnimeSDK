#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
class HPICNGFLLCA;
namespace RPG::GameCore { class AbilityPreAddAbilityInstance; }

#define RPG_GAMECORE_ABILITYPREADDABILITYINSTANCE_CLEAR_OFFSET UNITYSDK_OFFSET(0x182756A0)
#define RPG_GAMECORE_ABILITYPREADDABILITYINSTANCE_CTOR_OFFSET UNITYSDK_OFFSET(0x182757E0)
#define RPG_GAMECORE_ABILITYPREADDABILITYINSTANCE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x18275790)
#define RPG_GAMECORE_ABILITYPREADDABILITYINSTANCE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x182756F0)
#define RPG_GAMECORE_ABILITYPREADDABILITYINSTANCE_INIT_OFFSET UNITYSDK_OFFSET(0x18275650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityPreAddAbilityInstance_TypeDefinitionIndex = 57811;

	class AbilityPreAddAbilityInstance : public ::CMPGEAFHHDC
	{
	public:
		::HPICNGFLLCA* AbilityInstance; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYPREADDABILITYINSTANCE_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AbilityPreAddAbilityInstance* Init(::HPICNGFLLCA* a1)
		{
			return ((::RPG::GameCore::AbilityPreAddAbilityInstance*(*)(::PVOID, ::HPICNGFLLCA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYPREADDABILITYINSTANCE_INIT_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYPREADDABILITYINSTANCE_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYPREADDABILITYINSTANCE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYPREADDABILITYINSTANCE_GETEVENTTYPE_OFFSET))(this);
		}

	};
}
