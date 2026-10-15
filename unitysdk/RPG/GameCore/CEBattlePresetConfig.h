#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleLineupSPPreset.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleLineupAvatarConfig; }
namespace RPG::GameCore { class CEBattleAreaInfo; }
namespace RPG::GameCore { class CEBattlePresetConfig; }
namespace RPG::GameCore { class LineupMazeBuffData; }
namespace System { class String; }

#define RPG_GAMECORE_CEBATTLEPRESETCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D516820)
#define RPG_GAMECORE_CEBATTLEPRESETCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5164B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CEBattlePresetConfig_TypeDefinitionIndex = 18140;

	class CEBattlePresetConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* SaveFile; // 0x10
		::System::String* Name; // 0x18
		::System::UInt32 StageID; // 0x20
		::System::UInt32 WorldLevel; // 0x24
		::System::String* SkillTreePreset; // 0x28
		::RPG::GameCore::BattleLineupSPPreset SPPreset; // 0x30
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::BattleLineupAvatarConfig*>* LineupConfigList; // 0x38
		::Il2CppArray<::RPG::GameCore::LineupMazeBuffData*>* MazeBuffDataList; // 0x40
		::RPG::GameCore::CEBattleAreaInfo* BattleArea; // 0x48
		::Il2CppArray<::System::UInt32>* BattleScoringList; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CEBATTLEPRESETCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CEBattlePresetConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CEBattlePresetConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CEBATTLEPRESETCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
