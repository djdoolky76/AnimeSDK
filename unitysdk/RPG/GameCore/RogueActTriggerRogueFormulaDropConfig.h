#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActTriggerRogueFormulaDropConfig; }

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEFORMULADROPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D974660)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEFORMULADROPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D974670)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEFORMULADROPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D974620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueFormulaDropConfig_TypeDefinitionIndex = 19654;

	class RogueActTriggerRogueFormulaDropConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEFORMULADROPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActTriggerRogueFormulaDropConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActTriggerRogueFormulaDropConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEFORMULADROPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActTriggerRogueFormulaDropConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActTriggerRogueFormulaDropConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEFORMULADROPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
