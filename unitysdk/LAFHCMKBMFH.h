#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GKPDKBNFDGM;

#define LAFHCMKBMFH_CTOR_OFFSET UNITYSDK_OFFSET(0xB5DFE40)
#define LAFHCMKBMFH_MJEGFOMAOFH_OFFSET UNITYSDK_OFFSET(0xB5DFDD0)

	class LAFHCMKBMFH : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAFHCMKBMFH_CTOR_OFFSET))(this);
		}

		::System::Boolean MJEGFOMAOFH(::GKPDKBNFDGM* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::GKPDKBNFDGM*, ::System::UInt32))((::PBYTE)hIl2Cpp + LAFHCMKBMFH_MJEGFOMAOFH_OFFSET))(this, a1, a2);
		}

	};
