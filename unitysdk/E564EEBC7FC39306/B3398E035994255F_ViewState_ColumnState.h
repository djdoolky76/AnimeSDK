#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace E564EEBC7FC39306
{
	inline static constexpr unsigned int B3398E035994255F_ViewState_ColumnState_TypeDefinitionIndex = 13092;

	struct alignas(8) B3398E035994255F_ViewState_ColumnState
	{
		::System::Int32 index; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* name; // 0x18
		::System::Single actualWidth; // 0x20
		::System::Single width; // 0x24
		::System::Boolean visible; // 0x28
	};
}
