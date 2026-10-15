#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_UIELEMENTS_POINTERENTEREVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4BF240)
#define UNITYENGINE_UIELEMENTS_POINTERENTEREVENT_INIT_OFFSET UNITYSDK_OFFSET(0x1F4BF1F0)
#define UNITYENGINE_UIELEMENTS_POINTERENTEREVENT_LOCALINIT_OFFSET UNITYSDK_OFFSET(0x1F4BF230)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PointerEnterEvent_TypeDefinitionIndex = 5985;

	class PointerEnterEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERENTEREVENT_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERENTEREVENT_INIT_OFFSET))(this);
		}

		::System::Void LocalInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERENTEREVENT_LOCALINIT_OFFSET))(this);
		}

	};
}
