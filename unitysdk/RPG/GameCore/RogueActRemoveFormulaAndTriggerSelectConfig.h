#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActRemoveFormulaAndTriggerSelectConfig; }

#define RPG_GAMECORE_ROGUEACTREMOVEFORMULAANDTRIGGERSELECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x20737A90)
#define RPG_GAMECORE_ROGUEACTREMOVEFORMULAANDTRIGGERSELECTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x20737AA0)
#define RPG_GAMECORE_ROGUEACTREMOVEFORMULAANDTRIGGERSELECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x20737A50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActRemoveFormulaAndTriggerSelectConfig_TypeDefinitionIndex = 20039;

	class RogueActRemoveFormulaAndTriggerSelectConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEFORMULAANDTRIGGERSELECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActRemoveFormulaAndTriggerSelectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActRemoveFormulaAndTriggerSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEFORMULAANDTRIGGERSELECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActRemoveFormulaAndTriggerSelectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActRemoveFormulaAndTriggerSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEFORMULAANDTRIGGERSELECTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
