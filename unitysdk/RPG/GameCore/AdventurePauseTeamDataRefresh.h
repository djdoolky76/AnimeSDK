#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventurePauseTeamDataRefresh; }

#define RPG_GAMECORE_ADVENTUREPAUSETEAMDATAREFRESH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8FEA30)
#define RPG_GAMECORE_ADVENTUREPAUSETEAMDATAREFRESH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E8FEA40)
#define RPG_GAMECORE_ADVENTUREPAUSETEAMDATAREFRESH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E8FE9F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventurePauseTeamDataRefresh_TypeDefinitionIndex = 20737;

	class AdventurePauseTeamDataRefresh : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single PauseTime; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPAUSETEAMDATAREFRESH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventurePauseTeamDataRefresh* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventurePauseTeamDataRefresh*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPAUSETEAMDATAREFRESH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventurePauseTeamDataRefresh* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventurePauseTeamDataRefresh*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPAUSETEAMDATAREFRESH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
