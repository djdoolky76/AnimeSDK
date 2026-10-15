#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GKPDKBNFDGM;

#define MMIKGMFJKGK_CTOR_OFFSET UNITYSDK_OFFSET(0xB9D2160)
#define MMIKGMFJKGK_MJEGFOMAOFH_OFFSET UNITYSDK_OFFSET(0xB9D2100)

	class MMIKGMFJKGK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMIKGMFJKGK_CTOR_OFFSET))(this);
		}

		::System::Boolean MJEGFOMAOFH(::GKPDKBNFDGM* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::GKPDKBNFDGM*, ::System::UInt32))((::PBYTE)hIl2Cpp + MMIKGMFJKGK_MJEGFOMAOFH_OFFSET))(this, a1, a2);
		}

	};
