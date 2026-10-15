#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierModifyShopBattleRewardCountConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPBATTLEREWARDCOUNTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA18920)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPBATTLEREWARDCOUNTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA18930)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPBATTLEREWARDCOUNTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA188E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyShopBattleRewardCountConfig_TypeDefinitionIndex = 17751;

	class RogueModifierModifyShopBattleRewardCountConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPBATTLEREWARDCOUNTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyShopBattleRewardCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyShopBattleRewardCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPBATTLEREWARDCOUNTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyShopBattleRewardCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyShopBattleRewardCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPBATTLEREWARDCOUNTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
