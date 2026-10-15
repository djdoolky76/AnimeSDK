#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MazeSkillGameModeDropConfig; }

#define RPG_GAMECORE_MAZESKILLGAMEMODEDROPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D843FE0)
#define RPG_GAMECORE_MAZESKILLGAMEMODEDROPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D843FA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazeSkillGameModeDropConfig_TypeDefinitionIndex = 21755;

	class MazeSkillGameModeDropConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZESKILLGAMEMODEDROPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MazeSkillGameModeDropConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MazeSkillGameModeDropConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZESKILLGAMEMODEDROPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
