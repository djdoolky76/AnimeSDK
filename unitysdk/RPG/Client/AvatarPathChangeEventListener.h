#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System { class Action; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RPG_CLIENT_AVATARPATHCHANGEEVENTLISTENER_CTOR_OFFSET UNITYSDK_OFFSET(0xC707930)
#define RPG_CLIENT_AVATARPATHCHANGEEVENTLISTENER_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0xC7078B0)
#define RPG_CLIENT_AVATARPATHCHANGEEVENTLISTENER_ONSCROLL_OFFSET UNITYSDK_OFFSET(0xC707830)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarPathChangeEventListener_TypeDefinitionIndex = 71339;

	class AvatarPathChangeEventListener : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Action* OnScrollTrigger; // 0x18
		::System::Action* OnBeginDragTrigger; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPATHCHANGEEVENTLISTENER_CTOR_OFFSET))(this);
		}

		::System::Void OnScroll(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPATHCHANGEEVENTLISTENER_ONSCROLL_OFFSET))(this, a1);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPATHCHANGEEVENTLISTENER_ONBEGINDRAG_OFFSET))(this, a1);
		}

	};
}
