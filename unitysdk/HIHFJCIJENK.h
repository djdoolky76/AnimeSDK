#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OOCCBMLAELL;

#define HIHFJCIJENK_CTOR_OFFSET UNITYSDK_OFFSET(0x15CE5600)

	class HIHFJCIJENK : public ::System::Object
	{
	public:
		::OOCCBMLAELL* ELIMDKMMGBO; // 0x10
		::System::Void _ctor(::OOCCBMLAELL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OOCCBMLAELL*))((::PBYTE)hIl2Cpp + HIHFJCIJENK_CTOR_OFFSET))(this, a1);
		}

	};
