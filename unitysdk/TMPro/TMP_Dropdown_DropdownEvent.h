#pragma once
#include "unitysdk/unitysdk.h"

#define TMPRO_TMP_DROPDOWN_DROPDOWNEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2EF030)

namespace TMPro
{
	class TMP_Dropdown_DropdownEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_DROPDOWNEVENT_CTOR_OFFSET))(this);
		}

	};
}
