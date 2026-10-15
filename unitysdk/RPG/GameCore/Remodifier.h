#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnumStatusTypeMask.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class Remodifier; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_REMODIFIER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D955BE0)
#define RPG_GAMECORE_REMODIFIER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D955C50)
#define RPG_GAMECORE_REMODIFIER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D955B50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int Remodifier_TypeDefinitionIndex = 23628;

	class Remodifier : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IncludeLimbo; // 0x20
		::System::Byte _padding0[0x7];
		::RPG::GameCore::PredicateConfig* PredicateFilter; // 0x28
		::RPG::GameCore::TargetEvaluator* CasterFilter; // 0x30
		::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* BehaviorFlagFilter; // 0x38
		::RPG::GameCore::EnumStatusTypeMask StatusTypeMask; // 0x40
		::System::Byte _padding1[0x4];
		::System::String* ModifierName; // 0x48
		::System::Boolean ByRandom; // 0x50
		::System::Byte _padding2[0x7];
		::RPG::GameCore::DynamicFloat* MaxNumber; // 0x58
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TaskList; // 0x60
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* FailedTaskList; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMODIFIER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Remodifier* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Remodifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMODIFIER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Remodifier* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Remodifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMODIFIER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
