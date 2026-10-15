#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetWeatherUI; }
namespace RPG::GameCore { class WeatherUIBaseConfig; }
namespace System { class String; }

#define RPG_GAMECORE_SETWEATHERUI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DACA2C0)
#define RPG_GAMECORE_SETWEATHERUI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DACA2D0)
#define RPG_GAMECORE_SETWEATHERUI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DACA290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetWeatherUI_TypeDefinitionIndex = 22788;

	class SetWeatherUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::WeatherUIBaseConfig* Config; // 0x18
		::System::String* TypeName; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETWEATHERUI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetWeatherUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetWeatherUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETWEATHERUI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetWeatherUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetWeatherUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETWEATHERUI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
