#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowBattleConditionUI; }

#define RPG_GAMECORE_SHOWBATTLECONDITIONUI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAD7A20)
#define RPG_GAMECORE_SHOWBATTLECONDITIONUI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAD7A30)
#define RPG_GAMECORE_SHOWBATTLECONDITIONUI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAD7960)

namespace RPG::GameCore
{
	class ShowBattleConditionUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLECONDITIONUI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowBattleConditionUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowBattleConditionUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLECONDITIONUI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowBattleConditionUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowBattleConditionUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLECONDITIONUI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
