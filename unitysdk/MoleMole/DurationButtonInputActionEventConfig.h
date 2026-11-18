#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KDJLPLIMPNI.h"
#include "unitysdk/MoleMole/BaseInputActionEventConfig.h"
#include "unitysdk/MoleMole/DurationButtonType.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"

#define MOLEMOLE_DURATIONBUTTONINPUTACTIONEVENTCONFIG_GET_DATATYPE_OFFSET UNITYSDK_OFFSET(0x19B36F60)
#define MOLEMOLE_DURATIONBUTTONINPUTACTIONEVENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B36F70)

namespace MoleMole
{
	inline static constexpr unsigned int DurationButtonInputActionEventConfig_TypeDefinitionIndex = 87844;

	class DurationButtonInputActionEventConfig : public ::MoleMole::BaseInputActionEventConfig
	{
	public:
		::System::Boolean IgnoreCursorHide; // 0x18
		::System::Byte _padding0[0x3];
		::MoleMole::DurationButtonType durationType; // 0x1C
		::MoleMole::LogicButtonInputType logicButtonInputType; // 0x20
		::System::Single durationThreshold; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DURATIONBUTTONINPUTACTIONEVENTCONFIG__CTOR_OFFSET))(this);
		}

		::KDJLPLIMPNI get_dataType()
		{
			return ((::KDJLPLIMPNI(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DURATIONBUTTONINPUTACTIONEVENTCONFIG_GET_DATATYPE_OFFSET))(this);
		}
	};
}
