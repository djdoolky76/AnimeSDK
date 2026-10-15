#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StartBattleScoringAbility; }

#define RPG_GAMECORE_STARTBATTLESCORINGABILITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB1C330)
#define RPG_GAMECORE_STARTBATTLESCORINGABILITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB1C340)
#define RPG_GAMECORE_STARTBATTLESCORINGABILITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB1C270)

namespace RPG::GameCore
{
	class StartBattleScoringAbility : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTBATTLESCORINGABILITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StartBattleScoringAbility* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StartBattleScoringAbility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTBATTLESCORINGABILITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StartBattleScoringAbility* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StartBattleScoringAbility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTBATTLESCORINGABILITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
