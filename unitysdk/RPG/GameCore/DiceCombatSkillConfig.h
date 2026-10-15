#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatAbilityConfig; }
namespace RPG::GameCore { class DiceCombatBossPersistentTipsConfig; }
namespace RPG::GameCore { class DiceCombatInsertAbilityConfig; }
namespace RPG::GameCore { class DiceCombatModifierConfig; }
namespace RPG::GameCore { class DiceCombatSkillAIEffectConfig; }
namespace RPG::GameCore { class DiceCombatSkillConfig; }
namespace RPG::GameCore { class DiceCombatSkillPreviewConfig; }

#define RPG_GAMECORE_DICECOMBATSKILLCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E2B60)
#define RPG_GAMECORE_DICECOMBATSKILLCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5E2950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatSkillConfig_TypeDefinitionIndex = 16122;

	class DiceCombatSkillConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DiceCombatAbilityConfig* RootAbility; // 0x10
		::Il2CppArray<::RPG::GameCore::DiceCombatInsertAbilityConfig*>* InsertAbilitys; // 0x18
		::Il2CppArray<::RPG::GameCore::DiceCombatModifierConfig*>* Modifiers; // 0x20
		::RPG::GameCore::DiceCombatSkillPreviewConfig* PreviewOnRollFinish; // 0x28
		::RPG::GameCore::DiceCombatSkillPreviewConfig* PreviewOnSelectDice; // 0x30
		::RPG::GameCore::DiceCombatSkillAIEffectConfig* AIEffect; // 0x38
		::RPG::GameCore::DiceCombatBossPersistentTipsConfig* TryShowBossPersistentTips; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATSKILLCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatSkillConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatSkillConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATSKILLCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
