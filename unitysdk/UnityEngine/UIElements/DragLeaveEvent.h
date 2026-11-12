#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_UIELEMENTS_DRAGLEAVEEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x2075F3B0)
#define UNITYENGINE_UIELEMENTS_DRAGLEAVEEVENT_INIT_OFFSET UNITYSDK_OFFSET(0x2075F360)
#define UNITYENGINE_UIELEMENTS_DRAGLEAVEEVENT_LOCALINIT_OFFSET UNITYSDK_OFFSET(0x2075F3A0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int DragLeaveEvent_TypeDefinitionIndex = 5933;

	class DragLeaveEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DRAGLEAVEEVENT_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DRAGLEAVEEVENT_INIT_OFFSET))(this);
		}

		::System::Void LocalInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DRAGLEAVEEVENT_LOCALINIT_OFFSET))(this);
		}

	};
}
