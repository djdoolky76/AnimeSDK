#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierLevelUpBattleGainMagicUnitConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERLEVELUPBATTLEGAINMAGICUNITCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA171C0)
#define RPG_GAMECORE_ROGUEMODIFIERLEVELUPBATTLEGAINMAGICUNITCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA171D0)
#define RPG_GAMECORE_ROGUEMODIFIERLEVELUPBATTLEGAINMAGICUNITCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA17180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierLevelUpBattleGainMagicUnitConfig_TypeDefinitionIndex = 17729;

	class RogueModifierLevelUpBattleGainMagicUnitConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERLEVELUPBATTLEGAINMAGICUNITCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierLevelUpBattleGainMagicUnitConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierLevelUpBattleGainMagicUnitConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERLEVELUPBATTLEGAINMAGICUNITCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierLevelUpBattleGainMagicUnitConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierLevelUpBattleGainMagicUnitConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERLEVELUPBATTLEGAINMAGICUNITCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
