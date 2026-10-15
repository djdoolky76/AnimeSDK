#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LoopWaitHeartDialScriptStepChange; }

#define RPG_GAMECORE_LOOPWAITHEARTDIALSCRIPTSTEPCHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7F6860)
#define RPG_GAMECORE_LOOPWAITHEARTDIALSCRIPTSTEPCHANGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7F6870)
#define RPG_GAMECORE_LOOPWAITHEARTDIALSCRIPTSTEPCHANGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7F6820)

namespace RPG::GameCore
{
	class LoopWaitHeartDialScriptStepChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITHEARTDIALSCRIPTSTEPCHANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LoopWaitHeartDialScriptStepChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LoopWaitHeartDialScriptStepChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITHEARTDIALSCRIPTSTEPCHANGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LoopWaitHeartDialScriptStepChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LoopWaitHeartDialScriptStepChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITHEARTDIALSCRIPTSTEPCHANGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
