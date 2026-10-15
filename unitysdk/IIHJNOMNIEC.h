#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IIHJNOMNIEC_CTOR_OFFSET UNITYSDK_OFFSET(0x1643CED0)
#define IIHJNOMNIEC_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1643CEB0)
#define IIHJNOMNIEC_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1643CEC0)

	class IIHJNOMNIEC : public ::System::Object
	{
	public:
		::System::Boolean _IsActive_k__BackingField; // 0x10
		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IIHJNOMNIEC_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IIHJNOMNIEC_GET_ISACTIVE_OFFSET))(this);
		}

		::System::Void set_IsActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IIHJNOMNIEC_SET_ISACTIVE_OFFSET))(this, a1);
		}

	};
