#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatInsertAbilityPriority.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatInsertAbilityConfig; }
namespace RPG::GameCore { class DiceCombatTaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_DICECOMBATINSERTABILITYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D609A20)
#define RPG_GAMECORE_DICECOMBATINSERTABILITYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6097D0)

namespace RPG::GameCore
{
	class DiceCombatInsertAbilityConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::RPG::GameCore::DiceCombatTarget AbilityTarget; // 0x18
		::RPG::GameCore::DiceCombatInsertAbilityPriority Priority; // 0x1C
		::Il2CppArray<::RPG::GameCore::DiceCombatTaskConfig*>* OnStart; // 0x20
		::System::Boolean ExecuteWhenOwnerAlive; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATINSERTABILITYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatInsertAbilityConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatInsertAbilityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATINSERTABILITYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
