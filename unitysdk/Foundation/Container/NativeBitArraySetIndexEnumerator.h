#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_CONTAINER_NATIVEBITARRAYSETINDEXENUMERATOR_FINDSETBITINDEX_OFFSET UNITYSDK_OFFSET(0x1FDDFC10)
#define FOUNDATION_CONTAINER_NATIVEBITARRAYSETINDEXENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9A5020)
#define FOUNDATION_CONTAINER_NATIVEBITARRAYSETINDEXENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9A5090)
#define FOUNDATION_CONTAINER_NATIVEBITARRAYSETINDEXENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x9A5000)

namespace Foundation::Container
{
	inline static constexpr unsigned int NativeBitArraySetIndexEnumerator_TypeDefinitionIndex = 9013;

	struct alignas(8) NativeBitArraySetIndexEnumerator
	{
		::PVOID _begin; // 0x10
		::PVOID _end; // 0x18
		::System::Int64 _index; // 0x20

		::System::Void _ctor(::PVOID begin, ::System::Int64 wordCount)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + FOUNDATION_CONTAINER_NATIVEBITARRAYSETINDEXENUMERATOR__CTOR_OFFSET))(this, begin, wordCount);
		}

		::System::Int64 get_Current()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_CONTAINER_NATIVEBITARRAYSETINDEXENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_CONTAINER_NATIVEBITARRAYSETINDEXENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		static ::System::Int64 FindSetBitIndex(::System::Int64 index, ::PVOID begin, ::PVOID end)
		{
			return ((::System::Int64(*)(::System::Int64, ::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_CONTAINER_NATIVEBITARRAYSETINDEXENUMERATOR_FINDSETBITINDEX_OFFSET))(index, begin, end);
		}
	};
}
