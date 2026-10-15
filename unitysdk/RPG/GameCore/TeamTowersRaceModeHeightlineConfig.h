#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TeamTowersRaceModeHeightlineConfig; }

#define RPG_GAMECORE_TEAMTOWERSRACEMODEHEIGHTLINECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB508A0)
#define RPG_GAMECORE_TEAMTOWERSRACEMODEHEIGHTLINECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB506D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamTowersRaceModeHeightlineConfig_TypeDefinitionIndex = 18949;

	class TeamTowersRaceModeHeightlineConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single StartCountdown; // 0x10
		::System::UInt32 BossDamage; // 0x14
		::System::Single DecreaseCountdownOnReset; // 0x18
		::System::Single MinCountdown; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSRACEMODEHEIGHTLINECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TeamTowersRaceModeHeightlineConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TeamTowersRaceModeHeightlineConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSRACEMODEHEIGHTLINECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
