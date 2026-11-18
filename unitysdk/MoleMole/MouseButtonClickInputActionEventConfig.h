#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KDJLPLIMPNI.h"
#include "unitysdk/MoleMole/BaseInputActionEventConfig.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"

#define MOLEMOLE_MOUSEBUTTONCLICKINPUTACTIONEVENTCONFIG_GET_DATATYPE_OFFSET UNITYSDK_OFFSET(0x139FCEA0)
#define MOLEMOLE_MOUSEBUTTONCLICKINPUTACTIONEVENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x139FCEB0)

namespace MoleMole
{
	inline static constexpr unsigned int MouseButtonClickInputActionEventConfig_TypeDefinitionIndex = 52861;

	class MouseButtonClickInputActionEventConfig : public ::MoleMole::BaseInputActionEventConfig
	{
	public:
		::System::Single moveDistanceThreshold; // 0x18
		::System::Single clickTimeThreshold; // 0x1C
		::MoleMole::LogicButtonInputType logicButtonInputType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOUSEBUTTONCLICKINPUTACTIONEVENTCONFIG__CTOR_OFFSET))(this);
		}

		::KDJLPLIMPNI get_dataType()
		{
			return ((::KDJLPLIMPNI(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOUSEBUTTONCLICKINPUTACTIONEVENTCONFIG_GET_DATATYPE_OFFSET))(this);
		}
	};
}
