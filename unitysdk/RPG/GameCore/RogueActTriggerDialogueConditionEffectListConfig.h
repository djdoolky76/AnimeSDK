#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActTriggerDialogueConditionEffectListConfig; }

#define RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUECONDITIONEFFECTLISTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D974180)
#define RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUECONDITIONEFFECTLISTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D974190)
#define RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUECONDITIONEFFECTLISTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D974140)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerDialogueConditionEffectListConfig_TypeDefinitionIndex = 19633;

	class RogueActTriggerDialogueConditionEffectListConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUECONDITIONEFFECTLISTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActTriggerDialogueConditionEffectListConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActTriggerDialogueConditionEffectListConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUECONDITIONEFFECTLISTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActTriggerDialogueConditionEffectListConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActTriggerDialogueConditionEffectListConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUECONDITIONEFFECTLISTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
