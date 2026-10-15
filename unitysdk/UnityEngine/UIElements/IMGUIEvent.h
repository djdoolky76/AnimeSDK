#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine { class Event; }
namespace UnityEngine::UIElements { class IMGUIEvent; }

#define UNITYENGINE_UIELEMENTS_IMGUIEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1F48ABC0)
#define UNITYENGINE_UIELEMENTS_IMGUIEVENT_GETPOOLED_OFFSET UNITYSDK_OFFSET(0x1F48AA80)
#define UNITYENGINE_UIELEMENTS_IMGUIEVENT_INIT_OFFSET UNITYSDK_OFFSET(0x1F48AB90)
#define UNITYENGINE_UIELEMENTS_IMGUIEVENT_LOCALINIT_OFFSET UNITYSDK_OFFSET(0x1F48ABB0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int IMGUIEvent_TypeDefinitionIndex = 5991;

	class IMGUIEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUIEVENT_CTOR_OFFSET))(this);
		}

		static ::UnityEngine::UIElements::IMGUIEvent* GetPooled(::UnityEngine::Event* a1)
		{
			return ((::UnityEngine::UIElements::IMGUIEvent*(*)(::UnityEngine::Event*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUIEVENT_GETPOOLED_OFFSET))(a1);
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
