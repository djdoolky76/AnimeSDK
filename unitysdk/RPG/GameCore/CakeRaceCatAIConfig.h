#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceCatAIConfig; }

#define RPG_GAMECORE_CAKERACECATAICONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D54D1D0)
#define RPG_GAMECORE_CAKERACECATAICONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D54CE10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceCatAIConfig_TypeDefinitionIndex = 18425;

	class CakeRaceCatAIConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 HeightMm; // 0x10
		::System::UInt32 RadiusMm; // 0x14
		::System::UInt32 JumpHeightMm; // 0x18
		::System::Int32 HazardPerception; // 0x1C
		::System::Int32 GoalWeight; // 0x20
		::System::Int32 RepeatCostWeight; // 0x24
		::System::Int32 StepCostWeight; // 0x28
		::System::Boolean IsBroadenX; // 0x2C
		::System::Boolean IsOnlySpecialBet; // 0x2D
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACECATAICONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceCatAIConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceCatAIConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACECATAICONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
