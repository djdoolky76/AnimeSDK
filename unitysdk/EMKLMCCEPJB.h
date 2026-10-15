#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKPPOAIOOHN.h"
namespace System { class Object; }

#define EMKLMCCEPJB_CTOR_OFFSET UNITYSDK_OFFSET(0x3C2A6B0)
#define EMKLMCCEPJB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3C2A880)
#define EMKLMCCEPJB_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C2A700)
#define EMKLMCCEPJB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3C2A890)

inline static constexpr unsigned int EMKLMCCEPJB_TypeDefinitionIndex = 36398;

	struct alignas(4) EMKLMCCEPJB
	{
		::AKPPOAIOOHN MNOGOAMMHCB; // 0x10
		::AKPPOAIOOHN KEFFMKMIHPN; // 0x34
		::System::Void _ctor(::AKPPOAIOOHN a1, ::AKPPOAIOOHN a2)
		{
			return ((::System::Void(*)(::PVOID, ::AKPPOAIOOHN, ::AKPPOAIOOHN))((::PBYTE)hIl2Cpp + EMKLMCCEPJB_CTOR_OFFSET))(this, a1, a2);
		}

		/*
		::System::Boolean Equals(::EMKLMCCEPJB a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EMKLMCCEPJB))((::PBYTE)hIl2Cpp + EMKLMCCEPJB_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMKLMCCEPJB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKLMCCEPJB_GETHASHCODE_OFFSET))(this);
		}

	};
