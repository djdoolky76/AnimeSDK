#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityValueGetterConfig.h"
#include "unitysdk/RPG/GameCore/LittleGameValueCalculateType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }
namespace RPG::GameCore { class LittleGameAbilityValueGetterCalculateConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERCALCULATECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7AEC20)
#define RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERCALCULATECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7AEC30)
#define RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERCALCULATECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7AEBD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityValueGetterCalculateConfig_TypeDefinitionIndex = 21388;

	class LittleGameAbilityValueGetterCalculateConfig : public ::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig
	{
	public:
		::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* LeftValueGetter; // 0x10
		::RPG::GameCore::LittleGameValueCalculateType CalculateType; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* RightValueGetter; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERCALCULATECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityValueGetterCalculateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityValueGetterCalculateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERCALCULATECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityValueGetterCalculateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityValueGetterCalculateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERCALCULATECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
