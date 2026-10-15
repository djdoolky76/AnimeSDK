#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvTriggerSkill; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_ADVTRIGGERSKILL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D386A50)
#define RPG_GAMECORE_ADVTRIGGERSKILL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D386A60)
#define RPG_GAMECORE_ADVTRIGGERSKILL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D386A20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvTriggerSkill_TypeDefinitionIndex = 20535;

	class AdvTriggerSkill : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* SkillName; // 0x18
		::RPG::GameCore::TargetEvaluator* Caster; // 0x20
		::RPG::GameCore::TargetEvaluator* Target; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVTRIGGERSKILL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvTriggerSkill* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvTriggerSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVTRIGGERSKILL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvTriggerSkill* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvTriggerSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVTRIGGERSKILL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
