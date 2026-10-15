#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class KraterWorldShopUpgradeConfig; }

#define RPG_GAMECORE_KRATERWORLDSHOPUPGRADECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7756B0)
#define RPG_GAMECORE_KRATERWORLDSHOPUPGRADECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7755E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int KraterWorldShopUpgradeConfig_TypeDefinitionIndex = 16815;

	class KraterWorldShopUpgradeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single DelayTime; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_KRATERWORLDSHOPUPGRADECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::KraterWorldShopUpgradeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::KraterWorldShopUpgradeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_KRATERWORLDSHOPUPGRADECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
