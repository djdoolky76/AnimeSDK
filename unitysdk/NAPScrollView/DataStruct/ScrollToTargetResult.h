#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NAPScrollView/DataStruct/ScrollToTargetResult_ResultState.h"
#include "unitysdk/NAPScrollView/DataStruct/ScrollToTargetResult_TargetRectTransformState.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define NAPSCROLLVIEW_DATASTRUCT_SCROLLTOTARGETRESULT_CREATE_OFFSET UNITYSDK_OFFSET(0x12C417F0)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLTOTARGETRESULT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x6EF110)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLTOTARGETRESULT___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x6EF120)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int ScrollToTargetResult_TypeDefinitionIndex = 64070;

	struct alignas(4) ScrollToTargetResult
	{
		::NAPScrollView::DataStruct::ScrollToTargetResult_ResultState result; // 0x10
		::System::Byte _padding0[0x4];
		::NAPScrollView::DataStruct::ScrollToTargetResult_TargetRectTransformState targetRectTransformState; // 0x18
		::System::Single targetSize; // 0x1C
		::System::Single scrollDistance; // 0x20

		/*
		static ::NAPScrollView::DataStruct::ScrollToTargetResult Create()
		{
			return ((::NAPScrollView::DataStruct::ScrollToTargetResult(*)())((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLTOTARGETRESULT_CREATE_OFFSET))();
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLTOTARGETRESULT_TOSTRING_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLTOTARGETRESULT___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
