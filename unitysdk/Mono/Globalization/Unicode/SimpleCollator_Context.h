#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Globalization/CompareOptions.h"

#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_CONTEXT_CTOR_OFFSET UNITYSDK_OFFSET(0x3C14570)

namespace Mono::Globalization::Unicode
{
	struct alignas(8) SimpleCollator_Context
	{
		::System::Globalization::CompareOptions Option; // 0x10
		::System::Byte _padding0[0x4];
		::PVOID NeverMatchFlags; // 0x18
		::PVOID AlwaysMatchFlags; // 0x20
		::PVOID Buffer1; // 0x28
		::PVOID Buffer2; // 0x30
		::System::Int32 PrevCode; // 0x38
		::System::Byte _padding1[0x4];
		::PVOID PrevSortKey; // 0x40
		::System::Void _ctor(::System::Globalization::CompareOptions a1, ::PVOID a2, ::PVOID a3, ::PVOID a4, ::PVOID a5, ::PVOID a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::CompareOptions, ::PVOID, ::PVOID, ::PVOID, ::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_CONTEXT_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

	};
}
