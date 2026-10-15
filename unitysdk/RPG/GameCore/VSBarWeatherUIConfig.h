#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/WeatherUIBaseConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class VSBarWeatherUIConfig; }

#define RPG_GAMECORE_VSBARWEATHERUICONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC8A820)
#define RPG_GAMECORE_VSBARWEATHERUICONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC8A6E0)
#define RPG_GAMECORE_VSBARWEATHERUICONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC8A690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VSBarWeatherUIConfig_TypeDefinitionIndex = 22793;

	class VSBarWeatherUIConfig : public ::RPG::GameCore::WeatherUIBaseConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* LeftNum; // 0x10
		::RPG::GameCore::DynamicFloat* RightNum; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VSBARWEATHERUICONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::VSBarWeatherUIConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VSBarWeatherUIConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VSBARWEATHERUICONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::VSBarWeatherUIConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VSBarWeatherUIConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VSBARWEATHERUICONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
