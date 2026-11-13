#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_UIELEMENTS_DRAGENTEREVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1EFC42B0)
#define UNITYENGINE_UIELEMENTS_DRAGENTEREVENT_INIT_OFFSET UNITYSDK_OFFSET(0x1EFC4260)
#define UNITYENGINE_UIELEMENTS_DRAGENTEREVENT_LOCALINIT_OFFSET UNITYSDK_OFFSET(0x1EFC42A0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int DragEnterEvent_TypeDefinitionIndex = 5932;

	class DragEnterEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DRAGENTEREVENT_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DRAGENTEREVENT_INIT_OFFSET))(this);
		}

		::System::Void LocalInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DRAGENTEREVENT_LOCALINIT_OFFSET))(this);
		}

	};
}
