#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NAPScrollView::DataStruct { class LegacyScrollViewAdapter; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERINPUTSERVICE_BEGINDRAGTHROUGHADAPTER_OFFSET UNITYSDK_OFFSET(0x120E89F0)
#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERINPUTSERVICE_ENDDRAGTHROUGHADAPTER_OFFSET UNITYSDK_OFFSET(0x120E8A40)
#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERINPUTSERVICE_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x120E88D0)
#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERINPUTSERVICE_ONDRAG_OFFSET UNITYSDK_OFFSET(0x120E8930)
#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERINPUTSERVICE_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x120E8990)
#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERINPUTSERVICE_ONINITIALIZEPOTENTIALDRAG_OFFSET UNITYSDK_OFFSET(0x120E8A90)
#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERINPUTSERVICE_ONSCROLLPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x120E8BF0)
#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERINPUTSERVICE_ONSCROLLPOINTERUP_OFFSET UNITYSDK_OFFSET(0x120E8B90)
#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERINPUTSERVICE_ONSCROLLVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x120E8C50)
#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERINPUTSERVICE_ONSCROLLVALUESIMPLECHANGED_OFFSET UNITYSDK_OFFSET(0x120E8CC0)
#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERINPUTSERVICE_ONSCROLL_OFFSET UNITYSDK_OFFSET(0x120E8B30)
#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERINPUTSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x120E88C0)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int LegacyScrollViewAdapterInputService_TypeDefinitionIndex = 54676;

	class LegacyScrollViewAdapterInputService : public ::System::Object
	{
	public:
		::NAPScrollView::DataStruct::LegacyScrollViewAdapter* _adapter; // 0x10

		::System::Void _ctor(::NAPScrollView::DataStruct::LegacyScrollViewAdapter* adapter)
		{
			return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::LegacyScrollViewAdapter*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERINPUTSERVICE__CTOR_OFFSET))(this, adapter);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERINPUTSERVICE_ONBEGINDRAG_OFFSET))(this, eventData);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERINPUTSERVICE_ONDRAG_OFFSET))(this, eventData);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERINPUTSERVICE_ONENDDRAG_OFFSET))(this, eventData);
		}

		::System::Void BeginDragThroughAdapter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERINPUTSERVICE_BEGINDRAGTHROUGHADAPTER_OFFSET))(this);
		}

		::System::Void EndDragThroughAdapter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERINPUTSERVICE_ENDDRAGTHROUGHADAPTER_OFFSET))(this);
		}

		::System::Void OnInitializePotentialDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERINPUTSERVICE_ONINITIALIZEPOTENTIALDRAG_OFFSET))(this, eventData);
		}

		::System::Void OnScroll(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERINPUTSERVICE_ONSCROLL_OFFSET))(this, eventData);
		}

		::System::Void OnScrollPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERINPUTSERVICE_ONSCROLLPOINTERUP_OFFSET))(this, eventData);
		}

		::System::Void OnScrollPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERINPUTSERVICE_ONSCROLLPOINTERDOWN_OFFSET))(this, eventData);
		}

		::System::Void OnScrollValueChanged(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERINPUTSERVICE_ONSCROLLVALUECHANGED_OFFSET))(this, value);
		}

		::System::Void OnScrollValueSimpleChanged(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERINPUTSERVICE_ONSCROLLVALUESIMPLECHANGED_OFFSET))(this, value);
		}
	};
}
