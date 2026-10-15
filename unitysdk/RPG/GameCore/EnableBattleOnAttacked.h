#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EnableBattleOnAttacked; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ENABLEBATTLEONATTACKED_CTOR_OFFSET UNITYSDK_OFFSET(0x1D63E1E0)
#define RPG_GAMECORE_ENABLEBATTLEONATTACKED_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D63E1F0)
#define RPG_GAMECORE_ENABLEBATTLEONATTACKED_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D63E1B0)

namespace RPG::GameCore
{
	class EnableBattleOnAttacked : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Enabled; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEBATTLEONATTACKED_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnableBattleOnAttacked* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnableBattleOnAttacked*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEBATTLEONATTACKED_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnableBattleOnAttacked* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnableBattleOnAttacked*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEBATTLEONATTACKED_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
