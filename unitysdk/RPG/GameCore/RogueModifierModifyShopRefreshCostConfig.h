#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierModifyShopRefreshCostConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPREFRESHCOSTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC2ABA0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPREFRESHCOSTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EC2ABB0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPREFRESHCOSTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EC2AB60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyShopRefreshCostConfig_TypeDefinitionIndex = 17919;

	class RogueModifierModifyShopRefreshCostConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPREFRESHCOSTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyShopRefreshCostConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyShopRefreshCostConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPREFRESHCOSTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyShopRefreshCostConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyShopRefreshCostConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPREFRESHCOSTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
