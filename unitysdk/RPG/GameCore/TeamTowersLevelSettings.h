#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameLevelSettings.h"
#include "unitysdk/RPG/GameCore/TeamTowersLevelGameMode.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TeamTowersAIConfig; }
namespace RPG::GameCore { class TeamTowersBossConfig; }
namespace RPG::GameCore { class TeamTowersInfiniteModeConfig; }
namespace RPG::GameCore { class TeamTowersLevelSettings; }
namespace RPG::GameCore { class TeamTowersRaceModeConfig; }

#define RPG_GAMECORE_TEAMTOWERSLEVELSETTINGS_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB7D750)
#define RPG_GAMECORE_TEAMTOWERSLEVELSETTINGS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB7D770)
#define RPG_GAMECORE_TEAMTOWERSLEVELSETTINGS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB7D710)

namespace RPG::GameCore
{
	class TeamTowersLevelSettings : public ::RPG::GameCore::LittleGameLevelSettings
	{
	public:
		::RPG::GameCore::TeamTowersLevelGameMode GameMode; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::UInt32>* TargetHeightList; // 0x18
		::Il2CppArray<::System::UInt32>* NormalFieldIDs; // 0x20
		::Il2CppArray<::System::UInt32>* IvyFieldIDs; // 0x28
		::System::UInt32 MaxSpawnBrickPositionXDelta; // 0x30
		::System::UInt32 MaxPlayerHP; // 0x34
		::System::Single BrickScale; // 0x38
		::System::Single FeverDuration; // 0x3C
		::System::Single DeadAreaMaxY; // 0x40
		::System::Byte _padding1[0x4];
		::RPG::GameCore::TeamTowersBossConfig* BossConfig; // 0x48
		::RPG::GameCore::TeamTowersAIConfig* AIConfig; // 0x50
		::RPG::GameCore::TeamTowersRaceModeConfig* RaceModeConfig; // 0x58
		::RPG::GameCore::TeamTowersInfiniteModeConfig* InfiniteModeConfig; // 0x60
		::Il2CppArray<::RPG::GameCore::TeamTowersAIConfig*>* MultiAIConfig; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSLEVELSETTINGS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TeamTowersLevelSettings* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TeamTowersLevelSettings*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSLEVELSETTINGS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TeamTowersLevelSettings* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TeamTowersLevelSettings*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSLEVELSETTINGS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
