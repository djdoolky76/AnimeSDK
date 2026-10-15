#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TurnInsertAbilityConditionBase.h"
#include "unitysdk/RPG/GameCore/TurnInsertAbilityConditionType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TurnInsertAbilityCondition; }

#define RPG_GAMECORE_TURNINSERTABILITYCONDITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC64640)
#define RPG_GAMECORE_TURNINSERTABILITYCONDITION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC64650)
#define RPG_GAMECORE_TURNINSERTABILITYCONDITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC64610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TurnInsertAbilityCondition_TypeDefinitionIndex = 18251;

	class TurnInsertAbilityCondition : public ::RPG::GameCore::TurnInsertAbilityConditionBase
	{
	public:
		::RPG::GameCore::TurnInsertAbilityConditionType Type; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* Count; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNINSERTABILITYCONDITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TurnInsertAbilityCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TurnInsertAbilityCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNINSERTABILITYCONDITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TurnInsertAbilityCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TurnInsertAbilityCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNINSERTABILITYCONDITION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
