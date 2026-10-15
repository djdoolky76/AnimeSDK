#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierForceShopGoodsListConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERFORCESHOPGOODSLISTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7348F0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERFORCESHOPGOODSLISTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D734900)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERFORCESHOPGOODSLISTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7348B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierForceShopGoodsListConfig_TypeDefinitionIndex = 19440;

	class GridFightModifierForceShopGoodsListConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERFORCESHOPGOODSLISTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierForceShopGoodsListConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierForceShopGoodsListConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERFORCESHOPGOODSLISTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierForceShopGoodsListConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierForceShopGoodsListConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERFORCESHOPGOODSLISTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
