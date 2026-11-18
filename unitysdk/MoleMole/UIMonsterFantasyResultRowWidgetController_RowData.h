#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterFantasyResultRowWidgetController_RowData_TypeDefinitionIndex = 43920;

	struct alignas(8) UIMonsterFantasyResultRowWidgetController_RowData
	{
		::System::Boolean Empty; // 0x10
		::System::Byte _padding0[0x7];
		::System::String* tips; // 0x18
	};
}
