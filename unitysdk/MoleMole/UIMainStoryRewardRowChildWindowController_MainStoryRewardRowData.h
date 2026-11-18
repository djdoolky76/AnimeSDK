#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIMainStoryRewardRowChildWindowController_MainStoryRewardRowData_TypeDefinitionIndex = 72491;

	struct alignas(4) UIMainStoryRewardRowChildWindowController_MainStoryRewardRowData
	{
		::System::Int32 _vhsTemplateID; // 0x10
		::System::UInt16 _cacheStarIndexs; // 0x14
		::System::Byte _padding0[0x2];
		::System::Int32 _curdiff; // 0x18
	};
}
