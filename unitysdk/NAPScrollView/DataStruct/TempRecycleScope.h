#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class MonoUITableScrollV2;

#define NAPSCROLLVIEW_DATASTRUCT_TEMPRECYCLESCOPE_ALLOCATE_OFFSET UNITYSDK_OFFSET(0x113BB4C0)
#define NAPSCROLLVIEW_DATASTRUCT_TEMPRECYCLESCOPE_GET_HASPUSH_OFFSET UNITYSDK_OFFSET(0x3E3C90)
#define NAPSCROLLVIEW_DATASTRUCT_TEMPRECYCLESCOPE_SET_HASPUSH_OFFSET UNITYSDK_OFFSET(0x3E3C80)
#define NAPSCROLLVIEW_DATASTRUCT_TEMPRECYCLESCOPE_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x6781A0)
#define NAPSCROLLVIEW_DATASTRUCT_TEMPRECYCLESCOPE__CTOR_OFFSET UNITYSDK_OFFSET(0x678030)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int TempRecycleScope_TypeDefinitionIndex = 73814;

	struct alignas(8) TempRecycleScope
	{
		::MonoUITableScrollV2* _owner; // 0x10
		::System::Boolean _HasPush_k__BackingField; // 0x18

		::System::Void _ctor(::MonoUITableScrollV2* owner)
		{
			return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_TEMPRECYCLESCOPE__CTOR_OFFSET))(this, owner);
		}

		::System::Boolean get_HasPush()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_TEMPRECYCLESCOPE_GET_HASPUSH_OFFSET))(this);
		}

		::System::Void set_HasPush(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_TEMPRECYCLESCOPE_SET_HASPUSH_OFFSET))(this, value);
		}

		/*
		static ::NAPScrollView::DataStruct::TempRecycleScope Allocate(::MonoUITableScrollV2* owner)
		{
			return ((::NAPScrollView::DataStruct::TempRecycleScope(*)(::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_TEMPRECYCLESCOPE_ALLOCATE_OFFSET))(owner);
		}
		*/

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_TEMPRECYCLESCOPE_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}
	};
}
