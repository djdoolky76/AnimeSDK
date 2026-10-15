#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierShopBuyReturnMoneyConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERSHOPBUYRETURNMONEYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA1A8E0)
#define RPG_GAMECORE_ROGUEMODIFIERSHOPBUYRETURNMONEYCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA1A8F0)
#define RPG_GAMECORE_ROGUEMODIFIERSHOPBUYRETURNMONEYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA1A8A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierShopBuyReturnMoneyConfig_TypeDefinitionIndex = 17994;

	class RogueModifierShopBuyReturnMoneyConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSHOPBUYRETURNMONEYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierShopBuyReturnMoneyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierShopBuyReturnMoneyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSHOPBUYRETURNMONEYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierShopBuyReturnMoneyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierShopBuyReturnMoneyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSHOPBUYRETURNMONEYCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
