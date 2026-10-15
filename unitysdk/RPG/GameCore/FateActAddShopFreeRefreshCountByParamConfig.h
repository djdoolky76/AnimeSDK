#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateActAddShopFreeRefreshCountByParamConfig; }

#define RPG_GAMECORE_FATEACTADDSHOPFREEREFRESHCOUNTBYPARAMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D699B10)
#define RPG_GAMECORE_FATEACTADDSHOPFREEREFRESHCOUNTBYPARAMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D699B20)
#define RPG_GAMECORE_FATEACTADDSHOPFREEREFRESHCOUNTBYPARAMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D699AD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActAddShopFreeRefreshCountByParamConfig_TypeDefinitionIndex = 19225;

	class FateActAddShopFreeRefreshCountByParamConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDSHOPFREEREFRESHCOUNTBYPARAMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateActAddShopFreeRefreshCountByParamConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateActAddShopFreeRefreshCountByParamConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDSHOPFREEREFRESHCOUNTBYPARAMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateActAddShopFreeRefreshCountByParamConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateActAddShopFreeRefreshCountByParamConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDSHOPFREEREFRESHCOUNTBYPARAMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
