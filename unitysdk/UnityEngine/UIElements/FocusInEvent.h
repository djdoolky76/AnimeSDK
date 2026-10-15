#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_UIELEMENTS_FOCUSINEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4B56B0)
#define UNITYENGINE_UIELEMENTS_FOCUSINEVENT_INIT_OFFSET UNITYSDK_OFFSET(0x1F4B5660)
#define UNITYENGINE_UIELEMENTS_FOCUSINEVENT_LOCALINIT_OFFSET UNITYSDK_OFFSET(0x1F4B56A0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int FocusInEvent_TypeDefinitionIndex = 5943;

	class FocusInEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSINEVENT_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSINEVENT_INIT_OFFSET))(this);
		}

		::System::Void LocalInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSINEVENT_LOCALINIT_OFFSET))(this);
		}

	};
}
