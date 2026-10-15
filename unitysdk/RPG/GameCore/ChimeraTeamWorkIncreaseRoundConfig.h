#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraTeamWorkIncreaseRoundConfig; }

#define RPG_GAMECORE_CHIMERATEAMWORKINCREASEROUNDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5B06F0)
#define RPG_GAMECORE_CHIMERATEAMWORKINCREASEROUNDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5B06B0)

namespace RPG::GameCore
{
	class ChimeraTeamWorkIncreaseRoundConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATEAMWORKINCREASEROUNDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraTeamWorkIncreaseRoundConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraTeamWorkIncreaseRoundConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATEAMWORKINCREASEROUNDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
