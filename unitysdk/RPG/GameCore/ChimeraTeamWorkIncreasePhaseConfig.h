#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraTeamWorkIncreasePhaseConfig; }

#define RPG_GAMECORE_CHIMERATEAMWORKINCREASEPHASECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5B06A0)
#define RPG_GAMECORE_CHIMERATEAMWORKINCREASEPHASECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5B0660)

namespace RPG::GameCore
{
	class ChimeraTeamWorkIncreasePhaseConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATEAMWORKINCREASEPHASECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraTeamWorkIncreasePhaseConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraTeamWorkIncreasePhaseConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATEAMWORKINCREASEPHASECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
