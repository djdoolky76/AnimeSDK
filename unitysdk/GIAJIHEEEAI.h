#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BICOIIAPJKC;
class HHLOEMDFFMG;
class OBJANKHLNGO;

#define GIAJIHEEEAI_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15A22830)
#define GIAJIHEEEAI_CTOR_OFFSET UNITYSDK_OFFSET(0x15A22820)

inline static constexpr unsigned int GIAJIHEEEAI_TypeDefinitionIndex = 79649;

	class GIAJIHEEEAI : public ::System::Object
	{
	public:
		::OBJANKHLNGO* GJALMBBNNOF; // 0x10
		::BICOIIAPJKC* INDNOJDKNJM; // 0x18
		::System::Void _ctor(::OBJANKHLNGO* a1, ::BICOIIAPJKC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::OBJANKHLNGO*, ::BICOIIAPJKC*))((::PBYTE)hIl2Cpp + GIAJIHEEEAI_CTOR_OFFSET))(this, a1, a2);
		}

		::HHLOEMDFFMG* BPLPBPMEODA()
		{
			return ((::HHLOEMDFFMG*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIAJIHEEEAI_BPLPBPMEODA_OFFSET))(this);
		}

	};
