#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Main_NavigateToAward; }

#define RPG_GAMECORE_ST_MAIN_NAVIGATETOAWARD_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA80590)
#define RPG_GAMECORE_ST_MAIN_NAVIGATETOAWARD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA805A0)
#define RPG_GAMECORE_ST_MAIN_NAVIGATETOAWARD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA804D0)

namespace RPG::GameCore
{
	class ST_Main_NavigateToAward : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_NAVIGATETOAWARD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_NavigateToAward* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_NavigateToAward*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_NAVIGATETOAWARD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_NavigateToAward* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_NavigateToAward*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_NAVIGATETOAWARD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
