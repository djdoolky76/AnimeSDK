#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureResumeTeamDataRefresh; }

#define RPG_GAMECORE_ADVENTURERESUMETEAMDATAREFRESH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3CCBE0)
#define RPG_GAMECORE_ADVENTURERESUMETEAMDATAREFRESH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3CCBF0)
#define RPG_GAMECORE_ADVENTURERESUMETEAMDATAREFRESH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3CCB20)

namespace RPG::GameCore
{
	class AdventureResumeTeamDataRefresh : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURERESUMETEAMDATAREFRESH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureResumeTeamDataRefresh* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureResumeTeamDataRefresh*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURERESUMETEAMDATAREFRESH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureResumeTeamDataRefresh* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureResumeTeamDataRefresh*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURERESUMETEAMDATAREFRESH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
