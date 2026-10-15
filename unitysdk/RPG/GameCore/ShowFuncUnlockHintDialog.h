#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowFuncUnlockHintDialog; }

#define RPG_GAMECORE_SHOWFUNCUNLOCKHINTDIALOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DADD650)
#define RPG_GAMECORE_SHOWFUNCUNLOCKHINTDIALOG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DADD660)
#define RPG_GAMECORE_SHOWFUNCUNLOCKHINTDIALOG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DADD610)

namespace RPG::GameCore
{
	class ShowFuncUnlockHintDialog : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 FuncID; // 0x18
		::System::Boolean WaitForExit; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWFUNCUNLOCKHINTDIALOG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowFuncUnlockHintDialog* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowFuncUnlockHintDialog*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWFUNCUNLOCKHINTDIALOG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowFuncUnlockHintDialog* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowFuncUnlockHintDialog*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWFUNCUNLOCKHINTDIALOG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
