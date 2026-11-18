#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine { class Event; }

#define UNITYENGINE_UIELEMENTS_IMGUIEVENT_GETPOOLED_OFFSET UNITYSDK_OFFSET(0x1D5B45A0)
#define UNITYENGINE_UIELEMENTS_IMGUIEVENT_INIT_OFFSET UNITYSDK_OFFSET(0x1D5B46E0)
#define UNITYENGINE_UIELEMENTS_IMGUIEVENT_LOCALINIT_OFFSET UNITYSDK_OFFSET(0x1D5B4760)
#define UNITYENGINE_UIELEMENTS_IMGUIEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5B4770)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int IMGUIEvent_TypeDefinitionIndex = 27589;

	class IMGUIEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUIEVENT__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::UIElements::IMGUIEvent* GetPooled(::UnityEngine::Event* systemEvent)
		{
			return ((::UnityEngine::UIElements::IMGUIEvent*(*)(::UnityEngine::Event*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUIEVENT_GETPOOLED_OFFSET))(systemEvent);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUIEVENT_INIT_OFFSET))(this);
		}

		::System::Void LocalInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUIEVENT_LOCALINIT_OFFSET))(this);
		}
	};
}
