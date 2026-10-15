#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateModifierShopFixedGoodsConfig; }

#define RPG_GAMECORE_FATEMODIFIERSHOPFIXEDGOODSCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D66DFF0)
#define RPG_GAMECORE_FATEMODIFIERSHOPFIXEDGOODSCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D66E000)
#define RPG_GAMECORE_FATEMODIFIERSHOPFIXEDGOODSCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D66DFB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateModifierShopFixedGoodsConfig_TypeDefinitionIndex = 19263;

	class FateModifierShopFixedGoodsConfig : public ::RPG::GameCore::FateModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERSHOPFIXEDGOODSCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateModifierShopFixedGoodsConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateModifierShopFixedGoodsConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERSHOPFIXEDGOODSCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateModifierShopFixedGoodsConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateModifierShopFixedGoodsConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERSHOPFIXEDGOODSCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
