#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class ShowPopupDialogAction; }

#define RPG_GAMECORE_MATCH3_SHOWPOPUPDIALOGACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D851540)
#define RPG_GAMECORE_MATCH3_SHOWPOPUPDIALOGACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D851550)
#define RPG_GAMECORE_MATCH3_SHOWPOPUPDIALOGACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8514F0)

namespace RPG::GameCore::Match3
{
	class ShowPopupDialogAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::System::UInt32 PopupID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SHOWPOPUPDIALOGACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::ShowPopupDialogAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::ShowPopupDialogAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SHOWPOPUPDIALOGACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::ShowPopupDialogAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::ShowPopupDialogAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SHOWPOPUPDIALOGACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
