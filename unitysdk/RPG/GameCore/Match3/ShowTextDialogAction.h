#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class ShowTextDialogAction; }

#define RPG_GAMECORE_MATCH3_SHOWTEXTDIALOGACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8517D0)
#define RPG_GAMECORE_MATCH3_SHOWTEXTDIALOGACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8517E0)
#define RPG_GAMECORE_MATCH3_SHOWTEXTDIALOGACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D851780)

namespace RPG::GameCore::Match3
{
	class ShowTextDialogAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::RPG::Client::TextID TextID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SHOWTEXTDIALOGACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::ShowTextDialogAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::ShowTextDialogAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SHOWTEXTDIALOGACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::ShowTextDialogAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::ShowTextDialogAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SHOWTEXTDIALOGACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
