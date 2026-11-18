#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NAPScrollView/DataStruct/ScrollViewInputServiceBase.h"
#include "unitysdk/UnityEngine/Vector2.h"

class MonoUITableScrollV2_BaseScrollLogic;
namespace NAPScrollView::DataStruct { class SimpleScrollService; }
namespace NAPScrollView::DataStruct { class SimpleScrollViewAdapterServices; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEINPUTSERVICE_APPLYOVERSCROLLDAMPING_OFFSET UNITYSDK_OFFSET(0x12C4E580)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEINPUTSERVICE_BEGINDRAGTHROUGHADAPTER_OFFSET UNITYSDK_OFFSET(0x12C4DC60)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEINPUTSERVICE_ENDDRAGTHROUGHADAPTER_OFFSET UNITYSDK_OFFSET(0x12C4DF60)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEINPUTSERVICE_GET_LOGIC_OFFSET UNITYSDK_OFFSET(0x12C4DB40)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEINPUTSERVICE_GET_SCROLL_OFFSET UNITYSDK_OFFSET(0x12C4DAD0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEINPUTSERVICE_ONSCROLLPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x12C4E6F0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEINPUTSERVICE_ONSCROLLPOINTERUP_OFFSET UNITYSDK_OFFSET(0x12C4E620)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEINPUTSERVICE_ONSCROLLVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x12C4E7C0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEINPUTSERVICE_ONSCROLLVALUESIMPLECHANGED_OFFSET UNITYSDK_OFFSET(0x12C4E870)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEINPUTSERVICE_ONSCROLL_OFFSET UNITYSDK_OFFSET(0x12C4E370)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEINPUTSERVICE_SETLASTDELTA_OFFSET UNITYSDK_OFFSET(0x12C4DBF0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEINPUTSERVICE_TRYCONVERTTOREALDELTA_OFFSET UNITYSDK_OFFSET(0x12C4DB60)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEINPUTSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x12C4DAC0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLEINPUTSERVICE___BASE_APPLYOVERSCROLLDAMPING_OFFSET UNITYSDK_OFFSET(0x12C4E920)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int SimpleInputService_TypeDefinitionIndex = 57571;

	class SimpleInputService : public ::NAPScrollView::DataStruct::ScrollViewInputServiceBase
	{
	public:
		::NAPScrollView::DataStruct::SimpleScrollViewAdapterServices* _services; // 0x20

		::System::Void _ctor(::NAPScrollView::DataStruct::SimpleScrollViewAdapterServices* services)
		{
			return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::SimpleScrollViewAdapterServices*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEINPUTSERVICE__CTOR_OFFSET))(this, services);
		}

		::NAPScrollView::DataStruct::SimpleScrollService* get_Scroll()
		{
			return ((::NAPScrollView::DataStruct::SimpleScrollService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEINPUTSERVICE_GET_SCROLL_OFFSET))(this);
		}

		::MonoUITableScrollV2_BaseScrollLogic* get_Logic()
		{
			return ((::MonoUITableScrollV2_BaseScrollLogic*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEINPUTSERVICE_GET_LOGIC_OFFSET))(this);
		}

		::System::Boolean TryConvertToRealDelta(::UnityEngine::Vector2 delta, ::System::Single& realDelta)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single&))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEINPUTSERVICE_TRYCONVERTTOREALDELTA_OFFSET))(this, delta, realDelta);
		}

		::System::Void SetLastDelta(::System::Single realDelta)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEINPUTSERVICE_SETLASTDELTA_OFFSET))(this, realDelta);
		}

		::System::Void BeginDragThroughAdapter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEINPUTSERVICE_BEGINDRAGTHROUGHADAPTER_OFFSET))(this);
		}

		::System::Void EndDragThroughAdapter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEINPUTSERVICE_ENDDRAGTHROUGHADAPTER_OFFSET))(this);
		}

		::System::Void OnScroll(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEINPUTSERVICE_ONSCROLL_OFFSET))(this, eventData);
		}

		::System::Single ApplyOverscrollDamping(::System::Single realDelta)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEINPUTSERVICE_APPLYOVERSCROLLDAMPING_OFFSET))(this, realDelta);
		}

		::System::Void OnScrollPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEINPUTSERVICE_ONSCROLLPOINTERUP_OFFSET))(this, eventData);
		}

		::System::Void OnScrollPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEINPUTSERVICE_ONSCROLLPOINTERDOWN_OFFSET))(this, eventData);
		}

		::System::Void OnScrollValueChanged(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEINPUTSERVICE_ONSCROLLVALUECHANGED_OFFSET))(this, value);
		}

		::System::Void OnScrollValueSimpleChanged(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEINPUTSERVICE_ONSCROLLVALUESIMPLECHANGED_OFFSET))(this, value);
		}

		::System::Single __base_ApplyOverscrollDamping(::System::Single P0)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLEINPUTSERVICE___BASE_APPLYOVERSCROLLDAMPING_OFFSET))(this, P0);
		}
	};
}
