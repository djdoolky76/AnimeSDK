#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }
namespace System { class Type; }

#define PNKPEABDCGC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x3C27DD0)
#define PNKPEABDCGC_CTOR_OFFSET UNITYSDK_OFFSET(0x14160)
#define PNKPEABDCGC_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C27E10)
#define PNKPEABDCGC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3C27EA0)
#define PNKPEABDCGC_JDIGIILPKEC_OFFSET UNITYSDK_OFFSET(0x3C27F10)
#define PNKPEABDCGC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C27F90)

	struct alignas(4) PNKPEABDCGC
	{
		::System::UInt64 JELBNGBLFPO; // 0x10
		::System::Int32 AEIEGGAAFDB; // 0x18
		::System::Void _ctor(::System::UInt64 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Int32))((::PBYTE)hIl2Cpp + PNKPEABDCGC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::UInt64 a1, ::System::Type* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Type*))((::PBYTE)hIl2Cpp + PNKPEABDCGC_CTOR_1_OFFSET))(this, a1, a2);
		}

		/*
		::System::Boolean Equals(::PNKPEABDCGC a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PNKPEABDCGC))((::PBYTE)hIl2Cpp + PNKPEABDCGC_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNKPEABDCGC_GETHASHCODE_OFFSET))(this);
		}

		::System::Type* JDIGIILPKEC()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNKPEABDCGC_JDIGIILPKEC_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNKPEABDCGC_TOSTRING_OFFSET))(this);
		}

	};
