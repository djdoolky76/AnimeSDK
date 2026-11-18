#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class HighLightAirCombatMonster; }
namespace System { class String; }

#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_RUNTIMEMONSTERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xFA88B20)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int HighLightAirCombatSubSystem_RuntimeMonsterConfig_TypeDefinitionIndex = 83429;

	class HighLightAirCombatSubSystem_RuntimeMonsterConfig : public ::System::Object
	{
	public:
		::System::String* rootName; // 0x10
		::System::String* groupName; // 0x18
		::MoleMole::Config::HighLightAirCombatMonster* config; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_RUNTIMEMONSTERCONFIG__CTOR_OFFSET))(this);
		}
	};
}
