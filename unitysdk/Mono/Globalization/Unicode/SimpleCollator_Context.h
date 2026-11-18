#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Globalization/CompareOptions.h"
#include "unitysdk/System/ValueType.h"

#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x84AB30)

namespace Mono::Globalization::Unicode
{
	inline static constexpr unsigned int SimpleCollator_Context_TypeDefinitionIndex = 43;

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

		::System::Void _ctor(::System::Globalization::CompareOptions opt, ::PVOID alwaysMatchFlags, ::PVOID neverMatchFlags, ::PVOID buffer1, ::PVOID buffer2, ::PVOID prev1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::CompareOptions, ::PVOID, ::PVOID, ::PVOID, ::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_CONTEXT__CTOR_OFFSET))(this, opt, alwaysMatchFlags, neverMatchFlags, buffer1, buffer2, prev1);
		}
	};
}
