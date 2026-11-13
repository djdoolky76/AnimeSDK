#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierBlankShopGoodsConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERBLANKSHOPGOODSCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x2060C090)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERBLANKSHOPGOODSCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x2060C0A0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERBLANKSHOPGOODSCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x2060C050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierBlankShopGoodsConfig_TypeDefinitionIndex = 19797;

	class GridFightModifierBlankShopGoodsConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERBLANKSHOPGOODSCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierBlankShopGoodsConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierBlankShopGoodsConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERBLANKSHOPGOODSCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierBlankShopGoodsConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierBlankShopGoodsConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERBLANKSHOPGOODSCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
