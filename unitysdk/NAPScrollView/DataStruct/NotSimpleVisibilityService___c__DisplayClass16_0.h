#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace NAPScrollView::DataStruct { class NotSimpleVisibilityService; }
namespace UnityEngine { class RectTransform; }

#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEVISIBILITYSERVICE___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18F92860)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEVISIBILITYSERVICE___C__DISPLAYCLASS16_0__GETFULLVISIABLECHILDDATAINDEX_B__0_OFFSET UNITYSDK_OFFSET(0x18F92870)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEVISIBILITYSERVICE___C__DISPLAYCLASS16_0__GETFULLVISIABLECHILDDATAINDEX_B__1_OFFSET UNITYSDK_OFFSET(0x18F928A0)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int NotSimpleVisibilityService___c__DisplayClass16_0_TypeDefinitionIndex = 86504;

	class NotSimpleVisibilityService___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::NAPScrollView::DataStruct::NotSimpleVisibilityService* __4__this; // 0x10
		::UnityEngine::Vector2 customRange; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEVISIBILITYSERVICE___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetFullVisiableChildDataIndex_b__0(::UnityEngine::RectTransform* child)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEVISIBILITYSERVICE___C__DISPLAYCLASS16_0__GETFULLVISIABLECHILDDATAINDEX_B__0_OFFSET))(this, child);
		}

		::System::Boolean _GetFullVisiableChildDataIndex_b__1(::UnityEngine::RectTransform* child)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEVISIBILITYSERVICE___C__DISPLAYCLASS16_0__GETFULLVISIABLECHILDDATAINDEX_B__1_OFFSET))(this, child);
		}
	};
}
