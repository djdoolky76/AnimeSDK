#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByRoguePassCell; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEPASSCELL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAA9FE0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEPASSCELL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAA9FF0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEPASSCELL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAA9FA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByRoguePassCell_TypeDefinitionIndex = 21791;

	class SetDynamicValueByRoguePassCell : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEPASSCELL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByRoguePassCell* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByRoguePassCell*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEPASSCELL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByRoguePassCell* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByRoguePassCell*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEPASSCELL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
