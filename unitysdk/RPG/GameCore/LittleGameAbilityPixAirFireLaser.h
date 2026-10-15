#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }
namespace RPG::GameCore { class LittleGameAbilityPixAirFireLaser; }
namespace RPG::GameCore { class PixAirLaserConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIRFIRELASER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7AC180)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIRFIRELASER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7AC190)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIRFIRELASER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7AC150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityPixAirFireLaser_TypeDefinitionIndex = 21398;

	class LittleGameAbilityPixAirFireLaser : public ::RPG::GameCore::BaseLittleGameAbilityTaskConfig
	{
	public:
		::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* TargetSelector; // 0x18
		::RPG::GameCore::PixAirLaserConfig* LaserConfig; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIRFIRELASER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityPixAirFireLaser* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityPixAirFireLaser*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIRFIRELASER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityPixAirFireLaser* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityPixAirFireLaser*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIRFIRELASER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
