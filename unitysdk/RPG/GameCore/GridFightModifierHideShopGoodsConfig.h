#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierHideShopGoodsConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERHIDESHOPGOODSCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9424F0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERHIDESHOPGOODSCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E942500)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERHIDESHOPGOODSCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E9424B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierHideShopGoodsConfig_TypeDefinitionIndex = 19796;

	class GridFightModifierHideShopGoodsConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERHIDESHOPGOODSCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierHideShopGoodsConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierHideShopGoodsConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERHIDESHOPGOODSCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierHideShopGoodsConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierHideShopGoodsConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERHIDESHOPGOODSCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
