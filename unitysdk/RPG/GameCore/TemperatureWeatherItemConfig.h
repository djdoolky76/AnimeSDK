#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TemperatureWeatherItemConfig; }

#define RPG_GAMECORE_TEMPERATUREWEATHERITEMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB52590)
#define RPG_GAMECORE_TEMPERATUREWEATHERITEMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB523A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TemperatureWeatherItemConfig_TypeDefinitionIndex = 22792;

	class TemperatureWeatherItemConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* Temperature; // 0x10
		::RPG::GameCore::DynamicFloat* Progress; // 0x18
		::RPG::GameCore::DynamicFloat* ShowWarning; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEMPERATUREWEATHERITEMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TemperatureWeatherItemConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TemperatureWeatherItemConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEMPERATUREWEATHERITEMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
