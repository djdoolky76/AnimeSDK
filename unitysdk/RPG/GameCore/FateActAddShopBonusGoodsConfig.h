#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateActAddShopBonusGoodsConfig; }

#define RPG_GAMECORE_FATEACTADDSHOPBONUSGOODSCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D66C030)
#define RPG_GAMECORE_FATEACTADDSHOPBONUSGOODSCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D66C040)
#define RPG_GAMECORE_FATEACTADDSHOPBONUSGOODSCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D66BFF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActAddShopBonusGoodsConfig_TypeDefinitionIndex = 19241;

	class FateActAddShopBonusGoodsConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDSHOPBONUSGOODSCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateActAddShopBonusGoodsConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateActAddShopBonusGoodsConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDSHOPBONUSGOODSCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateActAddShopBonusGoodsConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateActAddShopBonusGoodsConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDSHOPBONUSGOODSCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
