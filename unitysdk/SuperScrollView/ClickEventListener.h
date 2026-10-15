#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace SuperScrollView { class ClickEventListener; }
namespace System { class Action; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define SUPERSCROLLVIEW_CLICKEVENTLISTENER_CTOR_OFFSET UNITYSDK_OFFSET(0xE999560)
#define SUPERSCROLLVIEW_CLICKEVENTLISTENER_GET_ISPRESSD_OFFSET UNITYSDK_OFFSET(0xE999280)
#define SUPERSCROLLVIEW_CLICKEVENTLISTENER_GET_OFFSET UNITYSDK_OFFSET(0xE9991B0)
#define SUPERSCROLLVIEW_CLICKEVENTLISTENER_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0xE999290)
#define SUPERSCROLLVIEW_CLICKEVENTLISTENER_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0xE999460)
#define SUPERSCROLLVIEW_CLICKEVENTLISTENER_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0xE9994E0)
#define SUPERSCROLLVIEW_CLICKEVENTLISTENER_SETCLICKEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0xE999320)
#define SUPERSCROLLVIEW_CLICKEVENTLISTENER_SETDOUBLECLICKEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0xE999370)
#define SUPERSCROLLVIEW_CLICKEVENTLISTENER_SETPOINTERDOWNHANDLER_OFFSET UNITYSDK_OFFSET(0xE9993C0)
#define SUPERSCROLLVIEW_CLICKEVENTLISTENER_SETPOINTERUPHANDLER_OFFSET UNITYSDK_OFFSET(0xE999410)

namespace SuperScrollView
{
	class ClickEventListener : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Action* mClickedHandler; // 0x18
		::System::Action* mDoubleClickedHandler; // 0x20
		::System::Action* mOnPointerDownHandler; // 0x28
		::System::Action* mOnPointerUpHandler; // 0x30
		::System::Boolean mIsPressed; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_CLICKEVENTLISTENER_CTOR_OFFSET))(this);
		}

		static ::SuperScrollView::ClickEventListener* Get(::UnityEngine::GameObject* a1)
		{
			return ((::SuperScrollView::ClickEventListener*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_CLICKEVENTLISTENER_GET_OFFSET))(a1);
		}

		::System::Boolean get_IsPressd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_CLICKEVENTLISTENER_GET_ISPRESSD_OFFSET))(this);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_CLICKEVENTLISTENER_ONPOINTERCLICK_OFFSET))(this, a1);
		}

		::System::Void SetClickEventHandler(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_CLICKEVENTLISTENER_SETCLICKEVENTHANDLER_OFFSET))(this, a1);
		}

		::System::Void SetDoubleClickEventHandler(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_CLICKEVENTLISTENER_SETDOUBLECLICKEVENTHANDLER_OFFSET))(this, a1);
		}

		::System::Void SetPointerDownHandler(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_CLICKEVENTLISTENER_SETPOINTERDOWNHANDLER_OFFSET))(this, a1);
		}

		::System::Void SetPointerUpHandler(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_CLICKEVENTLISTENER_SETPOINTERUPHANDLER_OFFSET))(this, a1);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_CLICKEVENTLISTENER_ONPOINTERDOWN_OFFSET))(this, a1);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_CLICKEVENTLISTENER_ONPOINTERUP_OFFSET))(this, a1);
		}

	};
}
