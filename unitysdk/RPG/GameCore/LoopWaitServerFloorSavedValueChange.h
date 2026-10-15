#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LoopWaitServerFloorSavedValueChange; }

#define RPG_GAMECORE_LOOPWAITSERVERFLOORSAVEDVALUECHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7F6A80)
#define RPG_GAMECORE_LOOPWAITSERVERFLOORSAVEDVALUECHANGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7F6A90)
#define RPG_GAMECORE_LOOPWAITSERVERFLOORSAVEDVALUECHANGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7F6A50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoopWaitServerFloorSavedValueChange_TypeDefinitionIndex = 22249;

	class LoopWaitServerFloorSavedValueChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITSERVERFLOORSAVEDVALUECHANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LoopWaitServerFloorSavedValueChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LoopWaitServerFloorSavedValueChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITSERVERFLOORSAVEDVALUECHANGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LoopWaitServerFloorSavedValueChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LoopWaitServerFloorSavedValueChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITSERVERFLOORSAVEDVALUECHANGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
