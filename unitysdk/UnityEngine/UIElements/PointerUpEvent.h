#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine::UIElements { class IPanel; }

#define UNITYENGINE_UIELEMENTS_POINTERUPEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4C0380)
#define UNITYENGINE_UIELEMENTS_POINTERUPEVENT_INIT_OFFSET UNITYSDK_OFFSET(0x1F4C0220)
#define UNITYENGINE_UIELEMENTS_POINTERUPEVENT_LOCALINIT_OFFSET UNITYSDK_OFFSET(0x1F4C0260)
#define UNITYENGINE_UIELEMENTS_POINTERUPEVENT_POSTDISPATCH_OFFSET UNITYSDK_OFFSET(0x1F4C03C0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PointerUpEvent_TypeDefinitionIndex = 5983;

	class PointerUpEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERUPEVENT_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERUPEVENT_INIT_OFFSET))(this);
		}

		::System::Void LocalInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERUPEVENT_LOCALINIT_OFFSET))(this);
		}

		::System::Void PostDispatch(::UnityEngine::UIElements::IPanel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::IPanel*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERUPEVENT_POSTDISPATCH_OFFSET))(this, a1);
		}

	};
}
