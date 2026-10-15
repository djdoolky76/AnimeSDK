#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LoopWaitBattleWin; }

#define RPG_GAMECORE_LOOPWAITBATTLEWIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7F6690)
#define RPG_GAMECORE_LOOPWAITBATTLEWIN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7F66A0)
#define RPG_GAMECORE_LOOPWAITBATTLEWIN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7F6650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoopWaitBattleWin_TypeDefinitionIndex = 21177;

	class LoopWaitBattleWin : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITBATTLEWIN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LoopWaitBattleWin* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LoopWaitBattleWin*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITBATTLEWIN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LoopWaitBattleWin* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LoopWaitBattleWin*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITBATTLEWIN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
