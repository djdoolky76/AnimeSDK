#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine::UIElements { class MouseMoveEvent; }
namespace UnityEngine::UIElements { class PointerMoveEvent; }

#define UNITYENGINE_UIELEMENTS_MOUSEMOVEEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4BB7E0)
#define UNITYENGINE_UIELEMENTS_MOUSEMOVEEVENT_GETPOOLED_OFFSET UNITYSDK_OFFSET(0x1F4BB7A0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int MouseMoveEvent_TypeDefinitionIndex = 5962;

	class MouseMoveEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEMOVEEVENT_CTOR_OFFSET))(this);
		}

		static ::UnityEngine::UIElements::MouseMoveEvent* GetPooled(::UnityEngine::UIElements::PointerMoveEvent* a1)
		{
			return ((::UnityEngine::UIElements::MouseMoveEvent*(*)(::UnityEngine::UIElements::PointerMoveEvent*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEMOVEEVENT_GETPOOLED_OFFSET))(a1);
		}

	};
}
