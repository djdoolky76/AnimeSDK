#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DawnsEyeWeatherUIBaseConfig; }
namespace RPG::GameCore { class SetDawnsEyeWeatherUI; }

#define RPG_GAMECORE_SETDAWNSEYEWEATHERUI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA70CE0)
#define RPG_GAMECORE_SETDAWNSEYEWEATHERUI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA70CF0)
#define RPG_GAMECORE_SETDAWNSEYEWEATHERUI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA70CB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDawnsEyeWeatherUI_TypeDefinitionIndex = 22794;

	class SetDawnsEyeWeatherUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DawnsEyeWeatherUIBaseConfig* Config; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDAWNSEYEWEATHERUI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDawnsEyeWeatherUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDawnsEyeWeatherUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDAWNSEYEWEATHERUI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDawnsEyeWeatherUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDawnsEyeWeatherUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDAWNSEYEWEATHERUI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
