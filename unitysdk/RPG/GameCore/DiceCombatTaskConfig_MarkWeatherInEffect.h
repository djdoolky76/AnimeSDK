#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatTaskConfig_MarkWeatherInEffect; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_MARKWEATHERINEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D612B20)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_MARKWEATHERINEFFECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D612B30)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_MARKWEATHERINEFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D612A20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_MarkWeatherInEffect_TypeDefinitionIndex = 16159;

	class DiceCombatTaskConfig_MarkWeatherInEffect : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::System::Boolean InEffect; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_MARKWEATHERINEFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_MarkWeatherInEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_MarkWeatherInEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_MARKWEATHERINEFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_MarkWeatherInEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_MarkWeatherInEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_MARKWEATHERINEFFECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
