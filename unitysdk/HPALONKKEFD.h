#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define HPALONKKEFD_CTOR_OFFSET UNITYSDK_OFFSET(0x1CED08C0)
#define HPALONKKEFD_GET_ISMAINTYPE_OFFSET UNITYSDK_OFFSET(0x1CED08A0)
#define HPALONKKEFD_GET_ISSTRUCTHANDLE_OFFSET UNITYSDK_OFFSET(0x1CED08B0)

	class HPALONKKEFD : public ::System::Attribute
	{
	public:
		::System::Boolean _IsMainType_k__BackingField; // 0x10
		::System::Boolean _IsStructHandle_k__BackingField; // 0x11
		::System::Void _ctor(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HPALONKKEFD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsMainType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPALONKKEFD_GET_ISMAINTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsStructHandle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPALONKKEFD_GET_ISSTRUCTHANDLE_OFFSET))(this);
		}

	};
