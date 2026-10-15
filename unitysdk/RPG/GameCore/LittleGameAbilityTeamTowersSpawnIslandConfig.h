#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityEffectConfig.h"
#include "unitysdk/RPG/MVector2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameAbilityTeamTowersSpawnIslandConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSSPAWNISLANDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7DC0E0)
#define RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSSPAWNISLANDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7DC0F0)
#define RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSSPAWNISLANDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7DC090)

namespace RPG::GameCore
{
	class LittleGameAbilityTeamTowersSpawnIslandConfig : public ::RPG::GameCore::BaseLittleGameAbilityEffectConfig
	{
	public:
		::RPG::MVector2 Delta; // 0x10
		::Il2CppArray<::System::UInt32>* IslandConfigIDs; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSSPAWNISLANDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityTeamTowersSpawnIslandConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityTeamTowersSpawnIslandConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSSPAWNISLANDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityTeamTowersSpawnIslandConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityTeamTowersSpawnIslandConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSSPAWNISLANDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
