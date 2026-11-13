#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define GCBDDEPIINL_NHENGACBDNK_CTOR_OFFSET UNITYSDK_OFFSET(0xADCE20)
#define GCBDDEPIINL_NHENGACBDNK_EQUALS_OFFSET UNITYSDK_OFFSET(0x3EE9440)
#define GCBDDEPIINL_NHENGACBDNK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7CED80)
#define GCBDDEPIINL_NHENGACBDNK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3EE93A0)

inline static constexpr unsigned int GCBDDEPIINL_NHENGACBDNK_TypeDefinitionIndex = 15240;

	struct alignas(4) GCBDDEPIINL_NHENGACBDNK
	{
		::System::UInt32 PHFMCACHFIJ; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GCBDDEPIINL_NHENGACBDNK_CTOR_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCBDDEPIINL_NHENGACBDNK_TOSTRING_OFFSET))(this);
		}

		/*
		::System::Boolean Equals(::GCBDDEPIINL_NHENGACBDNK a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GCBDDEPIINL_NHENGACBDNK))((::PBYTE)hIl2Cpp + GCBDDEPIINL_NHENGACBDNK_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCBDDEPIINL_NHENGACBDNK_GETHASHCODE_OFFSET))(this);
		}

	};
