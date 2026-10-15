#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateShopGoodsConfig; }

#define RPG_GAMECORE_FATESHOPGOODSCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D69EC40)
#define RPG_GAMECORE_FATESHOPGOODSCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D69EC00)

namespace RPG::GameCore
{
	class FateShopGoodsConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATESHOPGOODSCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateShopGoodsConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateShopGoodsConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATESHOPGOODSCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
