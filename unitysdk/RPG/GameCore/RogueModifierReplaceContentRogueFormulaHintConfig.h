#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierReplaceContentRogueFormulaHintConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEFORMULAHINTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA19BE0)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEFORMULAHINTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA19BF0)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEFORMULAHINTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA19BA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierReplaceContentRogueFormulaHintConfig_TypeDefinitionIndex = 17708;

	class RogueModifierReplaceContentRogueFormulaHintConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEFORMULAHINTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierReplaceContentRogueFormulaHintConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierReplaceContentRogueFormulaHintConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEFORMULAHINTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierReplaceContentRogueFormulaHintConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierReplaceContentRogueFormulaHintConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEFORMULAHINTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
