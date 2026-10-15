#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierForceShopSpecialGoodsConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERFORCESHOPSPECIALGOODSCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7349B0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERFORCESHOPSPECIALGOODSCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7349C0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERFORCESHOPSPECIALGOODSCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D734970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierForceShopSpecialGoodsConfig_TypeDefinitionIndex = 19411;

	class GridFightModifierForceShopSpecialGoodsConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERFORCESHOPSPECIALGOODSCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierForceShopSpecialGoodsConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierForceShopSpecialGoodsConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERFORCESHOPSPECIALGOODSCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierForceShopSpecialGoodsConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierForceShopSpecialGoodsConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERFORCESHOPSPECIALGOODSCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
