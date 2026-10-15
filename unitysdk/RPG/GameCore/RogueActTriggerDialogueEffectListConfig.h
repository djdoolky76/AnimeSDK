#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActTriggerDialogueEffectListConfig; }

#define RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEEFFECTLISTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9741E0)
#define RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEEFFECTLISTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9741F0)
#define RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEEFFECTLISTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9741A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerDialogueEffectListConfig_TypeDefinitionIndex = 19631;

	class RogueActTriggerDialogueEffectListConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEEFFECTLISTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActTriggerDialogueEffectListConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActTriggerDialogueEffectListConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEEFFECTLISTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActTriggerDialogueEffectListConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActTriggerDialogueEffectListConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEEFFECTLISTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
