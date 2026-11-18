#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FOUNDATION_SPANUTILS_BEGININDEX_OFFSET UNITYSDK_OFFSET(0x1F919F80)
#define FOUNDATION_SPANUTILS_ENDINDEX_OFFSET UNITYSDK_OFFSET(0x1F919F70)
#define FOUNDATION_SPANUTILS_ENSUREINDEX_OFFSET UNITYSDK_OFFSET(0x1F919F90)

namespace Foundation
{
	inline static constexpr unsigned int SpanUtils_TypeDefinitionIndex = 8709;

	class SpanUtils : public ::System::Object
	{
	public:
		static ::System::Int32 EndIndex(::System::Int32 spanLength, ::System::Int32 step)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_SPANUTILS_ENDINDEX_OFFSET))(spanLength, step);
		}

		static ::System::Int32 BeginIndex(::System::Int32 spanLength, ::System::Int32 step)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_SPANUTILS_BEGININDEX_OFFSET))(spanLength, step);
		}

		static ::System::Int32 EnsureIndex(::System::Int32 index, ::System::Int32 spanLength, ::System::Int32 step)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_SPANUTILS_ENSUREINDEX_OFFSET))(index, spanLength, step);
		}
	};
}
