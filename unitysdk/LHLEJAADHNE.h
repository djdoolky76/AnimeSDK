#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJHMBGLPOLB;
class OOCCBMLAELL;

#define LHLEJAADHNE_CTOR_OFFSET UNITYSDK_OFFSET(0xB6BA640)

	class LHLEJAADHNE : public ::System::Object
	{
	public:
		::BJHMBGLPOLB* KDFKDNLNDHN; // 0x10
		::OOCCBMLAELL* ELIMDKMMGBO; // 0x18
		::System::Void _ctor(::OOCCBMLAELL* a1, ::BJHMBGLPOLB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::OOCCBMLAELL*, ::BJHMBGLPOLB*))((::PBYTE)hIl2Cpp + LHLEJAADHNE_CTOR_OFFSET))(this, a1, a2);
		}

	};
