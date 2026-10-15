#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine { class Event; }
namespace UnityEngine::UIElements { class DragExitedEvent; }
namespace UnityEngine::UIElements { class IPanel; }

#define UNITYENGINE_UIELEMENTS_DRAGEXITEDEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4AF090)
#define UNITYENGINE_UIELEMENTS_DRAGEXITEDEVENT_GETPOOLED_OFFSET UNITYSDK_OFFSET(0x1F4AF120)
#define UNITYENGINE_UIELEMENTS_DRAGEXITEDEVENT_INIT_OFFSET UNITYSDK_OFFSET(0x1F4AF040)
#define UNITYENGINE_UIELEMENTS_DRAGEXITEDEVENT_LOCALINIT_OFFSET UNITYSDK_OFFSET(0x1F4AF080)
#define UNITYENGINE_UIELEMENTS_DRAGEXITEDEVENT_POSTDISPATCH_OFFSET UNITYSDK_OFFSET(0x1F4AF320)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int DragExitedEvent_TypeDefinitionIndex = 5923;

	class DragExitedEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DRAGEXITEDEVENT_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DRAGEXITEDEVENT_INIT_OFFSET))(this);
		}

		::System::Void LocalInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DRAGEXITEDEVENT_LOCALINIT_OFFSET))(this);
		}

		static ::UnityEngine::UIElements::DragExitedEvent* GetPooled(::UnityEngine::Event* a1)
		{
			return ((::UnityEngine::UIElements::DragExitedEvent*(*)(::UnityEngine::Event*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DRAGEXITEDEVENT_GETPOOLED_OFFSET))(a1);
		}

		::System::Void PostDispatch(::UnityEngine::UIElements::IPanel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::IPanel*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DRAGEXITEDEVENT_POSTDISPATCH_OFFSET))(this, a1);
		}

	};
}
