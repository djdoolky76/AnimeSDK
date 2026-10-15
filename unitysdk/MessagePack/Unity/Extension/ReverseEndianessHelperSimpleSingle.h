#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Span_1_0C0D59FF8BC7380B.h"

#define MESSAGEPACK_UNITY_EXTENSION_REVERSEENDIANESSHELPERSIMPLESINGLE_REVERSEENDIANESS_OFFSET UNITYSDK_OFFSET(0x3C0DAA0)

namespace MessagePack::Unity::Extension
{
	inline static constexpr unsigned int ReverseEndianessHelperSimpleSingle_TypeDefinitionIndex = 10155;

	struct alignas(4) ReverseEndianessHelperSimpleSingle
	{
		::System::Void ReverseEndianess(::System::Span_1_0C0D59FF8BC7380B<::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Span_1_0C0D59FF8BC7380B<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_EXTENSION_REVERSEENDIANESSHELPERSIMPLESINGLE_REVERSEENDIANESS_OFFSET))(this, a1);
		}

	};
}
