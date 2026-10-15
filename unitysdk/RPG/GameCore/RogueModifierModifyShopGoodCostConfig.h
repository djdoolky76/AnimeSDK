#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierModifyShopGoodCostConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPGOODCOSTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9EB0E0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPGOODCOSTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9EB0F0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPGOODCOSTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9EB0A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyShopGoodCostConfig_TypeDefinitionIndex = 17967;

	class RogueModifierModifyShopGoodCostConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPGOODCOSTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyShopGoodCostConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyShopGoodCostConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPGOODCOSTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyShopGoodCostConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyShopGoodCostConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPGOODCOSTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
