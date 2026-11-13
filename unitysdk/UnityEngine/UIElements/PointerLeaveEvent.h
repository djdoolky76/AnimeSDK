#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_UIELEMENTS_POINTERLEAVEEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1EFD4BF0)
#define UNITYENGINE_UIELEMENTS_POINTERLEAVEEVENT_INIT_OFFSET UNITYSDK_OFFSET(0x1EFD4BA0)
#define UNITYENGINE_UIELEMENTS_POINTERLEAVEEVENT_LOCALINIT_OFFSET UNITYSDK_OFFSET(0x1EFD4BE0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PointerLeaveEvent_TypeDefinitionIndex = 5994;

	class PointerLeaveEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERLEAVEEVENT_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERLEAVEEVENT_INIT_OFFSET))(this);
		}

		::System::Void LocalInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERLEAVEEVENT_LOCALINIT_OFFSET))(this);
		}

	};
}
