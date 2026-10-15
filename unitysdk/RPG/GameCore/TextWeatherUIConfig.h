#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/WeatherUIBaseConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TextWeatherUIConfig; }
namespace System { class String; }

#define RPG_GAMECORE_TEXTWEATHERUICONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB546C0)
#define RPG_GAMECORE_TEXTWEATHERUICONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB546D0)
#define RPG_GAMECORE_TEXTWEATHERUICONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB545F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TextWeatherUIConfig_TypeDefinitionIndex = 22790;

	class TextWeatherUIConfig : public ::RPG::GameCore::WeatherUIBaseConfig
	{
	public:
		::System::String* Content; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTWEATHERUICONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TextWeatherUIConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TextWeatherUIConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTWEATHERUICONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TextWeatherUIConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TextWeatherUIConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTWEATHERUICONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
