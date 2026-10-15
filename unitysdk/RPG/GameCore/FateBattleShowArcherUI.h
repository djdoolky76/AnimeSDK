#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateBattleShowArcherUI; }

#define RPG_GAMECORE_FATEBATTLESHOWARCHERUI_CTOR_OFFSET UNITYSDK_OFFSET(0x1D69A6A0)
#define RPG_GAMECORE_FATEBATTLESHOWARCHERUI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D69A6B0)
#define RPG_GAMECORE_FATEBATTLESHOWARCHERUI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D69A670)

namespace RPG::GameCore
{
	class FateBattleShowArcherUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Active; // 0x18
		::System::Boolean IsUltimate; // 0x19
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLESHOWARCHERUI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateBattleShowArcherUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateBattleShowArcherUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLESHOWARCHERUI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateBattleShowArcherUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateBattleShowArcherUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLESHOWARCHERUI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
