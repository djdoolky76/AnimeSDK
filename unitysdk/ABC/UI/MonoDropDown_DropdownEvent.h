#pragma once
#include "unitysdk/unitysdk.h"

#define ABC_UI_MONODROPDOWN_DROPDOWNEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1FCBBD0)

namespace ABC::UI
{
	inline static constexpr unsigned int MonoDropDown_DropdownEvent_TypeDefinitionIndex = 8016;

	class MonoDropDown_DropdownEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONODROPDOWN_DROPDOWNEVENT__CTOR_OFFSET))(this);
		}
	};
}
