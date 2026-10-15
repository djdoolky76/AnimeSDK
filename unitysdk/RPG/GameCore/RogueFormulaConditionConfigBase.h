#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueConditionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueFormulaConditionConfigBase; }

#define RPG_GAMECORE_ROGUEFORMULACONDITIONCONFIGBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9CC6E0)
#define RPG_GAMECORE_ROGUEFORMULACONDITIONCONFIGBASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9CC6F0)
#define RPG_GAMECORE_ROGUEFORMULACONDITIONCONFIGBASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9CC540)

namespace RPG::GameCore
{
	class RogueFormulaConditionConfigBase : public ::RPG::GameCore::RogueConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEFORMULACONDITIONCONFIGBASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueFormulaConditionConfigBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueFormulaConditionConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEFORMULACONDITIONCONFIGBASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueFormulaConditionConfigBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueFormulaConditionConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEFORMULACONDITIONCONFIGBASE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
