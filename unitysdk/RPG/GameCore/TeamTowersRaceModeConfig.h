#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TeamTowersRaceModeConfig; }
namespace RPG::GameCore { class TeamTowersRaceModeHeightlineConfig; }

#define RPG_GAMECORE_TEAMTOWERSRACEMODECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB7DFA0)
#define RPG_GAMECORE_TEAMTOWERSRACEMODECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB7DB70)

namespace RPG::GameCore
{
	class TeamTowersRaceModeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TeamTowersRaceModeHeightlineConfig*>* HeightlineConfigList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSRACEMODECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TeamTowersRaceModeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TeamTowersRaceModeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSRACEMODECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
