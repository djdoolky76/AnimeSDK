#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseSortConfig; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class SortTargets; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_SORTTARGETS_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAF1860)
#define RPG_GAMECORE_SORTTARGETS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAF18C0)
#define RPG_GAMECORE_SORTTARGETS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAF17D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SortTargets_TypeDefinitionIndex = 23139;

	class SortTargets : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::PredicateConfig* Predicate; // 0x20
		::RPG::GameCore::BaseSortConfig* SortConfig; // 0x28
		::System::Boolean RandomWhenEquals; // 0x30
		::System::Boolean IncludeLimbo; // 0x31
		::System::Byte _padding0[0x6];
		::RPG::GameCore::DynamicFloat* MaxNumber; // 0x38
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TaskList; // 0x40
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* FailedTaskList; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SORTTARGETS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SortTargets* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SortTargets*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SORTTARGETS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SortTargets* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SortTargets*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SORTTARGETS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
