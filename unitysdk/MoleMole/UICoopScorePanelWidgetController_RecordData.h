#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole
{
	inline static constexpr unsigned int UICoopScorePanelWidgetController_RecordData_TypeDefinitionIndex = 86651;

	struct alignas(8) UICoopScorePanelWidgetController_RecordData
	{
		::System::Int32 score; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* textEF; // 0x18
		::System::String* title; // 0x20
	};
}
