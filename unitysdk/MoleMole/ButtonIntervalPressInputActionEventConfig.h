#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KDJLPLIMPNI.h"
#include "unitysdk/MoleMole/BaseInputActionEventConfig.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"

#define MOLEMOLE_BUTTONINTERVALPRESSINPUTACTIONEVENTCONFIG_GET_DATATYPE_OFFSET UNITYSDK_OFFSET(0x1921C420)
#define MOLEMOLE_BUTTONINTERVALPRESSINPUTACTIONEVENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1921C430)

namespace MoleMole
{
	inline static constexpr unsigned int ButtonIntervalPressInputActionEventConfig_TypeDefinitionIndex = 48622;

	class ButtonIntervalPressInputActionEventConfig : public ::MoleMole::BaseInputActionEventConfig
	{
	public:
		::MoleMole::LogicButtonInputType logicButtonInputType; // 0x18
		::System::Single FirstTriggerInterval; // 0x1C
		::System::Boolean IgnoreCursorHide; // 0x20
		::System::Byte _padding0[0x3];
		::System::Single triggerInterval; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BUTTONINTERVALPRESSINPUTACTIONEVENTCONFIG__CTOR_OFFSET))(this);
		}

		::KDJLPLIMPNI get_dataType()
		{
			return ((::KDJLPLIMPNI(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BUTTONINTERVALPRESSINPUTACTIONEVENTCONFIG_GET_DATATYPE_OFFSET))(this);
		}
	};
}
