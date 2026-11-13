#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureResumeTeamDataRefresh; }

#define RPG_GAMECORE_ADVENTURERESUMETEAMDATAREFRESH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9004D0)
#define RPG_GAMECORE_ADVENTURERESUMETEAMDATAREFRESH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E9004E0)
#define RPG_GAMECORE_ADVENTURERESUMETEAMDATAREFRESH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E900410)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureResumeTeamDataRefresh_TypeDefinitionIndex = 20738;

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
