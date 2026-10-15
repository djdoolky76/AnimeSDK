#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }
namespace RPG::GameCore { class LittleGameAbilityPixAirFireMissle; }
namespace RPG::GameCore { class PixAirMissleConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIRFIREMISSLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7D9D50)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIRFIREMISSLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7D9D60)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIRFIREMISSLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7D9D20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityPixAirFireMissle_TypeDefinitionIndex = 21396;

	class LittleGameAbilityPixAirFireMissle : public ::RPG::GameCore::BaseLittleGameAbilityTaskConfig
	{
	public:
		::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* TargetSelector; // 0x18
		::RPG::GameCore::PixAirMissleConfig* MissleConfig; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIRFIREMISSLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityPixAirFireMissle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityPixAirFireMissle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIRFIREMISSLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityPixAirFireMissle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityPixAirFireMissle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIRFIREMISSLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
