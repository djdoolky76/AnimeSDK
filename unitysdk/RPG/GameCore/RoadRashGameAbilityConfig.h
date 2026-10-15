#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/LittleGameAbilityConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RoadRashGameAbilityConfig; }

#define RPG_GAMECORE_ROADRASHGAMEABILITYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D99C650)
#define RPG_GAMECORE_ROADRASHGAMEABILITYCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D99C660)
#define RPG_GAMECORE_ROADRASHGAMEABILITYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D99C5F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RoadRashGameAbilityConfig_TypeDefinitionIndex = 17006;

	class RoadRashGameAbilityConfig : public ::RPG::GameCore::LittleGameAbilityConfig
	{
	public:
		::RPG::GameCore::FixPoint MaxUsableCount; // 0x18
		::RPG::GameCore::FixPoint CoolDown; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROADRASHGAMEABILITYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RoadRashGameAbilityConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RoadRashGameAbilityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROADRASHGAMEABILITYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RoadRashGameAbilityConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RoadRashGameAbilityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROADRASHGAMEABILITYCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
