#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GKPDKBNFDGM;

#define GNHJPLODAMB_CTOR_OFFSET UNITYSDK_OFFSET(0x15B0AAB0)
#define GNHJPLODAMB_MJEGFOMAOFH_OFFSET UNITYSDK_OFFSET(0x15B0AA50)

	class GNHJPLODAMB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNHJPLODAMB_CTOR_OFFSET))(this);
		}

		::System::Boolean MJEGFOMAOFH(::GKPDKBNFDGM* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::GKPDKBNFDGM*, ::System::UInt32))((::PBYTE)hIl2Cpp + GNHJPLODAMB_MJEGFOMAOFH_OFFSET))(this, a1, a2);
		}

	};
