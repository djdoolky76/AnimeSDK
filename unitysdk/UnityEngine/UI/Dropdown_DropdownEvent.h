#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_UI_DROPDOWN_DROPDOWNEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4C26C0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Dropdown_DropdownEvent_TypeDefinitionIndex = 6711;

	class Dropdown_DropdownEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_DROPDOWNEVENT_CTOR_OFFSET))(this);
		}

	};
}
