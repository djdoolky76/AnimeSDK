#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConditionLoopExecuteTaskList.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ConditionLoopExecuteTaskListWithInterval; }

#define RPG_GAMECORE_CONDITIONLOOPEXECUTETASKLISTWITHINTERVAL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A67C0)
#define RPG_GAMECORE_CONDITIONLOOPEXECUTETASKLISTWITHINTERVAL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5A6820)
#define RPG_GAMECORE_CONDITIONLOOPEXECUTETASKLISTWITHINTERVAL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5A6A60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConditionLoopExecuteTaskListWithInterval_TypeDefinitionIndex = 22474;

	class ConditionLoopExecuteTaskListWithInterval : public ::RPG::GameCore::ConditionLoopExecuteTaskList
	{
	public:
		::System::Boolean PreciseTime; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDITIONLOOPEXECUTETASKLISTWITHINTERVAL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ConditionLoopExecuteTaskListWithInterval* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ConditionLoopExecuteTaskListWithInterval*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDITIONLOOPEXECUTETASKLISTWITHINTERVAL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ConditionLoopExecuteTaskListWithInterval* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ConditionLoopExecuteTaskListWithInterval*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDITIONLOOPEXECUTETASKLISTWITHINTERVAL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
