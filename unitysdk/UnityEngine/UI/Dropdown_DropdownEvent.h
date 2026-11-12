#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_UI_DROPDOWN_DROPDOWNEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x207A0240)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Dropdown_DropdownEvent_TypeDefinitionIndex = 6722;

	class Dropdown_DropdownEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_DROPDOWNEVENT_CTOR_OFFSET))(this);
		}

	};
}
