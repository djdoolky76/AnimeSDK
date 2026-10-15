#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierReplaceContentRogueFormulaRandomListConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEFORMULARANDOMLISTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9EC3A0)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEFORMULARANDOMLISTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9EC3B0)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEFORMULARANDOMLISTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9EC360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierReplaceContentRogueFormulaRandomListConfig_TypeDefinitionIndex = 17707;

	class RogueModifierReplaceContentRogueFormulaRandomListConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEFORMULARANDOMLISTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierReplaceContentRogueFormulaRandomListConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierReplaceContentRogueFormulaRandomListConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEFORMULARANDOMLISTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierReplaceContentRogueFormulaRandomListConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierReplaceContentRogueFormulaRandomListConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEFORMULARANDOMLISTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
