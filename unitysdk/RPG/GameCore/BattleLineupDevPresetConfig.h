#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleLineupSPPreset.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleLineupAvatarConfig; }
namespace RPG::GameCore { class BattleLineupDevPresetConfig; }
namespace RPG::GameCore { class LineupMazeBuffData; }
namespace System { class String; }

#define RPG_GAMECORE_BATTLELINEUPDEVPRESETCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4601D0)
#define RPG_GAMECORE_BATTLELINEUPDEVPRESETCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D45FEA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleLineupDevPresetConfig_TypeDefinitionIndex = 18141;

	class BattleLineupDevPresetConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::System::UInt32 StageID; // 0x18
		::System::UInt32 WorldLevel; // 0x1C
		::RPG::GameCore::BattleLineupSPPreset SPPreset; // 0x20
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::BattleLineupAvatarConfig*>* MainTeamConfigList; // 0x28
		::Il2CppArray<::RPG::GameCore::BattleLineupAvatarConfig*>* ExtraTeamConfigList; // 0x30
		::Il2CppArray<::RPG::GameCore::LineupMazeBuffData*>* MazeBuffDataList; // 0x38
		::System::UInt32 BattleAreaRowID; // 0x40
		::System::Byte _padding1[0x4];
		::Il2CppArray<::System::UInt32>* BattleScoringList; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPDEVPRESETCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleLineupDevPresetConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleLineupDevPresetConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPDEVPRESETCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
