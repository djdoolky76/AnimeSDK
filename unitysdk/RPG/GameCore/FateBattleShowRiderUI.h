#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateBattleShowRiderUI; }

#define RPG_GAMECORE_FATEBATTLESHOWRIDERUI_CTOR_OFFSET UNITYSDK_OFFSET(0x1D69A880)
#define RPG_GAMECORE_FATEBATTLESHOWRIDERUI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D69A890)
#define RPG_GAMECORE_FATEBATTLESHOWRIDERUI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D69A850)

namespace RPG::GameCore
{
	class FateBattleShowRiderUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Active; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLESHOWRIDERUI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateBattleShowRiderUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateBattleShowRiderUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLESHOWRIDERUI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateBattleShowRiderUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateBattleShowRiderUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLESHOWRIDERUI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
