#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class MonoUITableScrollV2;
namespace NAPScrollView::DataStruct { class IScrollViewEdgeObject; }
namespace NAPScrollView::DataStruct { class NotSimpleScrollViewAdapterServices; }
namespace NAPScrollView::DataStruct { class ScrollViewEdgeObject; }
namespace System { class Action; }
namespace UnityEngine { class GameObject; }

#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEEDGEAREASERVICE_CLEAR_OFFSET UNITYSDK_OFFSET(0x12C3BEE0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEEDGEAREASERVICE_GETSIZEATAXIS_OFFSET UNITYSDK_OFFSET(0x12C3BA50)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEEDGEAREASERVICE_GET_ENDEDGE_OFFSET UNITYSDK_OFFSET(0x12C3B930)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEEDGEAREASERVICE_GET_ENDSIZEATAXIS_OFFSET UNITYSDK_OFFSET(0x12C3BCD0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEEDGEAREASERVICE_GET_HASEDGEOBJECT_OFFSET UNITYSDK_OFFSET(0x12C3B980)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEEDGEAREASERVICE_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x12C3B120)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEEDGEAREASERVICE_GET_STARTEDGE_OFFSET UNITYSDK_OFFSET(0x12C3B140)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEEDGEAREASERVICE_GET_STARTSIZEATAXIS_OFFSET UNITYSDK_OFFSET(0x12C3B9F0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEEDGEAREASERVICE_ISEDGEVISIBLE_OFFSET UNITYSDK_OFFSET(0x12C3C210)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEEDGEAREASERVICE_RECYCLEEDGE_OFFSET UNITYSDK_OFFSET(0x12C3BD30)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEEDGEAREASERVICE_REFRESHEDGECACHE_OFFSET UNITYSDK_OFFSET(0x12C3B190)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEEDGEAREASERVICE_SETENDCALLBACKS_OFFSET UNITYSDK_OFFSET(0x12C3BE30)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEEDGEAREASERVICE_SETSTARTCALLBACKS_OFFSET UNITYSDK_OFFSET(0x12C3BD80)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEEDGEAREASERVICE_TICKEDGE_OFFSET UNITYSDK_OFFSET(0x12C3C090)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEEDGEAREASERVICE_TICKVISIBILITY_OFFSET UNITYSDK_OFFSET(0x12C3C000)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEEDGEAREASERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x12C3B110)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int NotSimpleEdgeAreaService_TypeDefinitionIndex = 88966;

	class NotSimpleEdgeAreaService : public ::System::Object
	{
	public:
		::System::Action* _endOnAppear; // 0x10
		::NAPScrollView::DataStruct::ScrollViewEdgeObject* _endEdge; // 0x18
		::System::Action* _startOnDisappear; // 0x20
		::System::Action* _endOnDisappear; // 0x28
		::UnityEngine::GameObject* _endGoCache; // 0x30
		::NAPScrollView::DataStruct::ScrollViewEdgeObject* _startEdge; // 0x38
		::System::Action* _startOnAppear; // 0x40
		::NAPScrollView::DataStruct::NotSimpleScrollViewAdapterServices* _services; // 0x48
		::UnityEngine::GameObject* _startGoCache; // 0x50
		::System::Nullable_1<::System::Boolean> _startVisibleLastFrame; // 0x58
		::System::Boolean _edgeCacheInitialized; // 0x5A
		::System::Nullable_1<::System::Boolean> _endVisibleLastFrame; // 0x5B

		::System::Void _ctor(::NAPScrollView::DataStruct::NotSimpleScrollViewAdapterServices* services)
		{
			return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::NotSimpleScrollViewAdapterServices*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEEDGEAREASERVICE__CTOR_OFFSET))(this, services);
		}

		::MonoUITableScrollV2* get_Owner()
		{
			return ((::MonoUITableScrollV2*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEEDGEAREASERVICE_GET_OWNER_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewEdgeObject* get_StartEdge()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewEdgeObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEEDGEAREASERVICE_GET_STARTEDGE_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewEdgeObject* get_EndEdge()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewEdgeObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEEDGEAREASERVICE_GET_ENDEDGE_OFFSET))(this);
		}

		::System::Boolean get_HasEdgeObject()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEEDGEAREASERVICE_GET_HASEDGEOBJECT_OFFSET))(this);
		}

		::System::Single get_StartSizeAtAxis()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEEDGEAREASERVICE_GET_STARTSIZEATAXIS_OFFSET))(this);
		}

		::System::Single get_EndSizeAtAxis()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEEDGEAREASERVICE_GET_ENDSIZEATAXIS_OFFSET))(this);
		}

		::System::Void RefreshEdgeCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEEDGEAREASERVICE_REFRESHEDGECACHE_OFFSET))(this);
		}

		static ::System::Void RecycleEdge(::NAPScrollView::DataStruct::ScrollViewEdgeObject*& edge)
		{
			return ((::System::Void(*)(::NAPScrollView::DataStruct::ScrollViewEdgeObject*&))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEEDGEAREASERVICE_RECYCLEEDGE_OFFSET))(edge);
		}

		::System::Void SetStartCallbacks(::System::Action* onAppear, ::System::Action* onDisappear)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEEDGEAREASERVICE_SETSTARTCALLBACKS_OFFSET))(this, onAppear, onDisappear);
		}

		::System::Void SetEndCallbacks(::System::Action* onAppear, ::System::Action* onDisappear)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEEDGEAREASERVICE_SETENDCALLBACKS_OFFSET))(this, onAppear, onDisappear);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEEDGEAREASERVICE_CLEAR_OFFSET))(this);
		}

		::System::Single GetSizeAtAxis(::NAPScrollView::DataStruct::IScrollViewEdgeObject* edge)
		{
			return ((::System::Single(*)(::PVOID, ::NAPScrollView::DataStruct::IScrollViewEdgeObject*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEEDGEAREASERVICE_GETSIZEATAXIS_OFFSET))(this, edge);
		}

		::System::Void TickVisibility()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEEDGEAREASERVICE_TICKVISIBILITY_OFFSET))(this);
		}

		::System::Void TickEdge(::NAPScrollView::DataStruct::ScrollViewEdgeObject* edge, ::System::Nullable_1<::System::Boolean>& visibleLastFrame, ::System::Boolean isStart)
		{
			return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollViewEdgeObject*, ::System::Nullable_1<::System::Boolean>&, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEEDGEAREASERVICE_TICKEDGE_OFFSET))(this, edge, visibleLastFrame, isStart);
		}

		::System::Boolean IsEdgeVisible(::NAPScrollView::DataStruct::ScrollViewEdgeObject* edge)
		{
			return ((::System::Boolean(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollViewEdgeObject*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEEDGEAREASERVICE_ISEDGEVISIBLE_OFFSET))(this, edge);
		}
	};
}
