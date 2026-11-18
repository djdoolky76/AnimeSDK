#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/NAPScrollView/DataStruct/ScrollBounds.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector2.h"

class MonoUITableScrollV2_BaseScrollLogic;
namespace NAPScrollView::DataStruct { class IScrollViewItemHierarchyService; }
namespace NAPScrollView::DataStruct { class NotSimpleScrollViewAdapterServices; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class RectTransform; }

#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEVISIBILITYSERVICE_GETCENTERCHILDDATAINDEXBYFLOAT_OFFSET UNITYSDK_OFFSET(0x113B1B40)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEVISIBILITYSERVICE_GETCENTERCHILDDATAINDEX_OFFSET UNITYSDK_OFFSET(0x113B1870)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEVISIBILITYSERVICE_GETCHILDBOUNDS_OFFSET UNITYSDK_OFFSET(0x113AE290)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEVISIBILITYSERVICE_GETCHILDDATAINDEXRANGEWITHFALLBACK_OFFSET UNITYSDK_OFFSET(0x113B0D70)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEVISIBILITYSERVICE_GETCHILDDATAINDEXRANGE_OFFSET UNITYSDK_OFFSET(0x113B1420)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEVISIBILITYSERVICE_GETDISTANCEBETWEEN_OFFSET UNITYSDK_OFFSET(0x113B1EF0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEVISIBILITYSERVICE_GETFULLVISIABLECHILDDATAINDEX_1_OFFSET UNITYSDK_OFFSET(0x113B1240)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEVISIBILITYSERVICE_GETFULLVISIABLECHILDDATAINDEX_OFFSET UNITYSDK_OFFSET(0x113B0C10)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEVISIBILITYSERVICE_GETSCROLLCHILDBOUNDS_OFFSET UNITYSDK_OFFSET(0x113AE3C0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEVISIBILITYSERVICE_GETVISIABLECHILDDATAINDEXINEFFECTIVEVIEWRECT_OFFSET UNITYSDK_OFFSET(0x113B2060)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEVISIBILITYSERVICE_GETVISIABLECHILDDATAINDEX_OFFSET UNITYSDK_OFFSET(0x113B1330)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEVISIBILITYSERVICE_GET_DATACONTENT_OFFSET UNITYSDK_OFFSET(0x113AE180)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEVISIBILITYSERVICE_GET_HIERARCHY_OFFSET UNITYSDK_OFFSET(0x113AE270)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEVISIBILITYSERVICE_GET_LOGIC_OFFSET UNITYSDK_OFFSET(0x113AE160)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEVISIBILITYSERVICE_ISENDTHAN_OFFSET UNITYSDK_OFFSET(0x113AFF80)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEVISIBILITYSERVICE_ISFULLVISIABLEINCUSTOMRANGE_OFFSET UNITYSDK_OFFSET(0x113B0260)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEVISIBILITYSERVICE_ISFULLVISIABLEINVIEWRECT_OFFSET UNITYSDK_OFFSET(0x113AF460)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEVISIBILITYSERVICE_ISSTARTTHAN_OFFSET UNITYSDK_OFFSET(0x113AFCA0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEVISIBILITYSERVICE_ISVISIABLEINCUSTOMRANGE_OFFSET UNITYSDK_OFFSET(0x113B0730)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEVISIBILITYSERVICE_ISVISIABLEINVIEWRECT_OFFSET UNITYSDK_OFFSET(0x113AF880)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEVISIBILITYSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x113AE150)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEVISIBILITYSERVICE__GETVISIABLECHILDDATAINDEXINEFFECTIVEVIEWRECT_B__22_0_OFFSET UNITYSDK_OFFSET(0x113B2220)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int NotSimpleVisibilityService_TypeDefinitionIndex = 86503;

	class NotSimpleVisibilityService : public ::System::Object
	{
	public:
		::NAPScrollView::DataStruct::NotSimpleScrollViewAdapterServices* _services; // 0x10

		::System::Void _ctor(::NAPScrollView::DataStruct::NotSimpleScrollViewAdapterServices* services)
		{
			return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::NotSimpleScrollViewAdapterServices*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEVISIBILITYSERVICE__CTOR_OFFSET))(this, services);
		}

		::MonoUITableScrollV2_BaseScrollLogic* get_Logic()
		{
			return ((::MonoUITableScrollV2_BaseScrollLogic*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEVISIBILITYSERVICE_GET_LOGIC_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_DataContent()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEVISIBILITYSERVICE_GET_DATACONTENT_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewItemHierarchyService* get_Hierarchy()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewItemHierarchyService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEVISIBILITYSERVICE_GET_HIERARCHY_OFFSET))(this);
		}

		::System::ValueTuple_2<::UnityEngine::Bounds, ::System::Boolean> GetChildBounds(::System::Int32 dataIndex)
		{
			return ((::System::ValueTuple_2<::UnityEngine::Bounds, ::System::Boolean>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEVISIBILITYSERVICE_GETCHILDBOUNDS_OFFSET))(this, dataIndex);
		}

		::System::Boolean IsFullVisiableInViewRect(::UnityEngine::RectTransform* rectTransform)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEVISIBILITYSERVICE_ISFULLVISIABLEINVIEWRECT_OFFSET))(this, rectTransform);
		}

		::System::Boolean IsVisiableInViewRect(::UnityEngine::RectTransform* rectTransform)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEVISIBILITYSERVICE_ISVISIABLEINVIEWRECT_OFFSET))(this, rectTransform);
		}

		::System::Boolean IsStartThan(::UnityEngine::RectTransform* rectTransform)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEVISIBILITYSERVICE_ISSTARTTHAN_OFFSET))(this, rectTransform);
		}

		::System::Boolean IsEndThan(::UnityEngine::RectTransform* rectTransform)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEVISIBILITYSERVICE_ISENDTHAN_OFFSET))(this, rectTransform);
		}

		::System::Boolean IsFullVisiableInCustomRange(::UnityEngine::RectTransform* rectTransform, ::UnityEngine::Vector2 customRange)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEVISIBILITYSERVICE_ISFULLVISIABLEINCUSTOMRANGE_OFFSET))(this, rectTransform, customRange);
		}

		::System::Boolean IsVisiableInCustomRange(::UnityEngine::RectTransform* rectTransform, ::UnityEngine::Vector2 customRange)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEVISIBILITYSERVICE_ISVISIABLEINCUSTOMRANGE_OFFSET))(this, rectTransform, customRange);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Int32> GetFullVisiableChildDataIndex()
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEVISIBILITYSERVICE_GETFULLVISIABLECHILDDATAINDEX_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Int32> GetFullVisiableChildDataIndex_1(::UnityEngine::Vector2 customRange)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEVISIBILITYSERVICE_GETFULLVISIABLECHILDDATAINDEX_1_OFFSET))(this, customRange);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Int32> GetVisiableChildDataIndex()
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEVISIBILITYSERVICE_GETVISIABLECHILDDATAINDEX_OFFSET))(this);
		}

		::System::Nullable_1<::System::Int32> GetCenterChildDataIndex()
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEVISIBILITYSERVICE_GETCENTERCHILDDATAINDEX_OFFSET))(this);
		}

		::System::Nullable_1<::System::ValueTuple_2<::System::Single, ::System::Int32>> GetCenterChildDataIndexByFloat()
		{
			return ((::System::Nullable_1<::System::ValueTuple_2<::System::Single, ::System::Int32>>(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEVISIBILITYSERVICE_GETCENTERCHILDDATAINDEXBYFLOAT_OFFSET))(this);
		}

		::System::ValueTuple_2<::NAPScrollView::DataStruct::ScrollBounds, ::System::Boolean> GetScrollChildBounds(::System::Int32 dataIndex)
		{
			return ((::System::ValueTuple_2<::NAPScrollView::DataStruct::ScrollBounds, ::System::Boolean>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEVISIBILITYSERVICE_GETSCROLLCHILDBOUNDS_OFFSET))(this, dataIndex);
		}

		::System::ValueTuple_2<::System::Single, ::System::Single> GetDistanceBetween(::System::Int32 index1, ::System::Int32 index2)
		{
			return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEVISIBILITYSERVICE_GETDISTANCEBETWEEN_OFFSET))(this, index1, index2);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Int32> GetVisiableChildDataIndexInEffectiveViewRect()
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEVISIBILITYSERVICE_GETVISIABLECHILDDATAINDEXINEFFECTIVEVIEWRECT_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Int32> GetChildDataIndexRange(::System::Func_2<::UnityEngine::RectTransform*, ::System::Boolean>* predicate)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID, ::System::Func_2<::UnityEngine::RectTransform*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEVISIBILITYSERVICE_GETCHILDDATAINDEXRANGE_OFFSET))(this, predicate);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Int32> GetChildDataIndexRangeWithFallback(::System::Func_2<::UnityEngine::RectTransform*, ::System::Boolean>* fullPredicate, ::System::Func_2<::UnityEngine::RectTransform*, ::System::Boolean>* partialPredicate)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID, ::System::Func_2<::UnityEngine::RectTransform*, ::System::Boolean>*, ::System::Func_2<::UnityEngine::RectTransform*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEVISIBILITYSERVICE_GETCHILDDATAINDEXRANGEWITHFALLBACK_OFFSET))(this, fullPredicate, partialPredicate);
		}

		::System::Boolean _GetVisiableChildDataIndexInEffectiveViewRect_b__22_0(::UnityEngine::RectTransform* child)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEVISIBILITYSERVICE__GETVISIABLECHILDDATAINDEXINEFFECTIVEVIEWRECT_B__22_0_OFFSET))(this, child);
		}
	};
}
