#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActionDelayPreshowConfig; }
namespace RPG::GameCore { class ModifierAffectedPreshowConfig; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_MODIFIERAFFECTEDPRESHOWCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D88C010)
#define RPG_GAMECORE_MODIFIERAFFECTEDPRESHOWCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D88BD60)

namespace RPG::GameCore
{
	class ModifierAffectedPreshowConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::SkillType>* SkillTypes; // 0x10
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::PredicateConfig* Condition; // 0x20
		::RPG::GameCore::ActionDelayPreshowConfig* ActionDelayPreshowConfig; // 0x28
		::RPG::GameCore::ActionDelayPreshowConfig* BreakActionDelayPreshowConfig; // 0x30
		::System::Boolean ChangeDelayVersion; // 0x38
		::System::Boolean IsAddPreview; // 0x39
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERAFFECTEDPRESHOWCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifierAffectedPreshowConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifierAffectedPreshowConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERAFFECTEDPRESHOWCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
