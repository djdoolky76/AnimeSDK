#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define GCBDDEPIINL_NHENGACBDNK_CTOR_OFFSET UNITYSDK_OFFSET(0xAF40)
#define GCBDDEPIINL_NHENGACBDNK_EQUALS_OFFSET UNITYSDK_OFFSET(0xAF50)
#define GCBDDEPIINL_NHENGACBDNK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xE620)
#define GCBDDEPIINL_NHENGACBDNK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C36B70)

inline static constexpr unsigned int GCBDDEPIINL_NHENGACBDNK_TypeDefinitionIndex = 15084;

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
