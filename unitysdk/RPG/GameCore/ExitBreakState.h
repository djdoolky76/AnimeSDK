#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ExitBreakState; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_EXITBREAKSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D68BF20)
#define RPG_GAMECORE_EXITBREAKSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D68BF30)
#define RPG_GAMECORE_EXITBREAKSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D68BEF0)

namespace RPG::GameCore
{
	class ExitBreakState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean CancelRecoverAnim; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXITBREAKSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ExitBreakState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ExitBreakState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXITBREAKSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ExitBreakState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ExitBreakState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXITBREAKSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
