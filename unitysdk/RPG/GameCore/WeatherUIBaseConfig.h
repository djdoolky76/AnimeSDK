#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WeatherUIBaseConfig; }

#define RPG_GAMECORE_WEATHERUIBASECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC8A830)
#define RPG_GAMECORE_WEATHERUIBASECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DCA63F0)
#define RPG_GAMECORE_WEATHERUIBASECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCA6180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WeatherUIBaseConfig_TypeDefinitionIndex = 22789;

	class WeatherUIBaseConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WEATHERUIBASECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WeatherUIBaseConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WeatherUIBaseConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WEATHERUIBASECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WeatherUIBaseConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WeatherUIBaseConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WEATHERUIBASECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
