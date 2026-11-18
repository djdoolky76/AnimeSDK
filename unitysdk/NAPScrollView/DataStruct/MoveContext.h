#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NAPScrollView/DataStruct/MoveReason.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define NAPSCROLLVIEW_DATASTRUCT_MOVECONTEXT_GETCOPYWITHMODIFIEDDELTA_OFFSET UNITYSDK_OFFSET(0x71A8B0)
#define NAPSCROLLVIEW_DATASTRUCT_MOVECONTEXT_GET_NEEDUPDATESCROLL_OFFSET UNITYSDK_OFFSET(0x71A840)
#define NAPSCROLLVIEW_DATASTRUCT_MOVECONTEXT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x71A940)
#define NAPSCROLLVIEW_DATASTRUCT_MOVECONTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x71A8A0)
#define NAPSCROLLVIEW_DATASTRUCT_MOVECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x71A890)
#define NAPSCROLLVIEW_DATASTRUCT_MOVECONTEXT___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x71A950)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int MoveContext_TypeDefinitionIndex = 70246;

	struct alignas(4) MoveContext
	{
		::NAPScrollView::DataStruct::MoveReason moveReason; // 0x10
		::System::Single delta; // 0x14
		::System::Boolean forLoop; // 0x18

		::System::Void _ctor(::System::Single delta, ::NAPScrollView::DataStruct::MoveReason moveReason)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::NAPScrollView::DataStruct::MoveReason))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_MOVECONTEXT__CTOR_OFFSET))(this, delta, moveReason);
		}

		::System::Void _ctor_1(::System::Single delta, ::NAPScrollView::DataStruct::MoveReason moveReason, ::System::Boolean forLoop)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::NAPScrollView::DataStruct::MoveReason, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_MOVECONTEXT__CTOR_1_OFFSET))(this, delta, moveReason, forLoop);
		}

		::System::Boolean get_needUpdateScroll()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_MOVECONTEXT_GET_NEEDUPDATESCROLL_OFFSET))(this);
		}

		/*
		::NAPScrollView::DataStruct::MoveContext GetCopyWithModifiedDelta(::System::Single delta)
		{
			return ((::NAPScrollView::DataStruct::MoveContext(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_MOVECONTEXT_GETCOPYWITHMODIFIEDDELTA_OFFSET))(this, delta);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_MOVECONTEXT_TOSTRING_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_MOVECONTEXT___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
