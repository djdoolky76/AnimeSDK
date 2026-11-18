#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NAPScrollView/DataStruct/MoveReason.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace NAPScrollView::DataStruct { class IScrollViewAdapterServices; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWINPUTSERVICEBASE_APPLYOVERSCROLLDAMPING_OFFSET UNITYSDK_OFFSET(0x16B493C0)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWINPUTSERVICEBASE_BEGINDRAGIFNEEDED_OFFSET UNITYSDK_OFFSET(0x16B476C0)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWINPUTSERVICEBASE_BEGINSYNTHETICDRAG_OFFSET UNITYSDK_OFFSET(0x16B48620)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWINPUTSERVICEBASE_CANCELDRAGIFNEEDED_OFFSET UNITYSDK_OFFSET(0x16B475E0)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWINPUTSERVICEBASE_CLAMPSPEED_OFFSET UNITYSDK_OFFSET(0x16B48970)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWINPUTSERVICEBASE_COMPLETESYNTHETICDRAGFRAME_OFFSET UNITYSDK_OFFSET(0x16B48690)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWINPUTSERVICEBASE_DRAGBYUGUIDELTA_OFFSET UNITYSDK_OFFSET(0x16B47FA0)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWINPUTSERVICEBASE_ENDDRAGIFIDLE_OFFSET UNITYSDK_OFFSET(0x16B48530)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWINPUTSERVICEBASE_ENDDRAGIFNEEDED_OFFSET UNITYSDK_OFFSET(0x16B486F0)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWINPUTSERVICEBASE_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x16B47010)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWINPUTSERVICEBASE_ONDRAGINNER_OFFSET UNITYSDK_OFFSET(0x16B490F0)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWINPUTSERVICEBASE_ONDRAG_OFFSET UNITYSDK_OFFSET(0x16B47880)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWINPUTSERVICEBASE_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x16B483F0)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWINPUTSERVICEBASE_ONINITIALIZEPOTENTIALDRAG_OFFSET UNITYSDK_OFFSET(0x16B487B0)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWINPUTSERVICEBASE_SCREENPOINTEVENTDATATODELTA_OFFSET UNITYSDK_OFFSET(0x16B47B10)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWINPUTSERVICEBASE_SHOULDIGNOREDRAGINPUT_OFFSET UNITYSDK_OFFSET(0x16B47290)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWINPUTSERVICEBASE_SHOULDPASSTHROUGHTOPARENT_OFFSET UNITYSDK_OFFSET(0x16B47440)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWINPUTSERVICEBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x16B47000)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int ScrollViewInputServiceBase_TypeDefinitionIndex = 67954;

	class ScrollViewInputServiceBase : public ::System::Object
	{
	public:
		::NAPScrollView::DataStruct::IScrollViewAdapterServices* Services; // 0x10
		::System::Boolean _syntheticDragThisFrame; // 0x18
		::System::Boolean _dragStartedThroughAdapter; // 0x19
		::System::Boolean _physicalDragActive; // 0x1A
		::System::Boolean _syntheticDragActive; // 0x1B

		::System::Void _ctor(::NAPScrollView::DataStruct::IScrollViewAdapterServices* services)
		{
			return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::IScrollViewAdapterServices*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWINPUTSERVICEBASE__CTOR_OFFSET))(this, services);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWINPUTSERVICEBASE_ONBEGINDRAG_OFFSET))(this, eventData);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWINPUTSERVICEBASE_ONDRAG_OFFSET))(this, eventData);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWINPUTSERVICEBASE_ONENDDRAG_OFFSET))(this, eventData);
		}

		::System::Boolean BeginSyntheticDrag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWINPUTSERVICEBASE_BEGINSYNTHETICDRAG_OFFSET))(this);
		}

		::System::Void CompleteSyntheticDragFrame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWINPUTSERVICEBASE_COMPLETESYNTHETICDRAGFRAME_OFFSET))(this);
		}

		::System::Void CancelDragIfNeeded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWINPUTSERVICEBASE_CANCELDRAGIFNEEDED_OFFSET))(this);
		}

		::System::Void OnInitializePotentialDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWINPUTSERVICEBASE_ONINITIALIZEPOTENTIALDRAG_OFFSET))(this, eventData);
		}

		::System::Void BeginDragIfNeeded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWINPUTSERVICEBASE_BEGINDRAGIFNEEDED_OFFSET))(this);
		}

		::System::Void EndDragIfIdle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWINPUTSERVICEBASE_ENDDRAGIFIDLE_OFFSET))(this);
		}

		::System::Void EndDragIfNeeded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWINPUTSERVICEBASE_ENDDRAGIFNEEDED_OFFSET))(this);
		}

		::System::Boolean ShouldPassThroughToParent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWINPUTSERVICEBASE_SHOULDPASSTHROUGHTOPARENT_OFFSET))(this);
		}

		::System::Void DragByUguiDelta(::UnityEngine::Vector2 delta)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWINPUTSERVICEBASE_DRAGBYUGUIDELTA_OFFSET))(this, delta);
		}

		::System::Void OnDragInner(::System::Single realDelta)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWINPUTSERVICEBASE_ONDRAGINNER_OFFSET))(this, realDelta);
		}

		::UnityEngine::Vector2 ClampSpeed(::UnityEngine::Vector2 delta, ::NAPScrollView::DataStruct::MoveReason moveReason)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::NAPScrollView::DataStruct::MoveReason))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWINPUTSERVICEBASE_CLAMPSPEED_OFFSET))(this, delta, moveReason);
		}

		::UnityEngine::Vector2 ScreenPointEventDataToDelta(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWINPUTSERVICEBASE_SCREENPOINTEVENTDATATODELTA_OFFSET))(this, eventData);
		}

		::System::Boolean ShouldIgnoreDragInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWINPUTSERVICEBASE_SHOULDIGNOREDRAGINPUT_OFFSET))(this);
		}

		::System::Single ApplyOverscrollDamping(::System::Single realDelta)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWINPUTSERVICEBASE_APPLYOVERSCROLLDAMPING_OFFSET))(this, realDelta);
		}
	};
}
