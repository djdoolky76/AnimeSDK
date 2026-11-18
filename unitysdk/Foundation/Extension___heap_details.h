#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1_F48FB86071006F3E.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"

#define FOUNDATION_EXTENSION___HEAP_DETAILS___GET_CHILDREN_OFFSET UNITYSDK_OFFSET(0x1F4745A0)
#define FOUNDATION_EXTENSION___HEAP_DETAILS___GET_PARENT_OFFSET UNITYSDK_OFFSET(0x1F474590)

namespace Foundation
{
	inline static constexpr unsigned int Extension___heap_details_TypeDefinitionIndex = 8906;

	class Extension___heap_details : public ::System::Object
	{
	public:
		static ::System::Int32 __get_parent(::System::Int32 index)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION___HEAP_DETAILS___GET_PARENT_OFFSET))(index);
		}

		static ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Int32> __get_children(::System::Int32 index, ::System::Int32 count, ::System::Span_1_9011FAD97750D224<::System::Int32> buffer)
		{
			return ((::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Int32>(*)(::System::Int32, ::System::Int32, ::System::Span_1_9011FAD97750D224<::System::Int32>))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION___HEAP_DETAILS___GET_CHILDREN_OFFSET))(index, count, buffer);
		}
	};
}
