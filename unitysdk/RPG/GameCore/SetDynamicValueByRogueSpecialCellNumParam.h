#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueParamBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByRogueSpecialCellNumParam; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUESPECIALCELLNUMPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAAA230)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUESPECIALCELLNUMPARAM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAAA240)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUESPECIALCELLNUMPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAAA1F0)

namespace RPG::GameCore
{
	class SetDynamicValueByRogueSpecialCellNumParam : public ::RPG::GameCore::SetDynamicValueParamBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUESPECIALCELLNUMPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByRogueSpecialCellNumParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByRogueSpecialCellNumParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUESPECIALCELLNUMPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByRogueSpecialCellNumParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByRogueSpecialCellNumParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUESPECIALCELLNUMPARAM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
