#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
class MBBEBLGELAP;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelUseAbility; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELUSEABILITY_CLEAR_OFFSET UNITYSDK_OFFSET(0xE6FFBA0)
#define RPG_GAMECORE_LEVELUSEABILITY_CTOR_OFFSET UNITYSDK_OFFSET(0xE6FFD10)
#define RPG_GAMECORE_LEVELUSEABILITY_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE6FFC60)
#define RPG_GAMECORE_LEVELUSEABILITY_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE6FFC10)
#define RPG_GAMECORE_LEVELUSEABILITY_GET_ABILITYNAME_OFFSET UNITYSDK_OFFSET(0xE6FFCB0)
#define RPG_GAMECORE_LEVELUSEABILITY_INIT_OFFSET UNITYSDK_OFFSET(0xE6FFB40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelUseAbility_TypeDefinitionIndex = 56813;

	class LevelUseAbility : public ::CMPGEAFHHDC
	{
	public:
		::RPG::GameCore::GameEntity* AbilityCater; // 0x18
		::MBBEBLGELAP* AbilityInstance; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELUSEABILITY_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelUseAbility* Init(::RPG::GameCore::GameEntity* a1, ::MBBEBLGELAP* a2)
		{
			return ((::RPG::GameCore::LevelUseAbility*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::MBBEBLGELAP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELUSEABILITY_INIT_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELUSEABILITY_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELUSEABILITY_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELUSEABILITY_GETEVENTTYPE_OFFSET))(this);
		}

		::System::String* get_AbilityName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELUSEABILITY_GET_ABILITYNAME_OFFSET))(this);
		}

	};
}
