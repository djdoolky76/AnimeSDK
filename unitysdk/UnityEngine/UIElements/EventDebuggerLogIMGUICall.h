#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine::UIElements { class EventBase; }

#define UNITYENGINE_UIELEMENTS_EVENTDEBUGGERLOGIMGUICALL_CTOR_OFFSET UNITYSDK_OFFSET(0x10B0)
#define UNITYENGINE_UIELEMENTS_EVENTDEBUGGERLOGIMGUICALL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10B0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int EventDebuggerLogIMGUICall_TypeDefinitionIndex = 5992;

	struct alignas(4) EventDebuggerLogIMGUICall
	{
		::System::Void _ctor(::UnityEngine::UIElements::EventBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::EventBase*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTDEBUGGERLOGIMGUICALL_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTDEBUGGERLOGIMGUICALL_DISPOSE_OFFSET))(this);
		}

	};
}
