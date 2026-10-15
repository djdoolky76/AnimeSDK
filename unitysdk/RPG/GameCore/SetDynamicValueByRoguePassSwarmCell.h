#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByRoguePassSwarmCell; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEPASSSWARMCELL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAAA0D0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEPASSSWARMCELL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAAA0E0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEPASSSWARMCELL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAAA0A0)

namespace RPG::GameCore
{
	class SetDynamicValueByRoguePassSwarmCell : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEPASSSWARMCELL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByRoguePassSwarmCell* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByRoguePassSwarmCell*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEPASSSWARMCELL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByRoguePassSwarmCell* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByRoguePassSwarmCell*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEPASSSWARMCELL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
