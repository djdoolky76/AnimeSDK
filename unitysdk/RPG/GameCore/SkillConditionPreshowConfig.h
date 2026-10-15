#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActionDelayPreshowConfig; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class SkillConditionPreshowConfig; }

#define RPG_GAMECORE_SKILLCONDITIONPRESHOWCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAEC790)
#define RPG_GAMECORE_SKILLCONDITIONPRESHOWCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAEC680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkillConditionPreshowConfig_TypeDefinitionIndex = 18180;

	class SkillConditionPreshowConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::PredicateConfig* Condition; // 0x10
		::RPG::GameCore::ActionDelayPreshowConfig* ActionDelayPreshowConfig; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCONDITIONPRESHOWCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SkillConditionPreshowConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SkillConditionPreshowConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCONDITIONPRESHOWCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
