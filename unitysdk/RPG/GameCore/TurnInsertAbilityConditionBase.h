#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TurnInsertAbilityConditionBase; }

#define RPG_GAMECORE_TURNINSERTABILITYCONDITIONBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC64770)
#define RPG_GAMECORE_TURNINSERTABILITYCONDITIONBASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC64780)
#define RPG_GAMECORE_TURNINSERTABILITYCONDITIONBASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC64440)

namespace RPG::GameCore
{
	class TurnInsertAbilityConditionBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNINSERTABILITYCONDITIONBASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TurnInsertAbilityConditionBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TurnInsertAbilityConditionBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNINSERTABILITYCONDITIONBASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TurnInsertAbilityConditionBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TurnInsertAbilityConditionBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNINSERTABILITYCONDITIONBASE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
