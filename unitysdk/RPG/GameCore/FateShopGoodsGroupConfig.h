#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateShopGoodsGroupConfig; }

#define RPG_GAMECORE_FATESHOPGOODSGROUPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D69EC90)
#define RPG_GAMECORE_FATESHOPGOODSGROUPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D69EC50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateShopGoodsGroupConfig_TypeDefinitionIndex = 19261;

	class FateShopGoodsGroupConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATESHOPGOODSGROUPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateShopGoodsGroupConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateShopGoodsGroupConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATESHOPGOODSGROUPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
