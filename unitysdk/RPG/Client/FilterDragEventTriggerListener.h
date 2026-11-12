#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EventTriggerListener.h"
#include "unitysdk/UnityEngine/UI/TouchFilter_FilterParam.h"
namespace RPG::Client { class FilterDragEventTriggerListener; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI { class TouchFilter; }

#define RPG_CLIENT_FILTERDRAGEVENTTRIGGERLISTENER_AWAKE_OFFSET UNITYSDK_OFFSET(0xD983BD0)
#define RPG_CLIENT_FILTERDRAGEVENTTRIGGERLISTENER_CTOR_OFFSET UNITYSDK_OFFSET(0xD984200)
#define RPG_CLIENT_FILTERDRAGEVENTTRIGGERLISTENER_GET_OFFSET UNITYSDK_OFFSET(0xD983AC0)
#define RPG_CLIENT_FILTERDRAGEVENTTRIGGERLISTENER_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0xD983C20)
#define RPG_CLIENT_FILTERDRAGEVENTTRIGGERLISTENER_ONDRAG_OFFSET UNITYSDK_OFFSET(0xD983CE0)
#define RPG_CLIENT_FILTERDRAGEVENTTRIGGERLISTENER_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0xD984140)
#define RPG_CLIENT_FILTERDRAGEVENTTRIGGERLISTENER__ISDRAGDIRECTIONDETERMINED_OFFSET UNITYSDK_OFFSET(0xD983F20)
#define RPG_CLIENT_FILTERDRAGEVENTTRIGGERLISTENER__TRYREPLACEPOINTERDRAGTOPASSTHROUGH_OFFSET UNITYSDK_OFFSET(0xD983FA0)

namespace RPG::Client
{
	inline static constexpr unsigned int FilterDragEventTriggerListener_TypeDefinitionIndex = 74611;

	class FilterDragEventTriggerListener : public ::RPG::Client::EventTriggerListener
	{
	public:
		::System::Boolean _IsInDragOnFilter; // 0x90
		::System::Byte _padding0[0x7];
		::UnityEngine::UI::TouchFilter* _TouchFilter; // 0x98
		::System::Boolean NeedFilterDrag; // 0xA0
		::System::Boolean NeedReplaceDragObject; // 0xA1
		::System::Boolean IsVertical; // 0xA2
		::System::Byte _padding1[0x1];
		::UnityEngine::UI::TouchFilter_FilterParam FilterParam; // 0xA4
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FILTERDRAGEVENTTRIGGERLISTENER_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::FilterDragEventTriggerListener* Get(::UnityEngine::GameObject* a1)
		{
			return ((::RPG::Client::FilterDragEventTriggerListener*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FILTERDRAGEVENTTRIGGERLISTENER_GET_OFFSET))(a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FILTERDRAGEVENTTRIGGERLISTENER_AWAKE_OFFSET))(this);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FILTERDRAGEVENTTRIGGERLISTENER_ONBEGINDRAG_OFFSET))(this, a1);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FILTERDRAGEVENTTRIGGERLISTENER_ONDRAG_OFFSET))(this, a1);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FILTERDRAGEVENTTRIGGERLISTENER_ONENDDRAG_OFFSET))(this, a1);
		}

		::System::Boolean _IsDragDirectionDetermined(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FILTERDRAGEVENTTRIGGERLISTENER__ISDRAGDIRECTIONDETERMINED_OFFSET))(this, a1);
		}

		::System::Void _TryReplacePointerDragToPassThrough(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FILTERDRAGEVENTTRIGGERLISTENER__TRYREPLACEPOINTERDRAGTOPASSTHROUGH_OFFSET))(this, a1);
		}

	};
}
