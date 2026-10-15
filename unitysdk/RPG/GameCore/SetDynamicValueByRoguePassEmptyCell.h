#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByRoguePassEmptyCell; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEPASSEMPTYCELL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAAA030)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEPASSEMPTYCELL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAAA040)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEPASSEMPTYCELL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAAA000)

namespace RPG::GameCore
{
	class SetDynamicValueByRoguePassEmptyCell : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEPASSEMPTYCELL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByRoguePassEmptyCell* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByRoguePassEmptyCell*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEPASSEMPTYCELL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByRoguePassEmptyCell* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByRoguePassEmptyCell*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEPASSEMPTYCELL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
