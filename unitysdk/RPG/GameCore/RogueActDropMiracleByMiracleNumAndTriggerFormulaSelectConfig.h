#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActDropMiracleByMiracleNumAndTriggerFormulaSelectConfig; }

#define RPG_GAMECORE_ROGUEACTDROPMIRACLEBYMIRACLENUMANDTRIGGERFORMULASELECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D99DA90)
#define RPG_GAMECORE_ROGUEACTDROPMIRACLEBYMIRACLENUMANDTRIGGERFORMULASELECTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D99DAA0)
#define RPG_GAMECORE_ROGUEACTDROPMIRACLEBYMIRACLENUMANDTRIGGERFORMULASELECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D99DA50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActDropMiracleByMiracleNumAndTriggerFormulaSelectConfig_TypeDefinitionIndex = 19706;

	class RogueActDropMiracleByMiracleNumAndTriggerFormulaSelectConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTDROPMIRACLEBYMIRACLENUMANDTRIGGERFORMULASELECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActDropMiracleByMiracleNumAndTriggerFormulaSelectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActDropMiracleByMiracleNumAndTriggerFormulaSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTDROPMIRACLEBYMIRACLENUMANDTRIGGERFORMULASELECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActDropMiracleByMiracleNumAndTriggerFormulaSelectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActDropMiracleByMiracleNumAndTriggerFormulaSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTDROPMIRACLEBYMIRACLENUMANDTRIGGERFORMULASELECTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
