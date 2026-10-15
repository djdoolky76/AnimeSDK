#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureSkillTriggerAbility; }
namespace System { class String; }

#define RPG_GAMECORE_ADVENTURESKILLTRIGGERABILITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D39FF90)
#define RPG_GAMECORE_ADVENTURESKILLTRIGGERABILITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D39FFA0)
#define RPG_GAMECORE_ADVENTURESKILLTRIGGERABILITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D39FF60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureSkillTriggerAbility_TypeDefinitionIndex = 20228;

	class AdventureSkillTriggerAbility : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* AbilityName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLTRIGGERABILITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureSkillTriggerAbility* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureSkillTriggerAbility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLTRIGGERABILITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureSkillTriggerAbility* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureSkillTriggerAbility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLTRIGGERABILITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
