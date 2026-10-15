#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierExecuteActionOnDeliverShopBattleRewardConfig; }

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONDELIVERSHOPBATTLEREWARDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA15C60)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONDELIVERSHOPBATTLEREWARDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA15C70)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONDELIVERSHOPBATTLEREWARDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA15C20)

namespace RPG::GameCore
{
	class RogueModifierExecuteActionOnDeliverShopBattleRewardConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONDELIVERSHOPBATTLEREWARDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionOnDeliverShopBattleRewardConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionOnDeliverShopBattleRewardConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONDELIVERSHOPBATTLEREWARDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionOnDeliverShopBattleRewardConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionOnDeliverShopBattleRewardConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONDELIVERSHOPBATTLEREWARDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
