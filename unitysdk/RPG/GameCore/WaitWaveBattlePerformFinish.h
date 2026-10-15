#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitWaveBattlePerformFinish; }

#define RPG_GAMECORE_WAITWAVEBATTLEPERFORMFINISH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCA5100)
#define RPG_GAMECORE_WAITWAVEBATTLEPERFORMFINISH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DCA5110)
#define RPG_GAMECORE_WAITWAVEBATTLEPERFORMFINISH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCA5040)

namespace RPG::GameCore
{
	class WaitWaveBattlePerformFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITWAVEBATTLEPERFORMFINISH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitWaveBattlePerformFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitWaveBattlePerformFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITWAVEBATTLEPERFORMFINISH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitWaveBattlePerformFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitWaveBattlePerformFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITWAVEBATTLEPERFORMFINISH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
