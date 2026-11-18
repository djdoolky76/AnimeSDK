#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEDYNAMICALLOCATESERVICE_REMOVEDBOUNDARY_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0x113AD880)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int NotSimpleDynamicAllocateService_RemovedBoundary_TypeDefinitionIndex = 68185;

	struct alignas(4) NotSimpleDynamicAllocateService_RemovedBoundary
	{
		::System::Int32 StartIndex; // 0x10
		::System::Int32 EndIndex; // 0x14

		/*
		static ::NAPScrollView::DataStruct::NotSimpleDynamicAllocateService_RemovedBoundary get_Empty()
		{
			return ((::NAPScrollView::DataStruct::NotSimpleDynamicAllocateService_RemovedBoundary(*)())((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEDYNAMICALLOCATESERVICE_REMOVEDBOUNDARY_GET_EMPTY_OFFSET))();
		}
		*/
	};
}
