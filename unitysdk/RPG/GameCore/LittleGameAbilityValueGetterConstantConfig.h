#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityValueGetterConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameAbilityValueGetterConstantConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERCONSTANTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA1D600)
#define RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERCONSTANTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EA1D610)
#define RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERCONSTANTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EA1D4F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityValueGetterConstantConfig_TypeDefinitionIndex = 21727;

	class LittleGameAbilityValueGetterConstantConfig : public ::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig
	{
	public:
		::RPG::GameCore::FixPoint Value; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERCONSTANTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityValueGetterConstantConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityValueGetterConstantConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERCONSTANTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityValueGetterConstantConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityValueGetterConstantConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERCONSTANTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
