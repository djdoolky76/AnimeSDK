#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DisableNextBattleWinVO; }

#define RPG_GAMECORE_DISABLENEXTBATTLEWINVO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6173E0)
#define RPG_GAMECORE_DISABLENEXTBATTLEWINVO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6173F0)
#define RPG_GAMECORE_DISABLENEXTBATTLEWINVO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D617320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DisableNextBattleWinVO_TypeDefinitionIndex = 20550;

	class DisableNextBattleWinVO : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISABLENEXTBATTLEWINVO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DisableNextBattleWinVO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DisableNextBattleWinVO*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISABLENEXTBATTLEWINVO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DisableNextBattleWinVO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DisableNextBattleWinVO*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISABLENEXTBATTLEWINVO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
