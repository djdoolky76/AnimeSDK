#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueParamBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByRogueSpecificMagicUnitNumParam; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUESPECIFICMAGICUNITNUMPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAAA2F0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUESPECIFICMAGICUNITNUMPARAM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAAA300)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUESPECIFICMAGICUNITNUMPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAAA2B0)

namespace RPG::GameCore
{
	class SetDynamicValueByRogueSpecificMagicUnitNumParam : public ::RPG::GameCore::SetDynamicValueParamBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUESPECIFICMAGICUNITNUMPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByRogueSpecificMagicUnitNumParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByRogueSpecificMagicUnitNumParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUESPECIFICMAGICUNITNUMPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByRogueSpecificMagicUnitNumParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByRogueSpecificMagicUnitNumParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUESPECIFICMAGICUNITNUMPARAM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
