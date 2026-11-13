#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine { class Event; }
namespace UnityEngine::UIElements { class IPanel; }
namespace UnityEngine::UIElements { class MouseLeaveWindowEvent; }

#define UNITYENGINE_UIELEMENTS_MOUSELEAVEWINDOWEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1EFD06C0)
#define UNITYENGINE_UIELEMENTS_MOUSELEAVEWINDOWEVENT_GETPOOLED_OFFSET UNITYSDK_OFFSET(0x1EFD0700)
#define UNITYENGINE_UIELEMENTS_MOUSELEAVEWINDOWEVENT_INIT_OFFSET UNITYSDK_OFFSET(0x1EFD0560)
#define UNITYENGINE_UIELEMENTS_MOUSELEAVEWINDOWEVENT_LOCALINIT_OFFSET UNITYSDK_OFFSET(0x1EFD05A0)
#define UNITYENGINE_UIELEMENTS_MOUSELEAVEWINDOWEVENT_POSTDISPATCH_OFFSET UNITYSDK_OFFSET(0x1EFD08E0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int MouseLeaveWindowEvent_TypeDefinitionIndex = 5976;

	class MouseLeaveWindowEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSELEAVEWINDOWEVENT_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSELEAVEWINDOWEVENT_INIT_OFFSET))(this);
		}

		::System::Void LocalInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSELEAVEWINDOWEVENT_LOCALINIT_OFFSET))(this);
		}

		static ::UnityEngine::UIElements::MouseLeaveWindowEvent* GetPooled(::UnityEngine::Event* a1)
		{
			return ((::UnityEngine::UIElements::MouseLeaveWindowEvent*(*)(::UnityEngine::Event*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSELEAVEWINDOWEVENT_GETPOOLED_OFFSET))(a1);
		}

		::System::Void PostDispatch(::UnityEngine::UIElements::IPanel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::IPanel*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSELEAVEWINDOWEVENT_POSTDISPATCH_OFFSET))(this, a1);
		}

	};
}
