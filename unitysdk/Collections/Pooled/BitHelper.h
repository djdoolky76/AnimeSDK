#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Span_1_0C0D59FF8BC7380B.h"

#define COLLECTIONS_POOLED_BITHELPER_CTOR_OFFSET UNITYSDK_OFFSET(0x3C26A00)
#define COLLECTIONS_POOLED_BITHELPER_FINDFIRSTMARKED_OFFSET UNITYSDK_OFFSET(0x3C26BB0)
#define COLLECTIONS_POOLED_BITHELPER_FINDFIRSTUNMARKED_OFFSET UNITYSDK_OFFSET(0x3C26AF0)
#define COLLECTIONS_POOLED_BITHELPER_ISMARKED_OFFSET UNITYSDK_OFFSET(0x3C26AA0)
#define COLLECTIONS_POOLED_BITHELPER_MARKBIT_OFFSET UNITYSDK_OFFSET(0x3C26A50)
#define COLLECTIONS_POOLED_BITHELPER_TOINTARRAYLENGTH_OFFSET UNITYSDK_OFFSET(0x1C41ED20)

namespace Collections::Pooled
{
	inline static constexpr unsigned int BitHelper_TypeDefinitionIndex = 5085;

	struct alignas(8) BitHelper
	{
		::System::Span_1_0C0D59FF8BC7380B<::System::Int32> _span; // 0x10
		// static const ::System::Object s_intSize; // 0x0
		::System::Void _ctor(::System::Span_1_0C0D59FF8BC7380B<::System::Int32> a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Span_1_0C0D59FF8BC7380B<::System::Int32>, ::System::Boolean))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_BITHELPER_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MarkBit(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_BITHELPER_MARKBIT_OFFSET))(this, a1);
		}

		::System::Boolean IsMarked(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_BITHELPER_ISMARKED_OFFSET))(this, a1);
		}

		::System::Int32 FindFirstUnmarked(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_BITHELPER_FINDFIRSTUNMARKED_OFFSET))(this, a1);
		}

		::System::Int32 FindFirstMarked(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_BITHELPER_FINDFIRSTMARKED_OFFSET))(this, a1);
		}

		static ::System::Int32 ToIntArrayLength(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_BITHELPER_TOINTARRAYLENGTH_OFFSET))(a1);
		}

	};
}
