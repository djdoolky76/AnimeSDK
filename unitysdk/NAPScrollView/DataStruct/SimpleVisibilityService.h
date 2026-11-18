#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/NAPScrollView/DataStruct/ScrollBounds.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector2.h"

class MonoUITableScrollV2;
class MonoUITableScrollV2_BaseScrollLogic;
namespace NAPScrollView::DataStruct { class SimpleScrollViewAdapterServices; }
namespace UnityEngine { class RectTransform; }

#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEVISIBILITYSERVICE_GETCENTERCHILDDATAINDEXBYFLOAT_OFFSET UNITYSDK_OFFSET(0x12C510C0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEVISIBILITYSERVICE_GETCENTERCHILDDATAINDEX_OFFSET UNITYSDK_OFFSET(0x12C50BF0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEVISIBILITYSERVICE_GETCHILDBOUNDS_OFFSET UNITYSDK_OFFSET(0x12C4EBB0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEVISIBILITYSERVICE_GETFULLVISIABLECHILDDATAINDEX_1_OFFSET UNITYSDK_OFFSET(0x12C50850)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEVISIBILITYSERVICE_GETFULLVISIABLECHILDDATAINDEX_OFFSET UNITYSDK_OFFSET(0x12C50590)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEVISIBILITYSERVICE_GETSCROLLCHILDBOUNDS_OFFSET UNITYSDK_OFFSET(0x12C4ED90)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEVISIBILITYSERVICE_GETVISIABLECHILDDATAINDEXINEFFECTIVEVIEWRECT_OFFSET UNITYSDK_OFFSET(0x12C50BA0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEVISIBILITYSERVICE_GETVISIABLECHILDDATAINDEX_OFFSET UNITYSDK_OFFSET(0x12C50B50)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEVISIBILITYSERVICE_GET_DATACONTENT_OFFSET UNITYSDK_OFFSET(0x12C4E9F0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEVISIBILITYSERVICE_GET_LOGIC_OFFSET UNITYSDK_OFFSET(0x12C4EB90)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEVISIBILITYSERVICE_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x12C4E9D0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEVISIBILITYSERVICE_ISENDTHAN_OFFSET UNITYSDK_OFFSET(0x12C4F9D0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEVISIBILITYSERVICE_ISFULLVISIABLEINCUSTOMRANGE_OFFSET UNITYSDK_OFFSET(0x12C4FC70)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEVISIBILITYSERVICE_ISFULLVISIABLEINVIEWRECT_OFFSET UNITYSDK_OFFSET(0x12C4EFD0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEVISIBILITYSERVICE_ISSTARTTHAN_OFFSET UNITYSDK_OFFSET(0x12C4F730)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEVISIBILITYSERVICE_ISVISIABLEINCUSTOMRANGE_OFFSET UNITYSDK_OFFSET(0x12C50100)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEVISIBILITYSERVICE_ISVISIABLEINVIEWRECT_OFFSET UNITYSDK_OFFSET(0x12C4F380)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEVISIBILITYSERVICE_SCANVISIBLECUSTOM_OFFSET UNITYSDK_OFFSET(0x12C508B0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEVISIBILITYSERVICE_SCANVISIBLE_OFFSET UNITYSDK_OFFSET(0x12C505E0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEVISIBILITYSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x12C4E9C0)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int SimpleVisibilityService_TypeDefinitionIndex = 76135;

	class SimpleVisibilityService : public ::System::Object
	{
	public:
		::NAPScrollView::DataStruct::SimpleScrollViewAdapterServices* _services; // 0x10

		::System::Void _ctor(::NAPScrollView::DataStruct::SimpleScrollViewAdapterServices* services)
		{
			return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::SimpleScrollViewAdapterServices*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEVISIBILITYSERVICE__CTOR_OFFSET))(this, services);
		}

		::MonoUITableScrollV2* get_Owner()
		{
			return ((::MonoUITableScrollV2*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEVISIBILITYSERVICE_GET_OWNER_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_DataContent()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEVISIBILITYSERVICE_GET_DATACONTENT_OFFSET))(this);
		}

		::MonoUITableScrollV2_BaseScrollLogic* get_Logic()
		{
			return ((::MonoUITableScrollV2_BaseScrollLogic*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEVISIBILITYSERVICE_GET_LOGIC_OFFSET))(this);
		}

		::System::ValueTuple_2<::UnityEngine::Bounds, ::System::Boolean> GetChildBounds(::System::Int32 dataIndex)
		{
			return ((::System::ValueTuple_2<::UnityEngine::Bounds, ::System::Boolean>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEVISIBILITYSERVICE_GETCHILDBOUNDS_OFFSET))(this, dataIndex);
		}

		::System::ValueTuple_2<::NAPScrollView::DataStruct::ScrollBounds, ::System::Boolean> GetScrollChildBounds(::System::Int32 dataIndex)
		{
			return ((::System::ValueTuple_2<::NAPScrollView::DataStruct::ScrollBounds, ::System::Boolean>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEVISIBILITYSERVICE_GETSCROLLCHILDBOUNDS_OFFSET))(this, dataIndex);
		}

		::System::Boolean IsFullVisiableInViewRect(::UnityEngine::RectTransform* rectTransform)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEVISIBILITYSERVICE_ISFULLVISIABLEINVIEWRECT_OFFSET))(this, rectTransform);
		}

		::System::Boolean IsVisiableInViewRect(::UnityEngine::RectTransform* rectTransform)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEVISIBILITYSERVICE_ISVISIABLEINVIEWRECT_OFFSET))(this, rectTransform);
		}

		::System::Boolean IsStartThan(::UnityEngine::RectTransform* rectTransform)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEVISIBILITYSERVICE_ISSTARTTHAN_OFFSET))(this, rectTransform);
		}

		::System::Boolean IsEndThan(::UnityEngine::RectTransform* rectTransform)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEVISIBILITYSERVICE_ISENDTHAN_OFFSET))(this, rectTransform);
		}

		::System::Boolean IsFullVisiableInCustomRange(::UnityEngine::RectTransform* rectTransform, ::UnityEngine::Vector2 customRange)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEVISIBILITYSERVICE_ISFULLVISIABLEINCUSTOMRANGE_OFFSET))(this, rectTransform, customRange);
		}

		::System::Boolean IsVisiableInCustomRange(::UnityEngine::RectTransform* rectTransform, ::UnityEngine::Vector2 customRange)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEVISIBILITYSERVICE_ISVISIABLEINCUSTOMRANGE_OFFSET))(this, rectTransform, customRange);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Int32> GetFullVisiableChildDataIndex()
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEVISIBILITYSERVICE_GETFULLVISIABLECHILDDATAINDEX_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Int32> GetFullVisiableChildDataIndex_1(::UnityEngine::Vector2 customRange)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEVISIBILITYSERVICE_GETFULLVISIABLECHILDDATAINDEX_1_OFFSET))(this, customRange);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Int32> GetVisiableChildDataIndex()
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEVISIBILITYSERVICE_GETVISIABLECHILDDATAINDEX_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Int32> GetVisiableChildDataIndexInEffectiveViewRect()
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEVISIBILITYSERVICE_GETVISIABLECHILDDATAINDEXINEFFECTIVEVIEWRECT_OFFSET))(this);
		}

		::System::Nullable_1<::System::Int32> GetCenterChildDataIndex()
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEVISIBILITYSERVICE_GETCENTERCHILDDATAINDEX_OFFSET))(this);
		}

		::System::Nullable_1<::System::ValueTuple_2<::System::Single, ::System::Int32>> GetCenterChildDataIndexByFloat()
		{
			return ((::System::Nullable_1<::System::ValueTuple_2<::System::Single, ::System::Int32>>(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEVISIBILITYSERVICE_GETCENTERCHILDDATAINDEXBYFLOAT_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Int32> ScanVisible(::System::Boolean full)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEVISIBILITYSERVICE_SCANVISIBLE_OFFSET))(this, full);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Int32> ScanVisibleCustom(::UnityEngine::Vector2 customRange, ::System::Boolean full)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEVISIBILITYSERVICE_SCANVISIBLECUSTOM_OFFSET))(this, customRange, full);
		}
	};
}
