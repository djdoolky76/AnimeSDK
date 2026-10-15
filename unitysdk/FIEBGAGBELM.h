#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define FIEBGAGBELM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x3C52630)
#define FIEBGAGBELM_CTOR_2_OFFSET UNITYSDK_OFFSET(0x2F760D0)
#define FIEBGAGBELM_CTOR_OFFSET UNITYSDK_OFFSET(0x3C52610)
#define FIEBGAGBELM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3C52710)
#define FIEBGAGBELM_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C52650)
#define FIEBGAGBELM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3C52720)
#define FIEBGAGBELM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C52640)

	struct alignas(8) FIEBGAGBELM
	{
		::System::Type* BBJDHCHNAKN; // 0x10
		::System::String* MBCACNKDMFG; // 0x18
		::System::Boolean AKCBGCGDPPB; // 0x20
		::System::Void _ctor(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + FIEBGAGBELM_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Type* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + FIEBGAGBELM_CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::System::Type* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + FIEBGAGBELM_CTOR_2_OFFSET))(this, a1, a2, a3);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIEBGAGBELM_TOSTRING_OFFSET))(this);
		}

		/*
		::System::Boolean Equals(::FIEBGAGBELM a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FIEBGAGBELM))((::PBYTE)hIl2Cpp + FIEBGAGBELM_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FIEBGAGBELM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIEBGAGBELM_GETHASHCODE_OFFSET))(this);
		}

	};
