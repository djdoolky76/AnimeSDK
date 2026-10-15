#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingBattlePresetArmyConfig; }
namespace RPG::GameCore { class ChenLingBattlePresetEnhancementConfig; }

#define RPG_GAMECORE_CHENLINGBATTLEPRESETARMYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5875C0)
#define RPG_GAMECORE_CHENLINGBATTLEPRESETARMYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5871B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattlePresetArmyConfig_TypeDefinitionIndex = 15691;

	class ChenLingBattlePresetArmyConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 SoldierID; // 0x10
		::System::UInt32 Level; // 0x14
		::System::Boolean IsPromoted; // 0x18
		::System::Byte _padding0[0x7];
		::Il2CppArray<::RPG::GameCore::ChenLingBattlePresetEnhancementConfig*>* Enhancements; // 0x20
		::System::UInt32 GridIndex; // 0x28
		::System::Single AtkRatio; // 0x2C
		::System::Single HPRatio; // 0x30
		::System::Single MoveSpeedRatio; // 0x34
		::System::Single AttackRangeRatio; // 0x38
		::System::Single AttackCDRatio; // 0x3C
		::System::Single CrtChanceRatio; // 0x40
		::System::Single CrtDamageRatio; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEPRESETARMYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattlePresetArmyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattlePresetArmyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEPRESETARMYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
