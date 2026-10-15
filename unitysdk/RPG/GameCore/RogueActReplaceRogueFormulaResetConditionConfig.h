#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActReplaceRogueFormulaResetConditionConfig; }

#define RPG_GAMECORE_ROGUEACTREPLACEROGUEFORMULARESETCONDITIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A15A0)
#define RPG_GAMECORE_ROGUEACTREPLACEROGUEFORMULARESETCONDITIONCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9A15B0)
#define RPG_GAMECORE_ROGUEACTREPLACEROGUEFORMULARESETCONDITIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9A1560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActReplaceRogueFormulaResetConditionConfig_TypeDefinitionIndex = 19658;

	class RogueActReplaceRogueFormulaResetConditionConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPLACEROGUEFORMULARESETCONDITIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActReplaceRogueFormulaResetConditionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActReplaceRogueFormulaResetConditionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPLACEROGUEFORMULARESETCONDITIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActReplaceRogueFormulaResetConditionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActReplaceRogueFormulaResetConditionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPLACEROGUEFORMULARESETCONDITIONCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
