#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ConditionLoopExecuteTaskList; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_CONDITIONLOOPEXECUTETASKLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D4010)
#define RPG_GAMECORE_CONDITIONLOOPEXECUTETASKLIST_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5D4070)
#define RPG_GAMECORE_CONDITIONLOOPEXECUTETASKLIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5D3E00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConditionLoopExecuteTaskList_TypeDefinitionIndex = 23469;

	class ConditionLoopExecuteTaskList : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::PredicateConfig* Predicate; // 0x18
		::RPG::GameCore::DynamicFloat* MaxLoopCount; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TaskList; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDITIONLOOPEXECUTETASKLIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ConditionLoopExecuteTaskList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ConditionLoopExecuteTaskList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDITIONLOOPEXECUTETASKLIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ConditionLoopExecuteTaskList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ConditionLoopExecuteTaskList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDITIONLOOPEXECUTETASKLIST_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
