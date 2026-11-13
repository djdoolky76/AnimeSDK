#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingFesAbilityConfig; }
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGFESABILITYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1F35FB70)
#define RPG_GAMECORE_CHENLINGFESABILITYCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F35FB80)
#define RPG_GAMECORE_CHENLINGFESABILITYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F35F900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingFesAbilityConfig_TypeDefinitionIndex = 18605;

	class ChenLingFesAbilityConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESABILITYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingFesAbilityConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingFesAbilityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESABILITYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingFesAbilityConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingFesAbilityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESABILITYCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
