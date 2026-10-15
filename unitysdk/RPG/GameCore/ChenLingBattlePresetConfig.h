#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingBattlePresetArmyConfig; }
namespace RPG::GameCore { class ChenLingBattlePresetConfig; }

#define RPG_GAMECORE_CHENLINGBATTLEPRESETCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D559CE0)
#define RPG_GAMECORE_CHENLINGBATTLEPRESETCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D559B80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattlePresetConfig_TypeDefinitionIndex = 15690;

	class ChenLingBattlePresetConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ChenLingBattlePresetArmyConfig*>* AllyConfig; // 0x10
		::Il2CppArray<::RPG::GameCore::ChenLingBattlePresetArmyConfig*>* EnemyConfig; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEPRESETCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattlePresetConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattlePresetConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEPRESETCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
