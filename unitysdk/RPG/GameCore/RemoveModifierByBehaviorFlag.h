#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class RemoveModifierByBehaviorFlag; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_REMOVEMODIFIERBYBEHAVIORFLAG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9588C0)
#define RPG_GAMECORE_REMOVEMODIFIERBYBEHAVIORFLAG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9588D0)
#define RPG_GAMECORE_REMOVEMODIFIERBYBEHAVIORFLAG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D958890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RemoveModifierByBehaviorFlag_TypeDefinitionIndex = 23080;

	class RemoveModifierByBehaviorFlag : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* ModifierBehaviorFlags; // 0x20
		::RPG::GameCore::PredicateConfig* Predicate; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEMODIFIERBYBEHAVIORFLAG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RemoveModifierByBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RemoveModifierByBehaviorFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEMODIFIERBYBEHAVIORFLAG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RemoveModifierByBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RemoveModifierByBehaviorFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEMODIFIERBYBEHAVIORFLAG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
