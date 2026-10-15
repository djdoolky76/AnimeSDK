#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class ParallelAbility; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PARALLELABILITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8BF3A0)
#define RPG_GAMECORE_PARALLELABILITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8BF090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParallelAbility_TypeDefinitionIndex = 22689;

	class ParallelAbility : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x10
		::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* AbortBehaviorFlags; // 0x18
		::RPG::GameCore::PredicateConfig* Predicate; // 0x20
		::RPG::GameCore::TargetEvaluator* AbilityInherentTargetType; // 0x28
		::RPG::GameCore::DynamicFloat* Delay; // 0x30
		::RPG::GameCore::DynamicString* AbilityName; // 0x38
		::RPG::GameCore::JsonEnum* AbilityTag; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARALLELABILITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ParallelAbility* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ParallelAbility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARALLELABILITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
