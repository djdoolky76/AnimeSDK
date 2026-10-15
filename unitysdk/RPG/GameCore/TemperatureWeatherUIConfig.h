#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/WeatherUIBaseConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TemperatureWeatherItemConfig; }
namespace RPG::GameCore { class TemperatureWeatherUIConfig; }
namespace System { class String; }

#define RPG_GAMECORE_TEMPERATUREWEATHERUICONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB7FED0)
#define RPG_GAMECORE_TEMPERATUREWEATHERUICONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB7FEE0)
#define RPG_GAMECORE_TEMPERATUREWEATHERUICONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB7FE80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TemperatureWeatherUIConfig_TypeDefinitionIndex = 22791;

	class TemperatureWeatherUIConfig : public ::RPG::GameCore::WeatherUIBaseConfig
	{
	public:
		::RPG::GameCore::TemperatureWeatherItemConfig* Config; // 0x10
		::System::String* ExtraContent; // 0x18
		::RPG::GameCore::TemperatureWeatherItemConfig* ExtraConfig; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEMPERATUREWEATHERUICONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TemperatureWeatherUIConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TemperatureWeatherUIConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEMPERATUREWEATHERUICONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TemperatureWeatherUIConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TemperatureWeatherUIConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEMPERATUREWEATHERUICONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
