#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NAPScrollView/DataStruct/ScrollViewInputServiceBase.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace NAPScrollView::DataStruct { class NotSimpleScrollViewAdapterServices; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEINPUTSERVICE_APPLYOVERSCROLLDAMPING_OFFSET UNITYSDK_OFFSET(0x13ECE540)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEINPUTSERVICE_BEGINDRAGTHROUGHADAPTER_OFFSET UNITYSDK_OFFSET(0x13ECE5F0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEINPUTSERVICE_ENDDRAGTHROUGHADAPTER_OFFSET UNITYSDK_OFFSET(0x13ECE820)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEINPUTSERVICE_ONSCROLLPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x13ECEED0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEINPUTSERVICE_ONSCROLLPOINTERUP_OFFSET UNITYSDK_OFFSET(0x13ECEE30)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEINPUTSERVICE_ONSCROLLVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x13ECEF70)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEINPUTSERVICE_ONSCROLLVALUESIMPLECHANGED_OFFSET UNITYSDK_OFFSET(0x13ECF020)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEINPUTSERVICE_ONSCROLL_OFFSET UNITYSDK_OFFSET(0x13ECEA80)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEINPUTSERVICE_SETLASTDELTA_OFFSET UNITYSDK_OFFSET(0x13ECE4D0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEINPUTSERVICE_TRYCONVERTTOREALDELTA_OFFSET UNITYSDK_OFFSET(0x13ECE440)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEINPUTSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x13ECE430)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEINPUTSERVICE___BASE_APPLYOVERSCROLLDAMPING_OFFSET UNITYSDK_OFFSET(0x13ECF080)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int NotSimpleInputService_TypeDefinitionIndex = 76228;

	class NotSimpleInputService : public ::NAPScrollView::DataStruct::ScrollViewInputServiceBase
	{
	public:
		::NAPScrollView::DataStruct::NotSimpleScrollViewAdapterServices* _services; // 0x20

		::System::Void _ctor(::NAPScrollView::DataStruct::NotSimpleScrollViewAdapterServices* services)
		{
			return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::NotSimpleScrollViewAdapterServices*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEINPUTSERVICE__CTOR_OFFSET))(this, services);
		}

		::System::Boolean TryConvertToRealDelta(::UnityEngine::Vector2 delta, ::System::Single& realDelta)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single&))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEINPUTSERVICE_TRYCONVERTTOREALDELTA_OFFSET))(this, delta, realDelta);
		}

		::System::Void SetLastDelta(::System::Single realDelta)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEINPUTSERVICE_SETLASTDELTA_OFFSET))(this, realDelta);
		}

		::System::Single ApplyOverscrollDamping(::System::Single realDelta)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEINPUTSERVICE_APPLYOVERSCROLLDAMPING_OFFSET))(this, realDelta);
		}

		::System::Void BeginDragThroughAdapter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEINPUTSERVICE_BEGINDRAGTHROUGHADAPTER_OFFSET))(this);
		}

		::System::Void EndDragThroughAdapter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEINPUTSERVICE_ENDDRAGTHROUGHADAPTER_OFFSET))(this);
		}

		::System::Void OnScroll(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEINPUTSERVICE_ONSCROLL_OFFSET))(this, eventData);
		}

		::System::Void OnScrollPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEINPUTSERVICE_ONSCROLLPOINTERUP_OFFSET))(this, eventData);
		}

		::System::Void OnScrollPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEINPUTSERVICE_ONSCROLLPOINTERDOWN_OFFSET))(this, eventData);
		}

		::System::Void OnScrollValueChanged(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEINPUTSERVICE_ONSCROLLVALUECHANGED_OFFSET))(this, value);
		}

		::System::Void OnScrollValueSimpleChanged(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEINPUTSERVICE_ONSCROLLVALUESIMPLECHANGED_OFFSET))(this, value);
		}

		::System::Single __base_ApplyOverscrollDamping(::System::Single P0)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEINPUTSERVICE___BASE_APPLYOVERSCROLLDAMPING_OFFSET))(this, P0);
		}
	};
}
