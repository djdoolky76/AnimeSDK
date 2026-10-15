#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PKHNHEBKPPI.h"
namespace System { class Object; }
namespace System { class String; }

#define NBKHOIEPKKJ_CLEAR_OFFSET UNITYSDK_OFFSET(0xBADC280)
#define NBKHOIEPKKJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBADC5A0)
#define NBKHOIEPKKJ_DDCENCNBHDN_OFFSET UNITYSDK_OFFSET(0xBADC2C0)

	class NBKHOIEPKKJ : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBKHOIEPKKJ_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBKHOIEPKKJ_CLEAR_OFFSET))(this);
		}

		::System::String* DDCENCNBHDN(::System::Object* a1, ::PKHNHEBKPPI a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*, ::PKHNHEBKPPI))((::PBYTE)hIl2Cpp + NBKHOIEPKKJ_DDCENCNBHDN_OFFSET))(this, a1, a2);
		}

	};
