#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityValueGetterConfig.h"
#include "unitysdk/RPG/GameCore/LittleGameValueCompareType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }
namespace RPG::GameCore { class LittleGameAbilityValueGetterCompareConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERCOMPARECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7DC840)
#define RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERCOMPARECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7DC850)
#define RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERCOMPARECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7DC7F0)

namespace RPG::GameCore
{
	class LittleGameAbilityValueGetterCompareConfig : public ::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig
	{
	public:
		::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* LeftValueGetter; // 0x10
		::RPG::GameCore::LittleGameValueCompareType CompareType; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* RightValueGetter; // 0x20
		::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* TrueValueGetter; // 0x28
		::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* FalseValueGetter; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERCOMPARECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityValueGetterCompareConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityValueGetterCompareConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERCOMPARECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityValueGetterCompareConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityValueGetterCompareConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERCOMPARECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
