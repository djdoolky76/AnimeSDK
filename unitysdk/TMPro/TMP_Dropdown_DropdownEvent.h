#pragma once
#include "unitysdk/unitysdk.h"

#define TMPRO_TMP_DROPDOWN_DROPDOWNEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1FFB1530)

namespace TMPro
{
	inline static constexpr unsigned int TMP_Dropdown_DropdownEvent_TypeDefinitionIndex = 37790;

	class TMP_Dropdown_DropdownEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_DROPDOWNEVENT__CTOR_OFFSET))(this);
		}
	};
}
