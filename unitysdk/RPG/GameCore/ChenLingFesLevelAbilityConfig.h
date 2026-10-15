#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesAbilityConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingFesLevelAbilityConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGFESLEVELABILITYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D58CEA0)
#define RPG_GAMECORE_CHENLINGFESLEVELABILITYCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D58CEC0)
#define RPG_GAMECORE_CHENLINGFESLEVELABILITYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D58EF00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingFesLevelAbilityConfig_TypeDefinitionIndex = 18447;

	class ChenLingFesLevelAbilityConfig : public ::RPG::GameCore::ChenLingFesAbilityConfig
	{
	public:
		::System::String* LifeTime; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnActive; // 0x20
		::System::String* LoopInterval; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnLoopTrigger; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnDayStart; // 0x38
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnDeactive; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESLEVELABILITYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingFesLevelAbilityConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingFesLevelAbilityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESLEVELABILITYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingFesLevelAbilityConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingFesLevelAbilityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESLEVELABILITYCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
