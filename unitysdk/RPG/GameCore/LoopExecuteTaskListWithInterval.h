#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LoopExecuteTaskList.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LoopExecuteTaskListWithInterval; }

#define RPG_GAMECORE_LOOPEXECUTETASKLISTWITHINTERVAL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7F5B00)
#define RPG_GAMECORE_LOOPEXECUTETASKLISTWITHINTERVAL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7F5B70)
#define RPG_GAMECORE_LOOPEXECUTETASKLISTWITHINTERVAL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7F5D70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoopExecuteTaskListWithInterval_TypeDefinitionIndex = 22473;

	class LoopExecuteTaskListWithInterval : public ::RPG::GameCore::LoopExecuteTaskList
	{
	public:
		::System::Boolean PreciseTime; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPEXECUTETASKLISTWITHINTERVAL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LoopExecuteTaskListWithInterval* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LoopExecuteTaskListWithInterval*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPEXECUTETASKLISTWITHINTERVAL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LoopExecuteTaskListWithInterval* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LoopExecuteTaskListWithInterval*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPEXECUTETASKLISTWITHINTERVAL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
