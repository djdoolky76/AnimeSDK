#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KDJLPLIMPNI.h"
#include "unitysdk/MoleMole/BaseInputActionEventConfig.h"
#include "unitysdk/MoleMole/LogicAxis2DInputType.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"

#define MOLEMOLE_TWOAXISACTIONEVENTCONFIG_GET_DATATYPE_OFFSET UNITYSDK_OFFSET(0x19D01D10)
#define MOLEMOLE_TWOAXISACTIONEVENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19D01D20)

namespace MoleMole
{
	inline static constexpr unsigned int TwoAxisActionEventConfig_TypeDefinitionIndex = 89459;

	class TwoAxisActionEventConfig : public ::MoleMole::BaseInputActionEventConfig
	{
	public:
		::Il2CppArray<::MoleMole::LogicButtonInputType>* extraUpLogicButtonInputTypes; // 0x18
		::Il2CppArray<::MoleMole::LogicButtonInputType>* extraDownLogicButtonInputTypes; // 0x20
		::Il2CppArray<::MoleMole::LogicAxis2DInputType>* logicAxis2DInputTypes; // 0x28
		::Il2CppArray<::MoleMole::LogicButtonInputType>* extraRightLogicButtonInputTypes; // 0x30
		::Il2CppArray<::MoleMole::LogicButtonInputType>* extraLeftLogicButtonInputTypes; // 0x38
		::System::Boolean IgnoreCursorHide; // 0x40
		::System::Boolean addButtonInputs; // 0x41
		::System::Byte _padding0[0x2];
		::MoleMole::LogicButtonInputType rightLogicButtonInputType; // 0x44
		::MoleMole::LogicButtonInputType leftLogicButtonInputType; // 0x48
		::MoleMole::LogicButtonInputType upLogicButtonInputType; // 0x4C
		::MoleMole::LogicButtonInputType downLogicButtonInputType; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWOAXISACTIONEVENTCONFIG__CTOR_OFFSET))(this);
		}

		::KDJLPLIMPNI get_dataType()
		{
			return ((::KDJLPLIMPNI(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWOAXISACTIONEVENTCONFIG_GET_DATATYPE_OFFSET))(this);
		}
	};
}
