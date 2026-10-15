#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TriggerAbility; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_TRIGGERABILITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC42030)
#define RPG_GAMECORE_TRIGGERABILITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC42040)
#define RPG_GAMECORE_TRIGGERABILITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC42000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerAbility_TypeDefinitionIndex = 22687;

	class TriggerAbility : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* AbilityInherentTargetType; // 0x20
		::RPG::GameCore::PredicateConfig* AbilityInherentTargetPredicate; // 0x28
		::RPG::GameCore::DynamicString* AbilityName; // 0x30
		::System::Boolean IsSkillPerform; // 0x38
		::System::Byte _padding0[0x7];
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>* DynamicValues; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERABILITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerAbility* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerAbility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERABILITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerAbility* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerAbility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERABILITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
