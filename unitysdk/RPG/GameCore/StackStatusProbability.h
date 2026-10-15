#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class StackStatusProbability; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_STACKSTATUSPROBABILITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAD6E60)
#define RPG_GAMECORE_STACKSTATUSPROBABILITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAD6E70)
#define RPG_GAMECORE_STACKSTATUSPROBABILITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAD6E30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StackStatusProbability_TypeDefinitionIndex = 22683;

	class StackStatusProbability : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* BehaviorFlags; // 0x20
		::RPG::GameCore::DynamicFloat* Probability; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKSTATUSPROBABILITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StackStatusProbability* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StackStatusProbability*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKSTATUSPROBABILITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StackStatusProbability* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StackStatusProbability*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKSTATUSPROBABILITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
