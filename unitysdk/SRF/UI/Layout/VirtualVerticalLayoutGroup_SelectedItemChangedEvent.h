#pragma once
#include "unitysdk/unitysdk.h"

#define SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_SELECTEDITEMCHANGEDEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1ED52960)

namespace SRF::UI::Layout
{
	inline static constexpr unsigned int VirtualVerticalLayoutGroup_SelectedItemChangedEvent_TypeDefinitionIndex = 35405;

	class VirtualVerticalLayoutGroup_SelectedItemChangedEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_SELECTEDITEMCHANGEDEVENT_CTOR_OFFSET))(this);
		}

	};
}
