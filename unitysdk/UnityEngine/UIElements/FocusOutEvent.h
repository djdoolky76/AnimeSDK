#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_UIELEMENTS_FOCUSOUTEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x207655C0)
#define UNITYENGINE_UIELEMENTS_FOCUSOUTEVENT_INIT_OFFSET UNITYSDK_OFFSET(0x20765570)
#define UNITYENGINE_UIELEMENTS_FOCUSOUTEVENT_LOCALINIT_OFFSET UNITYSDK_OFFSET(0x207655B0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int FocusOutEvent_TypeDefinitionIndex = 5949;

	class FocusOutEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSOUTEVENT_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSOUTEVENT_INIT_OFFSET))(this);
		}

		::System::Void LocalInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSOUTEVENT_LOCALINIT_OFFSET))(this);
		}

	};
}
