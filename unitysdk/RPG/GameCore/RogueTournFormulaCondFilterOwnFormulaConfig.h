#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueFormulaConditionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournFormulaCondFilterOwnFormulaConfig; }

#define RPG_GAMECORE_ROGUETOURNFORMULACONDFILTEROWNFORMULACONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA396E0)
#define RPG_GAMECORE_ROGUETOURNFORMULACONDFILTEROWNFORMULACONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA396F0)
#define RPG_GAMECORE_ROGUETOURNFORMULACONDFILTEROWNFORMULACONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA396A0)

namespace RPG::GameCore
{
	class RogueTournFormulaCondFilterOwnFormulaConfig : public ::RPG::GameCore::RogueFormulaConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFORMULACONDFILTEROWNFORMULACONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTournFormulaCondFilterOwnFormulaConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTournFormulaCondFilterOwnFormulaConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFORMULACONDFILTEROWNFORMULACONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTournFormulaCondFilterOwnFormulaConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTournFormulaCondFilterOwnFormulaConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFORMULACONDFILTEROWNFORMULACONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
