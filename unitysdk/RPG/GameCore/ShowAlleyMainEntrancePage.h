#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowAlleyMainEntrancePage; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_SHOWALLEYMAINENTRANCEPAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAD6710)
#define RPG_GAMECORE_SHOWALLEYMAINENTRANCEPAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAD6720)
#define RPG_GAMECORE_SHOWALLEYMAINENTRANCEPAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAD66E0)

namespace RPG::GameCore
{
	class ShowAlleyMainEntrancePage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSkip; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnCancel; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWALLEYMAINENTRANCEPAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowAlleyMainEntrancePage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowAlleyMainEntrancePage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWALLEYMAINENTRANCEPAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowAlleyMainEntrancePage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowAlleyMainEntrancePage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWALLEYMAINENTRANCEPAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
