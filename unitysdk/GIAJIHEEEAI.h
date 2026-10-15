#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BICOIIAPJKC;
class HHLOEMDFFMG;
class OBJANKHLNGO;

#define GIAJIHEEEAI_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15A2E270)
#define GIAJIHEEEAI_CTOR_OFFSET UNITYSDK_OFFSET(0x15A2E260)

	class GIAJIHEEEAI : public ::System::Object
	{
	public:
		::BICOIIAPJKC* INDNOJDKNJM; // 0x10
		::OBJANKHLNGO* GJALMBBNNOF; // 0x18
		::System::Void _ctor(::OBJANKHLNGO* a1, ::BICOIIAPJKC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::OBJANKHLNGO*, ::BICOIIAPJKC*))((::PBYTE)hIl2Cpp + GIAJIHEEEAI_CTOR_OFFSET))(this, a1, a2);
		}

		::HHLOEMDFFMG* BPLPBPMEODA()
		{
			return ((::HHLOEMDFFMG*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIAJIHEEEAI_BPLPBPMEODA_OFFSET))(this);
		}

	};
