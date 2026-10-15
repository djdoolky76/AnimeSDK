#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitEnterBattleTransitionFinish; }

#define RPG_GAMECORE_WAITENTERBATTLETRANSITIONFINISH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC96A80)
#define RPG_GAMECORE_WAITENTERBATTLETRANSITIONFINISH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC96A90)
#define RPG_GAMECORE_WAITENTERBATTLETRANSITIONFINISH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC96A40)

namespace RPG::GameCore
{
	class WaitEnterBattleTransitionFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean WaitDefaultTransition; // 0x18
		::System::Boolean WaitAvatarTransition; // 0x19
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITENTERBATTLETRANSITIONFINISH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitEnterBattleTransitionFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitEnterBattleTransitionFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITENTERBATTLETRANSITIONFINISH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitEnterBattleTransitionFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitEnterBattleTransitionFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITENTERBATTLETRANSITIONFINISH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
