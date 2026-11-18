#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigUICommon_Input_ButtonType.h"
#include "unitysdk/MoleMole/ConfigUICommon_Input_PositionType.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIGUICOMMON_INPUT_REVERSESWITCHBUTTONSLOT__CTOR_OFFSET UNITYSDK_OFFSET(0x142CEA80)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUICommon_Input_ReverseSwitchButtonSlot_TypeDefinitionIndex = 84703;

	class ConfigUICommon_Input_ReverseSwitchButtonSlot : public ::System::Object
	{
	public:
		::MoleMole::ConfigUICommon_Input_ButtonType buttonType; // 0x10
		::MoleMole::ConfigUICommon_Input_PositionType positionType; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_INPUT_REVERSESWITCHBUTTONSLOT__CTOR_OFFSET))(this);
		}
	};
}
