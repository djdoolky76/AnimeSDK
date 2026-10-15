#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierAddShopRefreshInitialCostCountStepConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERADDSHOPREFRESHINITIALCOSTCOUNTSTEPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9DD440)
#define RPG_GAMECORE_ROGUEMODIFIERADDSHOPREFRESHINITIALCOSTCOUNTSTEPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9DD450)
#define RPG_GAMECORE_ROGUEMODIFIERADDSHOPREFRESHINITIALCOSTCOUNTSTEPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9DD400)

namespace RPG::GameCore
{
	class RogueModifierAddShopRefreshInitialCostCountStepConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERADDSHOPREFRESHINITIALCOSTCOUNTSTEPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierAddShopRefreshInitialCostCountStepConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierAddShopRefreshInitialCostCountStepConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERADDSHOPREFRESHINITIALCOSTCOUNTSTEPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierAddShopRefreshInitialCostCountStepConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierAddShopRefreshInitialCostCountStepConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERADDSHOPREFRESHINITIALCOSTCOUNTSTEPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
