#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KDJLPLIMPNI.h"
#include "unitysdk/MoleMole/InputActionDispatchPriority.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_BASEINPUTACTIONEVENTCONFIG_GET_DATATYPE_OFFSET UNITYSDK_OFFSET(0xFA87730)
#define MOLEMOLE_BASEINPUTACTIONEVENTCONFIG_GET_IGNOREPLATFORMV2_OFFSET UNITYSDK_OFFSET(0xFA87740)
#define MOLEMOLE_BASEINPUTACTIONEVENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xFA87750)

namespace MoleMole
{
	inline static constexpr unsigned int BaseInputActionEventConfig_TypeDefinitionIndex = 69419;

	class BaseInputActionEventConfig : public ::System::Object
	{
	public:
		::System::Boolean IgnorePlatform; // 0x10
		::System::Byte _padding0[0x3];
		::MoleMole::InputActionDispatchPriority InputPriority; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEINPUTACTIONEVENTCONFIG__CTOR_OFFSET))(this);
		}

		::KDJLPLIMPNI get_dataType()
		{
			return ((::KDJLPLIMPNI(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEINPUTACTIONEVENTCONFIG_GET_DATATYPE_OFFSET))(this);
		}

		::System::Boolean get_IgnorePlatformV2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEINPUTACTIONEVENTCONFIG_GET_IGNOREPLATFORMV2_OFFSET))(this);
		}
	};
}
