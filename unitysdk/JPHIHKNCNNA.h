#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJHMBGLPOLB;
class KOIACJAJFEC;
class OOCCBMLAELL;

#define JPHIHKNCNNA_CTOR_OFFSET UNITYSDK_OFFSET(0xB2BECA0)

	class JPHIHKNCNNA : public ::System::Object
	{
	public:
		::KOIACJAJFEC* BLGKHCMDJJP; // 0x10
		::BJHMBGLPOLB* KDFKDNLNDHN; // 0x18
		::OOCCBMLAELL* ELIMDKMMGBO; // 0x20
		::System::Void _ctor(::OOCCBMLAELL* a1, ::BJHMBGLPOLB* a2, ::KOIACJAJFEC* a3)
		{
			return ((::System::Void(*)(::PVOID, ::OOCCBMLAELL*, ::BJHMBGLPOLB*, ::KOIACJAJFEC*))((::PBYTE)hIl2Cpp + JPHIHKNCNNA_CTOR_OFFSET))(this, a1, a2, a3);
		}

	};
