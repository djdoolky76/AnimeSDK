#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelPresetBattleConfig; }
namespace RPG::GameCore { class ChimeraDuelPresetTeamConfig; }

#define RPG_GAMECORE_CHIMERADUELPRESETBATTLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5796D0)
#define RPG_GAMECORE_CHIMERADUELPRESETBATTLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D579560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelPresetBattleConfig_TypeDefinitionIndex = 16028;

	class ChimeraDuelPresetBattleConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ChimeraDuelPresetTeamConfig* AllyTeam; // 0x10
		::System::UInt32 AllyMasterID; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::ChimeraDuelPresetTeamConfig* EnemyTeam; // 0x20
		::System::UInt32 EnemyMasterID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELPRESETBATTLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelPresetBattleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelPresetBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELPRESETBATTLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
