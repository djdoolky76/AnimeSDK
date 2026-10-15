#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DawnsEyeWeatherUIBaseConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DawnsEyeThunderChargingUIConfig; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DAWNSEYETHUNDERCHARGINGUICONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5C7100)
#define RPG_GAMECORE_DAWNSEYETHUNDERCHARGINGUICONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5C7110)
#define RPG_GAMECORE_DAWNSEYETHUNDERCHARGINGUICONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5C7010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DawnsEyeThunderChargingUIConfig_TypeDefinitionIndex = 22797;

	class DawnsEyeThunderChargingUIConfig : public ::RPG::GameCore::DawnsEyeWeatherUIBaseConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* Charge; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAWNSEYETHUNDERCHARGINGUICONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DawnsEyeThunderChargingUIConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DawnsEyeThunderChargingUIConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAWNSEYETHUNDERCHARGINGUICONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DawnsEyeThunderChargingUIConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DawnsEyeThunderChargingUIConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAWNSEYETHUNDERCHARGINGUICONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
