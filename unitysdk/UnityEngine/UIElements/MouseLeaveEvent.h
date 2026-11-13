#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_UIELEMENTS_MOUSELEAVEEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1EFD0520)
#define UNITYENGINE_UIELEMENTS_MOUSELEAVEEVENT_INIT_OFFSET UNITYSDK_OFFSET(0x1EFD04D0)
#define UNITYENGINE_UIELEMENTS_MOUSELEAVEEVENT_LOCALINIT_OFFSET UNITYSDK_OFFSET(0x1EFD0510)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int MouseLeaveEvent_TypeDefinitionIndex = 5974;

	class MouseLeaveEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSELEAVEEVENT_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSELEAVEEVENT_INIT_OFFSET))(this);
		}

		::System::Void LocalInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSELEAVEEVENT_LOCALINIT_OFFSET))(this);
		}

	};
}
