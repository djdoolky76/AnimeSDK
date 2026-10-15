#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierModifyBattleGainCoinConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYBATTLEGAINCOINCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA176E0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYBATTLEGAINCOINCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA176F0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYBATTLEGAINCOINCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA176A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyBattleGainCoinConfig_TypeDefinitionIndex = 17963;

	class RogueModifierModifyBattleGainCoinConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYBATTLEGAINCOINCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyBattleGainCoinConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyBattleGainCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYBATTLEGAINCOINCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyBattleGainCoinConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyBattleGainCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYBATTLEGAINCOINCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
