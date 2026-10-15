#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LogicOperation.h"
#include "unitysdk/RPG/GameCore/TurnInsertAbilityConditionBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TurnInsertAbilityCondition; }
namespace RPG::GameCore { class TurnInsertAbilityConditionGroup; }

#define RPG_GAMECORE_TURNINSERTABILITYCONDITIONGROUP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC647E0)
#define RPG_GAMECORE_TURNINSERTABILITYCONDITIONGROUP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC647F0)
#define RPG_GAMECORE_TURNINSERTABILITYCONDITIONGROUP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC64940)

namespace RPG::GameCore
{
	class TurnInsertAbilityConditionGroup : public ::RPG::GameCore::TurnInsertAbilityConditionBase
	{
	public:
		::RPG::GameCore::LogicOperation GroupOperation; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::TurnInsertAbilityCondition*>* Conditions; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNINSERTABILITYCONDITIONGROUP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TurnInsertAbilityConditionGroup* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TurnInsertAbilityConditionGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNINSERTABILITYCONDITIONGROUP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TurnInsertAbilityConditionGroup* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TurnInsertAbilityConditionGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNINSERTABILITYCONDITIONGROUP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
