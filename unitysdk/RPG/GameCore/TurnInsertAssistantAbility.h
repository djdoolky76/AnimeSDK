#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TurnInsertAssistantAbility; }

#define RPG_GAMECORE_TURNINSERTASSISTANTABILITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC65880)
#define RPG_GAMECORE_TURNINSERTASSISTANTABILITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC658C0)
#define RPG_GAMECORE_TURNINSERTASSISTANTABILITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC65820)

namespace RPG::GameCore
{
	class TurnInsertAssistantAbility : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* AssistantAbilityID; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::TargetEvaluator* AbilityTarget; // 0x28
		::System::Boolean TriggerOnLimbo; // 0x30
		::System::Byte _padding0[0x7];
		::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* AbortBehaviorFlags; // 0x38
		::System::Int32 Priority; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNINSERTASSISTANTABILITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TurnInsertAssistantAbility* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TurnInsertAssistantAbility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNINSERTASSISTANTABILITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TurnInsertAssistantAbility* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TurnInsertAssistantAbility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNINSERTASSISTANTABILITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
