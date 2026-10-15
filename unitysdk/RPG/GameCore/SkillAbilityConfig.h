#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SkillAbilityConfig; }
namespace System { class String; }

#define RPG_GAMECORE_SKILLABILITYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAEC670)
#define RPG_GAMECORE_SKILLABILITYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAEC550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkillAbilityConfig_TypeDefinitionIndex = 15645;

	class SkillAbilityConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Skill; // 0x10
		::Il2CppArray<::System::String*>* AbilityList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLABILITYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SkillAbilityConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SkillAbilityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLABILITYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
