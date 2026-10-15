#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActTriggerDialogueEffectRepeatableSelectConfig; }

#define RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEEFFECTREPEATABLESELECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A1C60)
#define RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEEFFECTREPEATABLESELECTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9A1C70)
#define RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEEFFECTREPEATABLESELECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9A1C20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerDialogueEffectRepeatableSelectConfig_TypeDefinitionIndex = 19636;

	class RogueActTriggerDialogueEffectRepeatableSelectConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEEFFECTREPEATABLESELECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActTriggerDialogueEffectRepeatableSelectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActTriggerDialogueEffectRepeatableSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEEFFECTREPEATABLESELECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActTriggerDialogueEffectRepeatableSelectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActTriggerDialogueEffectRepeatableSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEEFFECTREPEATABLESELECTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
