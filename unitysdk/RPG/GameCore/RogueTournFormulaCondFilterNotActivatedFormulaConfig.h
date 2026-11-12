#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueFormulaConditionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournFormulaCondFilterNotActivatedFormulaConfig; }

#define RPG_GAMECORE_ROGUETOURNFORMULACONDFILTERNOTACTIVATEDFORMULACONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC4B900)
#define RPG_GAMECORE_ROGUETOURNFORMULACONDFILTERNOTACTIVATEDFORMULACONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EC4B910)
#define RPG_GAMECORE_ROGUETOURNFORMULACONDFILTERNOTACTIVATEDFORMULACONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EC4B8C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournFormulaCondFilterNotActivatedFormulaConfig_TypeDefinitionIndex = 19908;

	class RogueTournFormulaCondFilterNotActivatedFormulaConfig : public ::RPG::GameCore::RogueFormulaConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFORMULACONDFILTERNOTACTIVATEDFORMULACONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTournFormulaCondFilterNotActivatedFormulaConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTournFormulaCondFilterNotActivatedFormulaConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFORMULACONDFILTERNOTACTIVATEDFORMULACONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTournFormulaCondFilterNotActivatedFormulaConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTournFormulaCondFilterNotActivatedFormulaConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFORMULACONDFILTERNOTACTIVATEDFORMULACONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
