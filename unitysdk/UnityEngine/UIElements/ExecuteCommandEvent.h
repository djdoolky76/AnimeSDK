#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_UIELEMENTS_EXECUTECOMMANDEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4B42C0)

namespace UnityEngine::UIElements
{
	class ExecuteCommandEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EXECUTECOMMANDEVENT_CTOR_OFFSET))(this);
		}

	};
}
