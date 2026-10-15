#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKPPOAIOOHN.h"
namespace System { class Object; }

#define EMKLMCCEPJB_CTOR_OFFSET UNITYSDK_OFFSET(0x3C29F80)
#define EMKLMCCEPJB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3C2A150)
#define EMKLMCCEPJB_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C29FD0)
#define EMKLMCCEPJB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3C2A160)

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
