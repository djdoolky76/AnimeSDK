#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByRogueProtectedCell; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEPROTECTEDCELL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAAA120)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEPROTECTEDCELL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAAA130)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEPROTECTEDCELL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAAA0F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByRogueProtectedCell_TypeDefinitionIndex = 21788;

	class SetDynamicValueByRogueProtectedCell : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEPROTECTEDCELL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByRogueProtectedCell* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByRogueProtectedCell*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEPROTECTEDCELL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByRogueProtectedCell* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByRogueProtectedCell*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEPROTECTEDCELL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
