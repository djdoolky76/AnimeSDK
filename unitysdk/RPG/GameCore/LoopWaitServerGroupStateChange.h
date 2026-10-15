#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LoopWaitServerGroupStateChange; }

#define RPG_GAMECORE_LOOPWAITSERVERGROUPSTATECHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7C9100)
#define RPG_GAMECORE_LOOPWAITSERVERGROUPSTATECHANGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7C9110)
#define RPG_GAMECORE_LOOPWAITSERVERGROUPSTATECHANGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7C90D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoopWaitServerGroupStateChange_TypeDefinitionIndex = 21180;

	class LoopWaitServerGroupStateChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITSERVERGROUPSTATECHANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LoopWaitServerGroupStateChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LoopWaitServerGroupStateChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITSERVERGROUPSTATECHANGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LoopWaitServerGroupStateChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LoopWaitServerGroupStateChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITSERVERGROUPSTATECHANGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
